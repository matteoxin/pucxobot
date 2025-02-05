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

#ifndef PCX_TEXT_H
#define PCX_TEXT_H

#include <stdarg.h>
#include <stdbool.h>

#include "pcx-buffer.h"

enum pcx_text_language {
        PCX_TEXT_LANGUAGE_ESPERANTO,
        PCX_TEXT_LANGUAGE_FRENCH,
        PCX_TEXT_LANGUAGE_ENGLISH,
        PCX_TEXT_LANGUAGE_PT_BR,
        PCX_TEXT_LANGUAGE_CHINESE_TRADITIONAL,
        PCX_TEXT_LANGUAGE_ITALIAN,
};

enum pcx_text_string {
        PCX_TEXT_STRING_LANGUAGE_CODE,
        PCX_TEXT_STRING_NAME_COUP,
        PCX_TEXT_STRING_NAME_SNITCH,
        PCX_TEXT_STRING_NAME_LOVE,
        PCX_TEXT_STRING_NAME_SIX,
        PCX_TEXT_STRING_NAME_FOX,
        PCX_TEXT_STRING_NAME_WORDPARTY,
        PCX_TEXT_STRING_NAME_CHAMELEON,
        PCX_TEXT_STRING_NAME_SUPERFIGHT,
        PCX_TEXT_STRING_NAME_ZOMBIE,
        PCX_TEXT_STRING_COUP_START_COMMAND,
        PCX_TEXT_STRING_COUP_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_SNITCH_START_COMMAND,
        PCX_TEXT_STRING_SNITCH_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_LOVE_START_COMMAND,
        PCX_TEXT_STRING_LOVE_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_SIX_START_COMMAND,
        PCX_TEXT_STRING_SIX_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_FOX_START_COMMAND,
        PCX_TEXT_STRING_FOX_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_WORDPARTY_START_COMMAND,
        PCX_TEXT_STRING_WORDPARTY_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_CHAMELEON_START_COMMAND,
        PCX_TEXT_STRING_CHAMELEON_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_SUPERFIGHT_START_COMMAND,
        PCX_TEXT_STRING_SUPERFIGHT_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_ZOMBIE_START_COMMAND,
        PCX_TEXT_STRING_ZOMBIE_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_WHICH_HELP,
        PCX_TEXT_STRING_TIMEOUT_START,
        PCX_TEXT_STRING_TIMEOUT_ABANDON,
        PCX_TEXT_STRING_NEED_PUBLIC_GROUP,
        PCX_TEXT_STRING_SEND_PRIVATE_MESSAGE,
        PCX_TEXT_STRING_ALREADY_IN_GAME,
        PCX_TEXT_STRING_ALREADY_GAME,
        PCX_TEXT_STRING_WHICH_GAME,
        PCX_TEXT_STRING_GAME_FULL,
        PCX_TEXT_STRING_GAME_ALREADY_STARTED,
        PCX_TEXT_STRING_NO_GAME,
        PCX_TEXT_STRING_CANCELED,
        PCX_TEXT_STRING_CANT_CANCEL,
        PCX_TEXT_STRING_NAME_FROM_ID,
        PCX_TEXT_STRING_FINAL_CONJUNCTION,
        PCX_TEXT_STRING_FINAL_DISJUNCTION,
        PCX_TEXT_STRING_WELCOME,
        PCX_TEXT_STRING_WELCOME_FULL,
        PCX_TEXT_STRING_WELCOME_BUTTONS,
        PCX_TEXT_STRING_WELCOME_BUTTONS_TOO_FEW,
        PCX_TEXT_STRING_WELCOME_BUTTONS_FULL,
        PCX_TEXT_STRING_PLAYER_LEFT,
        PCX_TEXT_STRING_START_BUTTON,
        PCX_TEXT_STRING_CHOSEN_GAME,
        PCX_TEXT_STRING_CURRENT_PLAYERS,
        PCX_TEXT_STRING_JOIN_BEFORE_START,
        PCX_TEXT_STRING_NEED_MIN_PLAYERS,
        PCX_TEXT_STRING_JOIN_COMMAND,
        PCX_TEXT_STRING_JOIN_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_START_COMMAND,
        PCX_TEXT_STRING_START_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_CANCEL_COMMAND,
        PCX_TEXT_STRING_CANCEL_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_HELP_COMMAND,
        PCX_TEXT_STRING_HELP_COMMAND_DESCRIPTION,
        PCX_TEXT_STRING_RECEIVED_PRIVATE_MESSAGE,
        PCX_TEXT_STRING_CHOOSE_GAME_TYPE,
        PCX_TEXT_STRING_GAME_TYPE_CHOSEN,
        PCX_TEXT_STRING_GAME_TYPE_ORIGINAL,
        PCX_TEXT_STRING_GAME_TYPE_INSPECTOR,
        PCX_TEXT_STRING_GAME_TYPE_REFORMATION,
        PCX_TEXT_STRING_GAME_TYPE_REFORMATION_INSPECTOR,
        PCX_TEXT_STRING_COUP,
        PCX_TEXT_STRING_INCOME,
        PCX_TEXT_STRING_FOREIGN_AID,
        PCX_TEXT_STRING_TAX,
        PCX_TEXT_STRING_CONVERT,
        PCX_TEXT_STRING_EMBEZZLE,
        PCX_TEXT_STRING_ASSASSINATE,
        PCX_TEXT_STRING_EXCHANGE,
        PCX_TEXT_STRING_EXCHANGE_INSPECTOR,
        PCX_TEXT_STRING_INSPECT,
        PCX_TEXT_STRING_STEAL,
        PCX_TEXT_STRING_ACCEPT,
        PCX_TEXT_STRING_CHALLENGE,
        PCX_TEXT_STRING_BLOCK,
        PCX_TEXT_STRING_1_COIN,
        PCX_TEXT_STRING_PLURAL_COINS,
        PCX_TEXT_STRING_YOUR_CARDS_ARE,
        PCX_TEXT_STRING_NOONE,
        PCX_TEXT_STRING_WON_1,
        PCX_TEXT_STRING_WON_PLURAL,
        PCX_TEXT_STRING_YOUR_GO,
        PCX_TEXT_STRING_WHICH_CARD_TO_LOSE,
        PCX_TEXT_STRING_CHALLENGE_SUCCEEDED,
        PCX_TEXT_STRING_INVERTED_CHALLENGE_SUCCEEDED,
        PCX_TEXT_STRING_CHALLENGE_FAILED,
        PCX_TEXT_STRING_INVERTED_CHALLENGE_FAILED,
        PCX_TEXT_STRING_CHOOSING_REVEAL,
        PCX_TEXT_STRING_CHOOSING_REVEAL_INVERTED,
        PCX_TEXT_STRING_ANNOUNCE_CHALLENGE,
        PCX_TEXT_STRING_ANNOUNCE_INVERTED_CHALLENGE,
        PCX_TEXT_STRING_CONCEDE,
        PCX_TEXT_STRING_SHOW_CARDS,
        PCX_TEXT_STRING_NO_CHALLENGE_SO_BLOCK,
        PCX_TEXT_STRING_CLAIM_CARDS_TO_BLOCK,
        PCX_TEXT_STRING_DOES_SOMEBODY_CHALLENGE,
        PCX_TEXT_STRING_OR_BLOCK_NO_TARGET,
        PCX_TEXT_STRING_BLOCK_NO_TARGET,
        PCX_TEXT_STRING_OR_BLOCK_OTHER_ALLEGIANCE,
        PCX_TEXT_STRING_BLOCK_OTHER_ALLEGIANCE,
        PCX_TEXT_STRING_OR_BLOCK_WITH_TARGET,
        PCX_TEXT_STRING_BLOCK_WITH_TARGET,
        PCX_TEXT_STRING_WHO_TO_COUP,
        PCX_TEXT_STRING_DOING_COUP,
        PCX_TEXT_STRING_DOING_INCOME,
        PCX_TEXT_STRING_REALLY_DOING_FOREIGN_AID,
        PCX_TEXT_STRING_DOING_FOREIGN_AID,
        PCX_TEXT_STRING_EMBEZZLING,
        PCX_TEXT_STRING_REALLY_EMBEZZLING,
        PCX_TEXT_STRING_REALLY_DOING_TAX,
        PCX_TEXT_STRING_DOING_TAX,
        PCX_TEXT_STRING_WHO_TO_CONVERT,
        PCX_TEXT_STRING_CONVERTS_SELF,
        PCX_TEXT_STRING_CONVERTS_SOMEONE_ELSE,
        PCX_TEXT_STRING_REALLY_DOING_ASSASSINATION,
        PCX_TEXT_STRING_SELECT_TARGET_ASSASSINATION,
        PCX_TEXT_STRING_DOING_ASSASSINATION,
        PCX_TEXT_STRING_WHICH_CARDS_TO_KEEP,
        PCX_TEXT_STRING_REALLY_DOING_EXCHANGE,
        PCX_TEXT_STRING_DOING_EXCHANGE,
        PCX_TEXT_STRING_DOING_EXCHANGE_INSPECTOR,
        PCX_TEXT_STRING_REALLY_DOING_INSPECT,
        PCX_TEXT_STRING_SELECT_TARGET_INSPECT,
        PCX_TEXT_STRING_DOING_INSPECT,
        PCX_TEXT_STRING_CHOOSE_CARD_TO_SHOW,
        PCX_TEXT_STRING_OTHER_PLAYER_DECIDING_CAN_KEEP,
        PCX_TEXT_STRING_SHOWING_CARD,
        PCX_TEXT_STRING_YES,
        PCX_TEXT_STRING_NO,
        PCX_TEXT_STRING_ALLOW_KEEP,
        PCX_TEXT_STRING_DONT_ALLOW_KEEP,
        PCX_TEXT_STRING_REALLY_DOING_STEAL,
        PCX_TEXT_STRING_SELECT_TARGET_STEAL,
        PCX_TEXT_STRING_DOING_STEAL,
        PCX_TEXT_STRING_CHARACTER_NAME_DUKE,
        PCX_TEXT_STRING_CHARACTER_NAME_ASSASSIN,
        PCX_TEXT_STRING_CHARACTER_NAME_CONTESSA,
        PCX_TEXT_STRING_CHARACTER_NAME_CAPTAIN,
        PCX_TEXT_STRING_CHARACTER_NAME_AMBASSADOR,
        PCX_TEXT_STRING_CHARACTER_NAME_INSPECTOR,
        PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_DUKE,
        PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_ASSASSIN,
        PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CONTESSA,
        PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CAPTAIN,
        PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_AMBASSADOR,
        PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_INSPECTOR,
        PCX_TEXT_STRING_COINS_IN_TREASURY,
        PCX_TEXT_STRING_ROLE_NAME_DRIVER,
        PCX_TEXT_STRING_ROLE_NAME_LOCKPICK,
        PCX_TEXT_STRING_ROLE_NAME_MUSCLE,
        PCX_TEXT_STRING_ROLE_NAME_CON_ARTIST,
        PCX_TEXT_STRING_ROLE_NAME_LOOKOUT,
        PCX_TEXT_STRING_ROLE_NAME_SNITCH,
        PCX_TEXT_STRING_ROUND_NUM,
        PCX_TEXT_STRING_CHOOSE_HEIST_DIFFICULTY,
        PCX_TEXT_STRING_HEIST_SIZE_CHOSEN,
        PCX_TEXT_STRING_DISCUSS_HEIST,
        PCX_TEXT_STRING_CARDS_CHOSEN,
        PCX_TEXT_STRING_NEEDED_CARDS_WERE,
        PCX_TEXT_STRING_YOU_CHOSE,
        PCX_TEXT_STRING_WHICH_ROLE,
        PCX_TEXT_STRING_HEIST_SUCCESS,
        PCX_TEXT_STRING_HEIST_FAILED,
        PCX_TEXT_STRING_SNITCH_GAIN_1,
        PCX_TEXT_STRING_SNITCH_GAIN_PLURAL,
        PCX_TEXT_STRING_EVERYONE_SNITCHED,
        PCX_TEXT_STRING_NOONE_SNITCHED,
        PCX_TEXT_STRING_1_SNITCH,
        PCX_TEXT_STRING_PLURAL_SNITCHES,
        PCX_TEXT_STRING_GUARD,
        PCX_TEXT_STRING_GUARD_OBJECT,
        PCX_TEXT_STRING_GUARD_DESCRIPTION,
        PCX_TEXT_STRING_SPY,
        PCX_TEXT_STRING_SPY_OBJECT,
        PCX_TEXT_STRING_SPY_DESCRIPTION,
        PCX_TEXT_STRING_BARON,
        PCX_TEXT_STRING_BARON_OBJECT,
        PCX_TEXT_STRING_BARON_DESCRIPTION,
        PCX_TEXT_STRING_HANDMAID,
        PCX_TEXT_STRING_HANDMAID_OBJECT,
        PCX_TEXT_STRING_HANDMAID_DESCRIPTION,
        PCX_TEXT_STRING_PRINCE,
        PCX_TEXT_STRING_PRINCE_OBJECT,
        PCX_TEXT_STRING_PRINCE_DESCRIPTION,
        PCX_TEXT_STRING_KING,
        PCX_TEXT_STRING_KING_OBJECT,
        PCX_TEXT_STRING_KING_DESCRIPTION,
        PCX_TEXT_STRING_COMTESSE,
        PCX_TEXT_STRING_COMTESSE_OBJECT,
        PCX_TEXT_STRING_COMTESSE_DESCRIPTION,
        PCX_TEXT_STRING_PRINCESS,
        PCX_TEXT_STRING_PRINCESS_OBJECT,
        PCX_TEXT_STRING_PRINCESS_DESCRIPTION,
        PCX_TEXT_STRING_ONE_COPY,
        PCX_TEXT_STRING_PLURAL_COPIES,
        PCX_TEXT_STRING_YOUR_CARD_IS,
        PCX_TEXT_STRING_VISIBLE_CARDS,
        PCX_TEXT_STRING_N_CARDS,
        PCX_TEXT_STRING_YOUR_GO_NO_QUESTION,
        PCX_TEXT_STRING_DISCARD_WHICH_CARD,
        PCX_TEXT_STRING_EVERYONE_PROTECTED,
        PCX_TEXT_STRING_WHO_GUESS,
        PCX_TEXT_STRING_GUESS_WHICH_CARD,
        PCX_TEXT_STRING_GUARD_SUCCESS,
        PCX_TEXT_STRING_GUARD_FAIL,
        PCX_TEXT_STRING_WHO_SEE_CARD,
        PCX_TEXT_STRING_SHOWS_CARD,
        PCX_TEXT_STRING_TELL_SPIED_CARD,
        PCX_TEXT_STRING_WHO_COMPARE,
        PCX_TEXT_STRING_COMPARE_LOSER,
        PCX_TEXT_STRING_TELL_COMPARE,
        PCX_TEXT_STRING_COMPARE_CARDS_EQUAL,
        PCX_TEXT_STRING_DISCARDS_HANDMAID,
        PCX_TEXT_STRING_WHO_PRINCE,
        PCX_TEXT_STRING_PRINCE_SELF,
        PCX_TEXT_STRING_PRINCE_OTHER,
        PCX_TEXT_STRING_FORCE_DISCARD_PRINCESS,
        PCX_TEXT_STRING_FORCE_DISCARD_OTHER,
        PCX_TEXT_STRING_WHO_EXCHANGE,
        PCX_TEXT_STRING_TELL_EXCHANGE,
        PCX_TEXT_STRING_EXCHANGES,
        PCX_TEXT_STRING_DISCARDS_COMTESSE,
        PCX_TEXT_STRING_DISCARDS_PRINCESS,
        PCX_TEXT_STRING_EVERYBODY_SHOWS_CARD,
        PCX_TEXT_STRING_SET_ASIDE_CARD,
        PCX_TEXT_STRING_WINS_ROUND,
        PCX_TEXT_STRING_WINS_PRINCESS,
        PCX_TEXT_STRING_FIGHTERS_ARE,
        PCX_TEXT_STRING_POSSIBLE_ROLES,
        PCX_TEXT_STRING_POSSIBLE_ATTRIBUTES,
        PCX_TEXT_STRING_CHOOSE_ROLE,
        PCX_TEXT_STRING_CHOOSE_ATTRIBUTE,
        PCX_TEXT_STRING_YOUR_FIGHTER_IS,
        PCX_TEXT_STRING_FIGHTERS_CHOSEN,
        PCX_TEXT_STRING_NOW_ARGUE,
        PCX_TEXT_STRING_DONT_FORGET_TO_VOTE,
        PCX_TEXT_STRING_YOU_CAN_VOTE,
        PCX_TEXT_STRING_X_VOTED_Y,
        PCX_TEXT_STRING_CURRENT_VOTES_ARE,
        PCX_TEXT_STRING_FIGHT_EQUAL_RESULT,
        PCX_TEXT_STRING_FIGHT_WINNER_IS,
        PCX_TEXT_STRING_STAYS_ON,
        PCX_TEXT_STRING_THROW,
        PCX_TEXT_STRING_STOP,
        PCX_TEXT_STRING_STOP_SCORE,
        PCX_TEXT_STRING_THROW_FIRST_DICE,
        PCX_TEXT_STRING_YOUR_DICE_ARE,
        PCX_TEXT_STRING_THROWING_DICE,
        PCX_TEXT_STRING_SCORE_SO_FAR,
        PCX_TEXT_STRING_DICE_IN_HAND,
        PCX_TEXT_STRING_NO_DICE_IN_HAND,
        PCX_TEXT_STRING_REMAINING_DICE_IN_BOX,
        PCX_TEXT_STRING_YOU_ARE_DEAD,
        PCX_TEXT_STRING_THROW_OR_STOP,
        PCX_TEXT_STRING_START_LAST_ROUND,
        PCX_TEXT_STRING_WINS,
        PCX_TEXT_STRING_FINAL_SCORES,
        PCX_TEXT_STRING_EVERYBODY_CHOOSE_CARD,
        PCX_TEXT_STRING_WHICH_CARD_TO_PLAY,
        PCX_TEXT_STRING_CARD_CHOSEN,
        PCX_TEXT_STRING_CHOSEN_CARDS_ARE,
        PCX_TEXT_STRING_ADDED_TO_ROW,
        PCX_TEXT_STRING_ROW_FULL,
        PCX_TEXT_STRING_CHOOSE_ROW,
        PCX_TEXT_STRING_CHOSEN_ROW,
        PCX_TEXT_STRING_ROUND_OVER,
        PCX_TEXT_STRING_END_POINTS,
        PCX_TEXT_STRING_WINS_PLAIN,
        PCX_TEXT_STRING_YOU_ARE_LEADER,
        PCX_TEXT_STRING_PLAYER_PLAYED,
        PCX_TEXT_STRING_FOLLOW_PLAYER,
        PCX_TEXT_STRING_PLAYED_THREE,
        PCX_TEXT_STRING_PLAYED_FIVE,
        PCX_TEXT_STRING_TRICK_WINNER,
        PCX_TEXT_STRING_TRICKS_IN_ROUND_ARE,
        PCX_TEXT_STRING_WIN_TRICK_SEVEN,
        PCX_TEXT_STRING_WIN_TRICK_TWO_SEVENS,
        PCX_TEXT_STRING_YOU_DREW,
        PCX_TEXT_STRING_WHICH_CARD_DISCARD,
        PCX_TEXT_STRING_TRUMP_CARD_IS,
        PCX_TEXT_STRING_WHICH_CARD_EXCHANGE,
        PCX_TEXT_STRING_DONT_EXCHANGE,
        PCX_TEXT_STRING_DOESNT_EXCHANGE,
        PCX_TEXT_STRING_TYPE_A_WORD,
        PCX_TEXT_STRING_GAME_OVER_WINNER,
        PCX_TEXT_STRING_LOST_ALL_LIVES,
        PCX_TEXT_STRING_LOST_A_LIFE,
        PCX_TEXT_STRING_ALPHABET,
        PCX_TEXT_STRING_ONE_UP,
        PCX_TEXT_STRING_LETTERS_HINT,
        PCX_TEXT_STRING_WORDS_ARE,
        PCX_TEXT_STRING_SECRET_WORD_IS,
        PCX_TEXT_STRING_YOU_ARE_THE_CHAMELEON,
        PCX_TEXT_STRING_CLUE_QUESTION,
        PCX_TEXT_STRING_START_DEBATE,
        PCX_TEXT_STRING_YOU_CAN_VOTE_FOR_A_PLAYER,
        PCX_TEXT_STRING_PLAYER_VOTED,
        PCX_TEXT_STRING_EVERYBODY_VOTED,
        PCX_TEXT_STRING_ITS_A_DRAW,
        PCX_TEXT_STRING_CHOSEN_PLAYER,
        PCX_TEXT_STRING_YOU_FOUND_THE_CHAMELEON,
        PCX_TEXT_STRING_YOU_DIDNT_FIND_THE_CHAMELEON,
        PCX_TEXT_STRING_CHAMELEON_WINS_POINTS,
        PCX_TEXT_STRING_SCORES,
        PCX_TEXT_STRING_NOW_GUESS,
        PCX_TEXT_STRING_CHAMELEON_GUESSED,
        PCX_TEXT_STRING_CORRECT_GUESS,
        PCX_TEXT_STRING_CORRECT_WORD_IS,
        PCX_TEXT_STRING_SECRET_WORD_WAS,
        PCX_TEXT_STRING_ESCAPED_SCORE,
        PCX_TEXT_STRING_CAUGHT_SCORE,
        PCX_TEXT_STRING_START_ROUND_BUTTON,
};

const char *
pcx_text_get(enum pcx_text_language lang,
             enum pcx_text_string string);

bool
pcx_text_lookup_language(const char *code,
                         enum pcx_text_language *language);

#endif /* PCX_TEXT_H */
