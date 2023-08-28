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

#include "config.h"

#include "pcx-text-english.h"

#include "pcx-text.h"

const char *
pcx_text_italian[] = {
        [PCX_TEXT_STRING_LANGUAGE_CODE] =
        "it",
        [PCX_TEXT_STRING_NAME_COUP] =
        "Coup",
        [PCX_TEXT_STRING_NAME_SNITCH] =
        "Snitch",
        [PCX_TEXT_STRING_NAME_LOVE] =
        "Love Letter",
        [PCX_TEXT_STRING_NAME_SIX] =
        "6 Takes!",
        [PCX_TEXT_STRING_NAME_FOX] =
        "Fox in the Forest",
        [PCX_TEXT_STRING_NAME_CHAMELEON] =
        "Chameleon",
        [PCX_TEXT_STRING_NAME_SUPERFIGHT] =
        "Superfight",
        [PCX_TEXT_STRING_NAME_ZOMBIE] =
        "Zombie Dice",
        [PCX_TEXT_STRING_COUP_START_COMMAND] =
        "/coup",
        [PCX_TEXT_STRING_COUP_START_COMMAND_DESCRIPTION] =
        "Inizia una partita di Coup",
        [PCX_TEXT_STRING_SNITCH_START_COMMAND] =
        "/snitch",
        [PCX_TEXT_STRING_SNITCH_START_COMMAND_DESCRIPTION] =
        "Inizia una partita di Snitch",
        [PCX_TEXT_STRING_LOVE_START_COMMAND] =
        "/letter",
        [PCX_TEXT_STRING_LOVE_START_COMMAND_DESCRIPTION] =
        "Inizia una partita a Love Letter",
        [PCX_TEXT_STRING_SIX_START_COMMAND] =
        "/six",
        [PCX_TEXT_STRING_SIX_START_COMMAND_DESCRIPTION] =
        "Inizia una partita a  6 Takes!",
        [PCX_TEXT_STRING_FOX_START_COMMAND] =
        "/fox",
        [PCX_TEXT_STRING_FOX_START_COMMAND_DESCRIPTION] =
        "Inizia una partita a  Fox in the Forest",
        [PCX_TEXT_STRING_CHAMELEON_START_COMMAND] =
        "/chameleon",
        [PCX_TEXT_STRING_CHAMELEON_START_COMMAND_DESCRIPTION] =
        "Inizia una partita di Chameleon",
        [PCX_TEXT_STRING_SUPERFIGHT_START_COMMAND] =
        "/superfight",
        [PCX_TEXT_STRING_SUPERFIGHT_START_COMMAND_DESCRIPTION] =
        "Inizia una partita di Superfight",
        [PCX_TEXT_STRING_ZOMBIE_START_COMMAND] =
        "/zombie",
        [PCX_TEXT_STRING_ZOMBIE_START_COMMAND_DESCRIPTION] =
        "Inizia una partita a Zombie Dice",
        [PCX_TEXT_STRING_WHICH_HELP] =
        "Di quale gioco ti serve aiuto?",
        [PCX_TEXT_STRING_TIMEOUT_START] =
        "Nessuno è entrato per almeno %i minuti. La partita inizierà "
        "immediatamente.",
        [PCX_TEXT_STRING_TIMEOUT_ABANDON] =
        "La partita è stata inattiva per almeno %i minuti e verrà "
        "abbandonata.",
        [PCX_TEXT_STRING_NEED_PUBLIC_GROUP] =
        "Per giocare una partita. aggiungi il bot in una chat di gruppo con i tuoi amici e "
        "inizia la partita direttamente lì",
        [PCX_TEXT_STRING_SEND_PRIVATE_MESSAGE] =
        "Prima di unirti alla partita, devi prima cliccare su @%s e inviare un "
        "messaggio così da darmi il permesso di mandarti le carte in "
        "privato. Dopo averlo fatto puoi tornare qui per unirti alla "
        "partita.",
        [PCX_TEXT_STRING_ALREADY_IN_GAME] =
        "Sei già in partita",
        [PCX_TEXT_STRING_ALREADY_GAME] =
        "C'è già una partita in questo gruppo.",
        [PCX_TEXT_STRING_WHICH_GAME] =
        "Che gioco vorresti giocare?",
        [PCX_TEXT_STRING_GAME_FULL] =
        "La partita è già piena.",
        [PCX_TEXT_STRING_GAME_ALREADY_STARTED] =
        "La partita è già iniziata.",
        [PCX_TEXT_STRING_NO_GAME] =
        "Attualmente non c'è nessuna partita in questo gruppo.",
        [PCX_TEXT_STRING_CANCELED] =
        "La partita è stata cancellata.",
        [PCX_TEXT_STRING_CANT_CANCEL] =
        "Solo giocatori in partita possono cancellarla.",
        [PCX_TEXT_STRING_NAME_FROM_ID] =
        "Mx.%i",
        [PCX_TEXT_STRING_FINAL_CONJUNCTION] =
        " e ",
        [PCX_TEXT_STRING_FINAL_DISJUNCTION] =
        " oppure ",
        [PCX_TEXT_STRING_WELCOME] =
        "Benvenuto. Gli altri giocatori possono usare /unisciti per unirsi alla partita oppure puoi fare "
        "/inizia per iniziarla.",
        [PCX_TEXT_STRING_WELCOME_FULL] =
        "Benvenuti. La partita è ora piena e inizierà immediatamente.",
        [PCX_TEXT_STRING_WELCOME_BUTTONS] =
        "%s ora in partita. Puoi aspettare altri giocatori oppure utilizzare "
        "il pulsante sottostante per iniziare.",
        [PCX_TEXT_STRING_WELCOME_BUTTONS_TOO_FEW] =
        "%s ora in partita. Aspetta per ulteriori giocatori per iniziare "
        "la partita.",
        [PCX_TEXT_STRING_WELCOME_BUTTONS_FULL] =
        "%s entrato in partita. La partita è piena ed inizierà immediatamente",
        [PCX_TEXT_STRING_PLAYER_LEFT] =
        "%s ha abbandonato",
        [PCX_TEXT_STRING_START_BUTTON] =
        "Inizia",
        [PCX_TEXT_STRING_CHOSEN_GAME] =
        "Gioco: %s",
        [PCX_TEXT_STRING_CURRENT_PLAYERS] =
        "I giocatori attuali sono:",
        [PCX_TEXT_STRING_JOIN_BEFORE_START] =
        "Per favore, unisciti con /unisciti prima di provare a startare.",
        [PCX_TEXT_STRING_NEED_MIN_PLAYERS] =
        "Almeno %i giocatori sono necessari per giocare.",
        [PCX_TEXT_STRING_JOIN_COMMAND] =
        "/unisciti",
        [PCX_TEXT_STRING_JOIN_COMMAND_DESCRIPTION] =
        "Unisciti a una partita oppure creane una nuova",
        [PCX_TEXT_STRING_START_COMMAND] =
        "/inizia",
        [PCX_TEXT_STRING_START_COMMAND_DESCRIPTION] =
        "Inizia una partita esistente",
        [PCX_TEXT_STRING_CANCEL_COMMAND] =
        "/cancella",
        [PCX_TEXT_STRING_CANCEL_COMMAND_DESCRIPTION] =
        "Cancella una partita esistente",
        [PCX_TEXT_STRING_HELP_COMMAND] =
        "/aiuto",
        [PCX_TEXT_STRING_HELP_COMMAND_DESCRIPTION] =
        "Mostra un sommario delle regole",
        [PCX_TEXT_STRING_RECEIVED_PRIVATE_MESSAGE] =
        "Grazie per il messaggio. Ora puoi unirti alla partita in un gruppo pubblico.",
        [PCX_TEXT_STRING_CHOOSE_GAME_TYPE] =
        "Per favore, scegli quale versione vuoi giocare.",
        [PCX_TEXT_STRING_GAME_TYPE_CHOSEN] =
        "La versione scelta è: %s",
        [PCX_TEXT_STRING_GAME_TYPE_ORIGINAL] =
        "Originale",
        [PCX_TEXT_STRING_GAME_TYPE_INSPECTOR] =
        "Inquisitore",
        [PCX_TEXT_STRING_GAME_TYPE_REFORMATION] =
        "Riformazione",
        [PCX_TEXT_STRING_GAME_TYPE_REFORMATION_INSPECTOR] =
        "Riformazione + Inquisitore",
        [PCX_TEXT_STRING_COUP] =
        "Coup",
        [PCX_TEXT_STRING_INCOME] =
        "Rendita",
        [PCX_TEXT_STRING_FOREIGN_AID] =
        "Aiuto Estero",
        [PCX_TEXT_STRING_TAX] =
        "Tassa (Duca)",
        [PCX_TEXT_STRING_CONVERT] =
        "Converti",
        [PCX_TEXT_STRING_EMBEZZLE] =
        "Impossessati",
        [PCX_TEXT_STRING_ASSASSINATE] =
        "Assassina (Assassino)",
        [PCX_TEXT_STRING_EXCHANGE] =
        "Scambia (Ambasciatore)",
        [PCX_TEXT_STRING_EXCHANGE_INSPECTOR] =
        "Scambia (Inquisitore)",
        [PCX_TEXT_STRING_INSPECT] =
        "Interroga (Inquisitore)",
        [PCX_TEXT_STRING_STEAL] =
        "Ruba (Capitano)",
        [PCX_TEXT_STRING_ACCEPT] =
        "Accetta",
        [PCX_TEXT_STRING_CHALLENGE] =
        "Sfida",
        [PCX_TEXT_STRING_BLOCK] =
        "Blocca",
        [PCX_TEXT_STRING_1_COIN] =
        "1 moneta",
        [PCX_TEXT_STRING_PLURAL_COINS] =
        "%i monete",
        [PCX_TEXT_STRING_YOUR_CARDS_ARE] =
        "Le tue carte sono:",
        [PCX_TEXT_STRING_NOONE] =
        "Nessuno",
        [PCX_TEXT_STRING_WON_1] =
        "%s ha vinto!",
        [PCX_TEXT_STRING_WON_PLURAL] =
        "%s hanno vinto!",
        [PCX_TEXT_STRING_YOUR_GO] =
        "%s, è il tuo turno. Cosa vorresti fare?",
        [PCX_TEXT_STRING_WHICH_CARD_TO_LOSE] =
        "Quale carta vorresti perdere?",
        [PCX_TEXT_STRING_CHALLENGE_SUCCEEDED] =
        "%s ha sfidato e %s non aveva %s quindi %s perde una carta.",
        [PCX_TEXT_STRING_INVERTED_CHALLENGE_SUCCEEDED] =
        "%s ha sfidato e %s si è arreso quindi %s perde una carta.",
        [PCX_TEXT_STRING_CHALLENGE_FAILED] =
        "%s ha sfidato ma %s aveva %s. %s perde una carta e %s "
        "riceve un ricambio dal mazzo.",
        [PCX_TEXT_STRING_INVERTED_CHALLENGE_FAILED] =
        "%s ha sfidato e %s ha mostrato %s quindi %s cambia le proprioe carte e "
        "%s perde una carta.",
        [PCX_TEXT_STRING_CHOOSING_REVEAL] =
        "%s ha sfidato e %s sta scegliendo quale carta rivelare.",
        [PCX_TEXT_STRING_CHOOSING_REVEAL_INVERTED] =
        "%s ha sfidato e %s sta scegliendo se arrendersi.",
        [PCX_TEXT_STRING_ANNOUNCE_CHALLENGE] =
        "%s non crede che tu abbia %s.\n"
        "Quale carta vorresti mostrargli?",
        [PCX_TEXT_STRING_ANNOUNCE_INVERTED_CHALLENGE] =
        "%s crede che tu abbia %s.\n"
        "Vuoi arrenderti?",
        [PCX_TEXT_STRING_CONCEDE] =
        "Arrenditi",
        [PCX_TEXT_STRING_SHOW_CARDS] =
        "Mostra le carte",
        [PCX_TEXT_STRING_NO_CHALLENGE_SO_BLOCK] =
        "Nessuno ha sfidato. L'azione è stata bloccata.",
        [PCX_TEXT_STRING_CLAIM_CARDS_TO_BLOCK] =
        "%s afferma di avere %s e blocca l'azione.",
        [PCX_TEXT_STRING_DOES_SOMEBODY_CHALLENGE] =
        "Qualcuno vuole sfidare?",
        [PCX_TEXT_STRING_OR_BLOCK_NO_TARGET] =
        "O qualcuno vuole affermare di avere %s e di bloccare l'azione?",
        [PCX_TEXT_STRING_BLOCK_NO_TARGET] =
        "Qualcuno vuole affermare di avere %s e di bloccare l'azione?",
        [PCX_TEXT_STRING_OR_BLOCK_OTHER_ALLEGIANCE] =
        "O qualcuno di un'altra alleanza vuole affermare di avere %s "
        "e bloccare l'azione?",
        [PCX_TEXT_STRING_BLOCK_OTHER_ALLEGIANCE] =
        "Qualcuno di un'altra alleanza vuole affermare di avere %s "
        "e bloccare l'azione?",
        [PCX_TEXT_STRING_OR_BLOCK_WITH_TARGET] =
        "O %s, vuoi affermare di avere %s e bloccare l'azione?",
        [PCX_TEXT_STRING_BLOCK_WITH_TARGET] =
        "%s, vuoi affermare di avere %s e bloccare l'azione?",
        [PCX_TEXT_STRING_WHO_TO_COUP] =
        "%s, chi vuoi uccidere durante il colpo di stato?",
        [PCX_TEXT_STRING_DOING_COUP] =
        "💣 %s fa il colpo di stato verso %s",
        [PCX_TEXT_STRING_DOING_INCOME] =
        "💲 %s prende una moneta di reddito",
        [PCX_TEXT_STRING_REALLY_DOING_FOREIGN_AID] =
        "Nessuno ha bloccato, %s prende due monete",
        [PCX_TEXT_STRING_DOING_FOREIGN_AID] =
        "💴 %s ha ricevuto due monete dall'aiuto estero.",
        [PCX_TEXT_STRING_EMBEZZLING] =
        "💼 %s afferma di non avere il duca e di volersi impossessare dei "
        "soldi nella tesoreria.",
        [PCX_TEXT_STRING_REALLY_EMBEZZLING] =
        "Nessuno ha sfidato, %s prende i soldi nella tesoreria.",
        [PCX_TEXT_STRING_REALLY_DOING_TAX] =
        "Nessuno ha sfidato, %s prende 3 monete.",
        [PCX_TEXT_STRING_DOING_TAX] =
        "💸 %s afferma di avere il duca e prende 3 monete dalle tasse.",
        [PCX_TEXT_STRING_WHO_TO_CONVERT] =
        "%s, chi vuoi convertire?",
        [PCX_TEXT_STRING_CONVERTS_SELF] =
        "%s paga 1 moneta alla tesoreria e si converte.",
        [PCX_TEXT_STRING_CONVERTS_SOMEONE_ELSE] =
        "%s paga 2 monete alla tesoreria e converte %s.",
        [PCX_TEXT_STRING_REALLY_DOING_ASSASSINATION] =
        "Nessuno ha bloccato o sfigato, %s assassina %s",
        [PCX_TEXT_STRING_SELECT_TARGET_ASSASSINATION] =
        "%s, chi vuoi assassinare?",
        [PCX_TEXT_STRING_DOING_ASSASSINATION] =
        "🗡 %s vuole assassinare %s.",
        [PCX_TEXT_STRING_WHICH_CARDS_TO_KEEP] =
        "Che carte vuoi tenere?",
        [PCX_TEXT_STRING_REALLY_DOING_EXCHANGE] =
        "Nessuno ha sfidato, %s scambia le carte.",
        [PCX_TEXT_STRING_DOING_EXCHANGE] =
        "🔄 %s afferma di avere l'Ambasciatore e vuole scambiare le carte.",
        [PCX_TEXT_STRING_DOING_EXCHANGE_INSPECTOR] =
        "🔄 %s afferma di avere l'Inquisitore e vuole scambiare le carte.",
        [PCX_TEXT_STRING_REALLY_DOING_INSPECT] =
        "Nessuno ha sfidato, %s sceglie una carta da mostrare a %s",
        [PCX_TEXT_STRING_SELECT_TARGET_INSPECT] =
        "%s, chi vuoi interrogare?",
        [PCX_TEXT_STRING_DOING_INSPECT] =
        "🔍 %s afferma di avere l'inquisitore e vuole interrogare %s",
        [PCX_TEXT_STRING_CHOOSE_CARD_TO_SHOW] =
        "Che carta vuoi mostrare a %s?",
        [PCX_TEXT_STRING_OTHER_PLAYER_DECIDING_CAN_KEEP] =
        "%s is now deciding whether you can keep %s",
        [PCX_TEXT_STRING_SHOWING_CARD] =
        "%s shows %s to you. Can they keep it?",
        [PCX_TEXT_STRING_YES] =
        "Yes",
        [PCX_TEXT_STRING_NO] =
        "No",
        [PCX_TEXT_STRING_ALLOW_KEEP] =
        "%s let %s keep the card that they showed.",
        [PCX_TEXT_STRING_DONT_ALLOW_KEEP] =
        "%s made %s change the card that they showed.",
        [PCX_TEXT_STRING_REALLY_DOING_STEAL] =
        "Nobody blocked or challenged, %s steals from %s.",
        [PCX_TEXT_STRING_SELECT_TARGET_STEAL] =
        "%s, who do you want to steal from?",
        [PCX_TEXT_STRING_DOING_STEAL] =
        "💰 %s wants to steal from %s.",
        [PCX_TEXT_STRING_CHARACTER_NAME_DUKE] =
        "Duke",
        [PCX_TEXT_STRING_CHARACTER_NAME_ASSASSIN] =
        "Assassin",
        [PCX_TEXT_STRING_CHARACTER_NAME_CONTESSA] =
        "Contessa",
        [PCX_TEXT_STRING_CHARACTER_NAME_CAPTAIN] =
        "Captain",
        [PCX_TEXT_STRING_CHARACTER_NAME_AMBASSADOR] =
        "Ambassador",
        [PCX_TEXT_STRING_CHARACTER_NAME_INSPECTOR] =
        "Inquisitor",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_DUKE] =
        "the duke",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_ASSASSIN] =
        "the assassin",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CONTESSA] =
        "the contessa",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CAPTAIN] =
        "the captain",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_AMBASSADOR] =
        "the ambassador",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_INSPECTOR] =
        "the inquisitor",
        [PCX_TEXT_STRING_COINS_IN_TREASURY] =
        "Treasury: %i",
        [PCX_TEXT_STRING_ROLE_NAME_DRIVER] =
        "Driver",
        [PCX_TEXT_STRING_ROLE_NAME_LOCKPICK] =
        "Lockpick",
        [PCX_TEXT_STRING_ROLE_NAME_MUSCLE] =
        "Muscle",
        [PCX_TEXT_STRING_ROLE_NAME_CON_ARTIST] =
        "Con Artist",
        [PCX_TEXT_STRING_ROLE_NAME_LOOKOUT] =
        "Lookout",
        [PCX_TEXT_STRING_ROLE_NAME_SNITCH] =
        "Snitch",
        [PCX_TEXT_STRING_ROUND_NUM] =
        "Round %i / %i",
        [PCX_TEXT_STRING_CHOOSE_HEIST_DIFFICULTY] =
        "%s, you are the gang leader. How many specialists do you want in the "
        "heist?",
        [PCX_TEXT_STRING_HEIST_SIZE_CHOSEN] =
        "The heist will need the following %i specialists:",
        [PCX_TEXT_STRING_DISCUSS_HEIST] =
        "Now you can discuss amongst yourselves about which specialist you "
        "will add to the heist. When you are ready, you can secretly choose "
        "your card.",
        [PCX_TEXT_STRING_CARDS_CHOSEN] =
        "Everybody made their choice! The specialists are:",
        [PCX_TEXT_STRING_NEEDED_CARDS_WERE] =
        "The people needed were:",
        [PCX_TEXT_STRING_YOU_CHOSE] =
        "You chose:",
        [PCX_TEXT_STRING_WHICH_ROLE] =
        "Which card do you want to choose?",
        [PCX_TEXT_STRING_HEIST_SUCCESS] =
        "The heist was a success! Every player that didn’t choose the snitch "
        "receives %i coins.",
        [PCX_TEXT_STRING_HEIST_FAILED] =
        "The heist failed! Everybody who didn’t choose the snitch loses 1 "
        "coin.",
        [PCX_TEXT_STRING_SNITCH_GAIN_1] =
        "Everyone else gains 1 coin.",
        [PCX_TEXT_STRING_SNITCH_GAIN_PLURAL] =
        "Everyone else gains %i coins.",
        [PCX_TEXT_STRING_EVERYONE_SNITCHED] =
        "The heist failed and everybody snitched! Nobody gains anything.",
        [PCX_TEXT_STRING_NOONE_SNITCHED] =
        "Nobody snitched.",
        [PCX_TEXT_STRING_1_SNITCH] =
        "1 snitch",
        [PCX_TEXT_STRING_PLURAL_SNITCHES] =
        "%i snitches",
        [PCX_TEXT_STRING_GUARD] =
        "Guard",
        [PCX_TEXT_STRING_GUARD_OBJECT] =
        "the guard",
        [PCX_TEXT_STRING_GUARD_DESCRIPTION] =
        "Name a card other than the guard and choose a player. "
        "If that player has that card, they lose the round.",
        [PCX_TEXT_STRING_SPY] =
        "Spy",
        [PCX_TEXT_STRING_SPY_OBJECT] =
        "the spy",
        [PCX_TEXT_STRING_SPY_DESCRIPTION] =
        "Look at another player’s hand.",
        [PCX_TEXT_STRING_BARON] =
        "Baron",
        [PCX_TEXT_STRING_BARON_OBJECT] =
        "the baron",
        [PCX_TEXT_STRING_BARON_DESCRIPTION] =
        "Secretly compare hands with another player. The person who has "
        "the lowest valued card loses the round.",
        [PCX_TEXT_STRING_HANDMAID] =
        "Handmaid",
        [PCX_TEXT_STRING_HANDMAID_OBJECT] =
        "the handmaid",
        [PCX_TEXT_STRING_HANDMAID_DESCRIPTION] =
        "Until your next turn, ignore any effects from other player’s cards.",
        [PCX_TEXT_STRING_PRINCE] =
        "Prince",
        [PCX_TEXT_STRING_PRINCE_OBJECT] =
        "the prince",
        [PCX_TEXT_STRING_PRINCE_DESCRIPTION] =
        "Choose a player (can be yourself) who will discard their hand and "
        "take a new card.",
        [PCX_TEXT_STRING_KING] =
        "King",
        [PCX_TEXT_STRING_KING_OBJECT] =
        "the king",
        [PCX_TEXT_STRING_KING_DESCRIPTION] =
        "Choose another player and exchange hands with them.",
        [PCX_TEXT_STRING_COMTESSE] =
        "Comtesse",
        [PCX_TEXT_STRING_COMTESSE_OBJECT] =
        "the comtesse",
        [PCX_TEXT_STRING_COMTESSE_DESCRIPTION] =
        "If you have this card along with the king or the prince in your hand "
        "you must discard this card.",
        [PCX_TEXT_STRING_PRINCESS] =
        "Princess",
        [PCX_TEXT_STRING_PRINCESS_OBJECT] =
        "the princess",
        [PCX_TEXT_STRING_PRINCESS_DESCRIPTION] =
        "If you discard this card you lose the round.",
        [PCX_TEXT_STRING_ONE_COPY] =
        "1 copy",
        [PCX_TEXT_STRING_PLURAL_COPIES] =
        "%i copies",
        [PCX_TEXT_STRING_YOUR_CARD_IS] =
        "Your card is: ",
        [PCX_TEXT_STRING_VISIBLE_CARDS] =
        "Discarded cards: ",
        [PCX_TEXT_STRING_N_CARDS] =
        "Deck: ",
        [PCX_TEXT_STRING_YOUR_GO_NO_QUESTION] =
        "<b>%p</b>, it’s your go.",
        [PCX_TEXT_STRING_DISCARD_WHICH_CARD] =
        "Which card do you want to discard?",
        [PCX_TEXT_STRING_EVERYONE_PROTECTED] =
        "%p discards %C but all the other players are protected and it has no "
        "effect.",
        [PCX_TEXT_STRING_WHO_GUESS] =
        "Whose card do you want to guess?",
        [PCX_TEXT_STRING_GUESS_WHICH_CARD] =
        "Which card do you want to guess?",
        [PCX_TEXT_STRING_GUARD_SUCCESS] =
        "%p discarded %C and correctly guessed that %p had %C. %p loses the "
        "round.",
        [PCX_TEXT_STRING_GUARD_FAIL] =
        "%p discarded %C and incorrectly guessed that %p had %C.",
        [PCX_TEXT_STRING_WHO_SEE_CARD] =
        "Whose card do you want to see?",
        [PCX_TEXT_STRING_SHOWS_CARD] =
        "%p discarded %C and made %p secretly show their card.",
        [PCX_TEXT_STRING_TELL_SPIED_CARD] =
        "%p has %C",
        [PCX_TEXT_STRING_WHO_COMPARE] =
        "Who do you want to compare cards with?",
        [PCX_TEXT_STRING_COMPARE_LOSER] =
        "%p discarded %C and compared their hand with %p. %p had the lower "
        "card and loses the round.",
        [PCX_TEXT_STRING_TELL_COMPARE] =
        "You have %C and %p has %C",
        [PCX_TEXT_STRING_COMPARE_CARDS_EQUAL] =
        "%p discarded %C and compared their hand with %p. The cards were equal "
        "and nobody loses the round.",
        [PCX_TEXT_STRING_DISCARDS_HANDMAID] =
        "%p discarded %C and will be protected until their next turn",
        [PCX_TEXT_STRING_WHO_PRINCE] =
        "Who do you want to make discard their hand?",
        [PCX_TEXT_STRING_PRINCE_SELF] =
        "%p discarded %C and made themself discard %C",
        [PCX_TEXT_STRING_PRINCE_OTHER] =
        "%p discarded %C and made %p discard %C",
        [PCX_TEXT_STRING_FORCE_DISCARD_PRINCESS] =
        " and so they lose the round.",
        [PCX_TEXT_STRING_FORCE_DISCARD_OTHER] =
        " and take a new card.",
        [PCX_TEXT_STRING_WHO_EXCHANGE] =
        "Who do you want to exchange hands with?",
        [PCX_TEXT_STRING_TELL_EXCHANGE] =
        "You gave away %C to %p and received %C",
        [PCX_TEXT_STRING_EXCHANGES] =
        "%p discarded the king and exchanges hands with %p.",
        [PCX_TEXT_STRING_DISCARDS_COMTESSE] =
        "%p discarded %C",
        [PCX_TEXT_STRING_DISCARDS_PRINCESS] =
        "%p discarded %C and lost the round.",
        [PCX_TEXT_STRING_EVERYBODY_SHOWS_CARD] =
        "The round has finished and everybody shows their card:",
        [PCX_TEXT_STRING_SET_ASIDE_CARD] =
        "The hidden card was %c",
        [PCX_TEXT_STRING_WINS_ROUND] =
        "💘 %p wins the round and gains a point of affection from the princess.",
        [PCX_TEXT_STRING_WINS_PRINCESS] =
        "🏆 %p has %i points of affection and wins the game!",
        [PCX_TEXT_STRING_FIGHTERS_ARE] =
        "The players in the next fight are:\n"
        "\n"
        "%s\n"
        "%s\n"
        "\n"
        "They are now choosing their fighters.",
        [PCX_TEXT_STRING_POSSIBLE_ROLES] =
        "Your characters are:",
        [PCX_TEXT_STRING_POSSIBLE_ATTRIBUTES] =
        "Your attributes are:",
        [PCX_TEXT_STRING_CHOOSE_ROLE] =
        "Please choose a character.",
        [PCX_TEXT_STRING_CHOOSE_ATTRIBUTE] =
        "Please choose an attribute.",
        [PCX_TEXT_STRING_YOUR_FIGHTER_IS] =
        "Thanks. Your fighter is:",
        [PCX_TEXT_STRING_FIGHTERS_CHOSEN] =
        "The fighters are ready! They are:",
        [PCX_TEXT_STRING_NOW_ARGUE] =
        "You both now have to argue why your fighter would win in a "
        "fight to the death. Go!",
        [PCX_TEXT_STRING_DONT_FORGET_TO_VOTE] =
        "Don’t forget to vote! The current votes are:",
        [PCX_TEXT_STRING_YOU_CAN_VOTE] =
        "Has the arguing already finished? The other players can now vote "
        "with the buttons below or wait for the debate to finish.",
        [PCX_TEXT_STRING_X_VOTED_Y] =
        "%s voted for %s",
        [PCX_TEXT_STRING_CURRENT_VOTES_ARE] =
        "The current votes are:",
        [PCX_TEXT_STRING_FIGHT_EQUAL_RESULT] =
        "It’s a draw! There will now be a decider fight without "
        "attributes.",
        [PCX_TEXT_STRING_FIGHT_WINNER_IS] =
        "%s won the fight! The current points are:",
        [PCX_TEXT_STRING_STAYS_ON] =
        "The first player to reach %i points wins the game. "
        "%s will stay on for the next fight without changing their cards.",
        [PCX_TEXT_STRING_THROW] =
        "Throw dice",
        [PCX_TEXT_STRING_STOP] =
        "Stop",
        [PCX_TEXT_STRING_STOP_SCORE] =
        "%p stops and adds %i to their score.",
        [PCX_TEXT_STRING_THROW_FIRST_DICE] =
        "<b>%p</b>, it’s your go, press the button to roll the dice.",
        [PCX_TEXT_STRING_YOUR_DICE_ARE] =
        "Your dice are:",
        [PCX_TEXT_STRING_THROWING_DICE] =
        "Throwing dice…",
        [PCX_TEXT_STRING_SCORE_SO_FAR] =
        "Score so far:",
        [PCX_TEXT_STRING_DICE_IN_HAND] =
        "In your hand:",
        [PCX_TEXT_STRING_NO_DICE_IN_HAND] =
        "nothing",
        [PCX_TEXT_STRING_REMAINING_DICE_IN_BOX] =
        "Dice in box:",
        [PCX_TEXT_STRING_YOU_ARE_DEAD] =
        "You got shot too many times and lose all of your points from this "
        "turn!",
        [PCX_TEXT_STRING_THROW_OR_STOP] =
        "Do you want to throw the dice again or stop now?",
        [PCX_TEXT_STRING_START_LAST_ROUND] =
        "%p has reached %i points so this will be the final round",
        [PCX_TEXT_STRING_WINS] =
        "🏆 <b>%p</b> wins!",
        [PCX_TEXT_STRING_FINAL_SCORES] =
        "The final scores are:",
        [PCX_TEXT_STRING_EVERYBODY_CHOOSE_CARD] =
        "Everybody now has to choose a card to play.",
        [PCX_TEXT_STRING_WHICH_CARD_TO_PLAY] =
        "Which card do you want to play?",
        [PCX_TEXT_STRING_CARD_CHOSEN] =
        "You chose:",
        [PCX_TEXT_STRING_CHOSEN_CARDS_ARE] =
        "Everybody has chosen! The cards are:",
        [PCX_TEXT_STRING_ADDED_TO_ROW] =
        "%s adds their card to row %c.",
        [PCX_TEXT_STRING_ROW_FULL] =
        "The row is full so they have to take it and add %i 🐮 to their score.",
        [PCX_TEXT_STRING_CHOOSE_ROW] =
        "%s, your card is lower than all of the rows. You have to choose a row "
        "and take it.",
        [PCX_TEXT_STRING_CHOSEN_ROW] =
        "%s takes row %c and adds %i 🐮 to their score.",
        [PCX_TEXT_STRING_ROUND_OVER] =
        "The round is over and the scores are now:",
        [PCX_TEXT_STRING_END_POINTS] =
        "%s has at least %i points and ends the game.",
        [PCX_TEXT_STRING_WINS_PLAIN] =
        "🏆 %s wins!",
        [PCX_TEXT_STRING_YOU_ARE_LEADER] =
        "%s leads the trick.",
        [PCX_TEXT_STRING_PLAYER_PLAYED] =
        "%s played:",
        [PCX_TEXT_STRING_FOLLOW_PLAYER] =
        "Now %s is choosing which card to play.",
        [PCX_TEXT_STRING_PLAYED_THREE] =
        "Now they are choosing whether to change the decree card.",
        [PCX_TEXT_STRING_PLAYED_FIVE] =
        "Now they will take a card from the deck and discard one.",
        [PCX_TEXT_STRING_TRICK_WINNER] =
        "%s won the trick.",
        [PCX_TEXT_STRING_TRICKS_IN_ROUND_ARE] =
        "The tricks won in this round so far are:",
        [PCX_TEXT_STRING_WIN_TRICK_SEVEN] =
        "They immediately win a point because of the 7 card.",
        [PCX_TEXT_STRING_WIN_TRICK_TWO_SEVENS] =
        "They immediately win two points because of the two 7’s.",
        [PCX_TEXT_STRING_YOU_DREW] =
        "You draw:",
        [PCX_TEXT_STRING_WHICH_CARD_DISCARD] =
        "Which card do you want to discard?",
        [PCX_TEXT_STRING_TRUMP_CARD_IS] =
        "The decree card is:",
        [PCX_TEXT_STRING_WHICH_CARD_EXCHANGE] =
        "Which card do you want to be the decree card?",
        [PCX_TEXT_STRING_DONT_EXCHANGE] =
        "Don’t change the card",
        [PCX_TEXT_STRING_DOESNT_EXCHANGE] =
        "%s decided not to change the decree card.",
        [PCX_TEXT_STRING_WORDS_ARE] =
        "The word list is:",
        [PCX_TEXT_STRING_SECRET_WORD_IS] =
        "The secret word is:",
        [PCX_TEXT_STRING_YOU_ARE_THE_CHAMELEON] =
        "You are the chameleon 🦎",
        [PCX_TEXT_STRING_CLUE_QUESTION] =
        "%p, please type your clue.",
        [PCX_TEXT_STRING_START_DEBATE] =
        "Now you need to discuss who you think the chameleon is. "
        "When you are ready you can vote.",
        [PCX_TEXT_STRING_YOU_CAN_VOTE_FOR_A_PLAYER] =
        "If you’ve finished the discussion, you can vote for who you think "
        "the chameleon is.",
        [PCX_TEXT_STRING_PLAYER_VOTED] =
        "%s voted",
        [PCX_TEXT_STRING_EVERYBODY_VOTED] =
        "Everybody voted!",
        [PCX_TEXT_STRING_ITS_A_DRAW] =
        "It’s a draw! %p has the deciding vote.",
        [PCX_TEXT_STRING_CHOSEN_PLAYER] =
        "The chosen player is %p.",
        [PCX_TEXT_STRING_YOU_FOUND_THE_CHAMELEON] =
        "You found the chameleon! 🦎",
        [PCX_TEXT_STRING_YOU_DIDNT_FIND_THE_CHAMELEON] =
        "That’s not the chameleon!",
        [PCX_TEXT_STRING_CHAMELEON_WINS_POINTS] =
        "%p gets two points and everybody else gets nothing.",
        [PCX_TEXT_STRING_SCORES] =
        "Scores:",
        [PCX_TEXT_STRING_NOW_GUESS] =
        "%p, now try to guess the secret word.",
        [PCX_TEXT_STRING_CHAMELEON_GUESSED] =
        "The chameleon guessed %p.",
        [PCX_TEXT_STRING_CORRECT_GUESS] =
        "That’s the right word!",
        [PCX_TEXT_STRING_CORRECT_WORD_IS] =
        "The real secret word is %p.",
        [PCX_TEXT_STRING_SECRET_WORD_WAS] =
        "The secret word was %p.",
        [PCX_TEXT_STRING_ESCAPED_SCORE] =
        "%p gets one point and everybody else gets nothing.",
        [PCX_TEXT_STRING_CAUGHT_SCORE] =
        "Everybody except %p gets 2 points.",
        [PCX_TEXT_STRING_START_ROUND_BUTTON] =
        "Start the next round",
};
