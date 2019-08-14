/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2019  Neil Roberts
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "pcx-superfight.h"

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <errno.h>

#include "pcx-util.h"
#include "pcx-buffer.h"
#include "pcx-main-context.h"
#include "pcx-superfight-help.h"
#include "pcx-superfight-deck.h"

#define PCX_SUPERFIGHT_MIN_PLAYERS 3
#define PCX_SUPERFIGHT_MAX_PLAYERS 6

#define N_CARD_CHOICE 3

struct pcx_superfight;

struct pcx_superfight_player {
        char *name;
};

struct pcx_superfight_fighter {
        const char *roles[N_CARD_CHOICE];
        const char *attributes[N_CARD_CHOICE];
        const char *chosen_role;
        const char *chosen_attribute;
        const char *forced_attribute;
        int player_num;
};

struct pcx_superfight {
        struct pcx_superfight_player players[PCX_SUPERFIGHT_MAX_PLAYERS];
        int n_players;
        int current_player;
        struct pcx_game_callbacks callbacks;
        void *user_data;
        struct pcx_main_context_source *game_over_source;
        enum pcx_text_language language;

        struct pcx_superfight_fighter fighters[2];

        struct pcx_superfight_deck *roles;
        struct pcx_superfight_deck *attributes;
};

static void
append_buffer_string(struct pcx_superfight *superfight,
                     struct pcx_buffer *buffer,
                     enum pcx_text_string string)
{
        const char *value = pcx_text_get(superfight->language, string);
        pcx_buffer_append_string(buffer, value);
}

static void
append_buffer_vprintf(struct pcx_superfight *superfight,
                      struct pcx_buffer *buffer,
                      enum pcx_text_string string,
                      va_list ap)
{
        const char *format = pcx_text_get(superfight->language, string);
        pcx_buffer_append_vprintf(buffer, format, ap);
}

static void
append_buffer_printf(struct pcx_superfight *superfight,
                     struct pcx_buffer *buffer,
                     enum pcx_text_string string,
                     ...)
{
        va_list ap;
        va_start(ap, string);
        append_buffer_vprintf(superfight, buffer, string, ap);
        va_end(ap);
}

static void
game_note(struct pcx_superfight *superfight,
          enum pcx_text_string format,
          ...)
{
        struct pcx_buffer buf = PCX_BUFFER_STATIC_INIT;

        va_list ap;

        va_start(ap, format);
        append_buffer_vprintf(superfight, &buf, format, ap);
        va_end(ap);

        superfight->callbacks.send_message(PCX_GAME_MESSAGE_FORMAT_PLAIN,
                                           (const char *) buf.data,
                                           0, /* n_buttons */
                                           NULL, /* buttons */
                                           superfight->user_data);

        pcx_buffer_destroy(&buf);
}

static void
free_game(struct pcx_superfight *superfight)
{
        for (int i = 0; i < superfight->n_players; i++)
                pcx_free(superfight->players[i].name);

        pcx_superfight_deck_free(superfight->roles);
        pcx_superfight_deck_free(superfight->attributes);

        if (superfight->game_over_source)
                pcx_main_context_remove_source(superfight->game_over_source);

        pcx_free(superfight);
}

static void
append_card_choice(struct pcx_superfight *superfight,
                   struct pcx_buffer *buf,
                   enum pcx_text_string note,
                   const char **cards)
{
        append_buffer_string(superfight, buf, note);
        pcx_buffer_append_string(buf, "\n\n");

        for (unsigned i = 0; i < N_CARD_CHOICE; i++)
                pcx_buffer_append_printf(buf, "%c) %s\n", 'A' + i, cards[i]);

        pcx_buffer_append_string(buf, "\n");
}

static void
get_card_buttons(struct pcx_superfight *superfight,
                 const char **cards,
                 const char *keyword,
                 struct pcx_game_button *buttons)
{
        for (unsigned i = 0; i < N_CARD_CHOICE; i++) {
                struct pcx_buffer buf = PCX_BUFFER_STATIC_INIT;

                pcx_buffer_append_printf(&buf, "%c", 'A' + i);
                buttons[i].text = (char *) buf.data;

                pcx_buffer_init(&buf);
                pcx_buffer_append_printf(&buf, "%s:%u", keyword, i);
                buttons[i].data = (char *) buf.data;
        }
}

static void
send_card_choice(struct pcx_superfight *superfight,
                 struct pcx_superfight_fighter *fighter)
{
        struct pcx_buffer buf = PCX_BUFFER_STATIC_INIT;

        if (fighter->chosen_role == NULL) {
                append_card_choice(superfight,
                                   &buf,
                                   PCX_TEXT_STRING_POSSIBLE_ROLES,
                                   fighter->roles);
        }

        append_card_choice(superfight,
                           &buf,
                           PCX_TEXT_STRING_POSSIBLE_ATTRIBUTES,
                           fighter->attributes);

        struct pcx_game_button buttons[N_CARD_CHOICE];

        if (fighter->chosen_role == NULL) {
                append_buffer_string(superfight,
                                     &buf,
                                     PCX_TEXT_STRING_CHOOSE_ROLE);
                get_card_buttons(superfight, fighter->roles, "role", buttons);
        } else {
                append_buffer_string(superfight,
                                     &buf,
                                     PCX_TEXT_STRING_CHOOSE_ATTRIBUTE);
                get_card_buttons(superfight,
                                 fighter->attributes,
                                 "attribute",
                                 buttons);
        }

        enum pcx_game_message_format format = PCX_GAME_MESSAGE_FORMAT_PLAIN;

        superfight->callbacks.send_private_message(fighter->player_num,
                                                   format,
                                                   (const char *) buf.data,
                                                   N_CARD_CHOICE,
                                                   buttons,
                                                   superfight->user_data);

        for (unsigned i = 0; i < PCX_N_ELEMENTS(buttons); i++) {
                pcx_free((char *) buttons[i].text);
                pcx_free((char *) buttons[i].data);
        }

        pcx_buffer_destroy(&buf);
}

static void
draw_cards(struct pcx_superfight_deck *deck,
           const char **cards,
           size_t n_cards)
{
        for (size_t i = 0; i < n_cards; i++)
                cards[i] = pcx_superfight_deck_draw_card(deck);
}

static void
start_fight(struct pcx_superfight *superfight)
{
        game_note(superfight,
                  PCX_TEXT_STRING_FIGHTERS_ARE,
                  superfight->players[superfight->fighters[0].player_num].name,
                  superfight->players[superfight->fighters[1].player_num].name);

        for (unsigned fighter_num = 0;
             fighter_num < PCX_N_ELEMENTS(superfight->fighters);
             fighter_num++) {
                struct pcx_superfight_fighter *fighter =
                        superfight->fighters + fighter_num;

                draw_cards(superfight->roles,
                           fighter->roles,
                           PCX_N_ELEMENTS(fighter->roles));
                draw_cards(superfight->attributes,
                           fighter->attributes,
                           PCX_N_ELEMENTS(fighter->attributes));

                fighter->chosen_role = NULL;
                fighter->chosen_attribute = NULL;

                send_card_choice(superfight, fighter);
        }
}

static void *
create_game_cb(const struct pcx_game_callbacks *callbacks,
               void *user_data,
               enum pcx_text_language language,
               int n_players,
               const char * const *names)
{
        assert(n_players > 0 && n_players <= PCX_SUPERFIGHT_MAX_PLAYERS);

        struct pcx_superfight *superfight = pcx_calloc(sizeof *superfight);

        superfight->language = language;
        superfight->callbacks = *callbacks;
        superfight->user_data = user_data;

        superfight->n_players = n_players;
        superfight->current_player = rand() % n_players;
        superfight->fighters[0].player_num = superfight->current_player;
        superfight->fighters[1].player_num =
                (superfight->current_player + 1) % n_players;

        superfight->roles =
                pcx_superfight_deck_load(language, "roles");
        superfight->attributes =
                pcx_superfight_deck_load(language, "attributes");

        for (unsigned i = 0; i < n_players; i++)
                superfight->players[i].name = pcx_strdup(names[i]);

        start_fight(superfight);

        return superfight;
}

static char *
get_help_cb(enum pcx_text_language language)
{
        return pcx_strdup(pcx_superfight_help[language]);
}

static void
handle_callback_data_cb(void *user_data,
                        int player_num,
                        const char *callback_data)
{
        struct pcx_superfight *superfight = user_data;

        assert(player_num >= 0 && player_num < superfight->n_players);
}

static void
free_game_cb(void *data)
{
        free_game(data);
}

const struct pcx_game
pcx_superfight_game = {
        .name = "superfight",
        .name_string = PCX_TEXT_STRING_NAME_SUPERFIGHT,
        .start_command = PCX_TEXT_STRING_SUPERFIGHT_START_COMMAND,
        .min_players = PCX_SUPERFIGHT_MIN_PLAYERS,
        .max_players = PCX_SUPERFIGHT_MAX_PLAYERS,
        .create_game_cb = create_game_cb,
        .get_help_cb = get_help_cb,
        .handle_callback_data_cb = handle_callback_data_cb,
        .free_game_cb = free_game_cb
};
