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
        "%s sta ora decidente se puoi tenere %s",
        [PCX_TEXT_STRING_SHOWING_CARD] =
        "%s ti mostra %s. Può tenerla?",
        [PCX_TEXT_STRING_YES] =
        "Sì",
        [PCX_TEXT_STRING_NO] =
        "No",
        [PCX_TEXT_STRING_ALLOW_KEEP] =
        "%s lascia tenere a %s la carta che gli ha mostrato.",
        [PCX_TEXT_STRING_DONT_ALLOW_KEEP] =
        "%s ha fatto cambiare a %s la carta che gli ha mostrato.",
        [PCX_TEXT_STRING_REALLY_DOING_STEAL] =
        "Nessuno ha bloccato o sfidato, %s ruba da %s.",
        [PCX_TEXT_STRING_SELECT_TARGET_STEAL] =
        "%s, da chi vuoi rubare?",
        [PCX_TEXT_STRING_DOING_STEAL] =
        "💰 %s vuole rubare da %s.",
        [PCX_TEXT_STRING_CHARACTER_NAME_DUKE] =
        "Duca",
        [PCX_TEXT_STRING_CHARACTER_NAME_ASSASSIN] =
        "Assassino",
        [PCX_TEXT_STRING_CHARACTER_NAME_CONTESSA] =
        "Contessa",
        [PCX_TEXT_STRING_CHARACTER_NAME_CAPTAIN] =
        "Capitano",
        [PCX_TEXT_STRING_CHARACTER_NAME_AMBASSADOR] =
        "Ambasciatore",
        [PCX_TEXT_STRING_CHARACTER_NAME_INSPECTOR] =
        "Inquisitore",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_DUKE] =
        "il duca",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_ASSASSIN] =
        "l'assassino",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CONTESSA] =
        "la contessa",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CAPTAIN] =
        "il capitano",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_AMBASSADOR] =
        "l'ambasciatore",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_INSPECTOR] =
        "l'inquisitore",
        [PCX_TEXT_STRING_COINS_IN_TREASURY] =
        "Tesoreria: %i",
        [PCX_TEXT_STRING_ROLE_NAME_DRIVER] =
        "Autista",
        [PCX_TEXT_STRING_ROLE_NAME_LOCKPICK] =
        "Scassinatore",
        [PCX_TEXT_STRING_ROLE_NAME_MUSCLE] =
        "Muscolo",
        [PCX_TEXT_STRING_ROLE_NAME_CON_ARTIST] =
        "Truffatore",
        [PCX_TEXT_STRING_ROLE_NAME_LOOKOUT] =
        "Palo",
        [PCX_TEXT_STRING_ROLE_NAME_SNITCH] =
        "Spia",
        [PCX_TEXT_STRING_ROUND_NUM] =
        "Round %i / %i",
        [PCX_TEXT_STRING_CHOOSE_HEIST_DIFFICULTY] =
        "%s, sei il capo della gang. Quanti specialisti vuoi nella "
        "rapina?",
        [PCX_TEXT_STRING_HEIST_SIZE_CHOSEN] =
        "La rapina avrà bisogno dei seguenti %i specialisti:",
        [PCX_TEXT_STRING_DISCUSS_HEIST] =
        "Ora potete discutere tra di voi quali specialisti inviterete "
        "nella rapina. Quando sarete pronti, potete segretamente scegliere "
        "la vostra carta.",
        [PCX_TEXT_STRING_CARDS_CHOSEN] =
        "Tutti hanno scelto! Gli specialisti sono:",
        [PCX_TEXT_STRING_NEEDED_CARDS_WERE] =
        "Le persone necessarie erano:",
        [PCX_TEXT_STRING_YOU_CHOSE] =
        "Hai scelto:",
        [PCX_TEXT_STRING_WHICH_ROLE] =
        "Quali carte vuoi scegliere?",
        [PCX_TEXT_STRING_HEIST_SUCCESS] =
        "La rapina è stata un successo! Tutti i giocatori che non hanno scelto la spia "
        "ricevono %i monete.",
        [PCX_TEXT_STRING_HEIST_FAILED] =
        "La rapina è fallita! Tutti quelli che non hanno scelto la spia perdono 1 "
        "moneta.",
        [PCX_TEXT_STRING_SNITCH_GAIN_1] =
        "Tutti gli altri guadagnano 1 moneta.",
        [PCX_TEXT_STRING_SNITCH_GAIN_PLURAL] =
        "Tutti gli altri guadagnano %i monete.",
        [PCX_TEXT_STRING_EVERYONE_SNITCHED] =
        "La rapina è fallita e tutti hanno fatto la spia! Nessuno guadagna nulla.",
        [PCX_TEXT_STRING_NOONE_SNITCHED] =
        "Nessuno ha fatto la spia.",
        [PCX_TEXT_STRING_1_SNITCH] =
        "1 spia",
        [PCX_TEXT_STRING_PLURAL_SNITCHES] =
        "%i spie",
        [PCX_TEXT_STRING_GUARD] =
        "Guardia",
        [PCX_TEXT_STRING_GUARD_OBJECT] =
        "la guardia",
        [PCX_TEXT_STRING_GUARD_DESCRIPTION] =
        "Scegli una carta che non sia la guardia e scegli un giocatore. "
        "Se quel giocatore ha quella carta, perde il round.",
        [PCX_TEXT_STRING_SPY] =
        "Spia",
        [PCX_TEXT_STRING_SPY_OBJECT] =
        "la spia",
        [PCX_TEXT_STRING_SPY_DESCRIPTION] =
        "Mostra la mano di un altro giocatore.",
        [PCX_TEXT_STRING_BARON] =
        "Barone",
        [PCX_TEXT_STRING_BARON_OBJECT] =
        "il barone",
        [PCX_TEXT_STRING_BARON_DESCRIPTION] =
        "Confronta segretamente la tua mano con un altro giocatore. La persona che ha "
        "la carta più bassa perde il round.",
        [PCX_TEXT_STRING_HANDMAID] =
        "Serva",
        [PCX_TEXT_STRING_HANDMAID_OBJECT] =
        "la serva",
        [PCX_TEXT_STRING_HANDMAID_DESCRIPTION] =
        "Fino all'inizio del vostro prossimo turno, sarai protetto dagli effetti delle carte avversarie.",
        [PCX_TEXT_STRING_PRINCE] =
        "Principe",
        [PCX_TEXT_STRING_PRINCE_OBJECT] =
        "il principe",
        [PCX_TEXT_STRING_PRINCE_DESCRIPTION] =
        "Scegli un giocatore (anche te stesso) che scarterà la mano e "
        "prenderà una nuova carta.",
        [PCX_TEXT_STRING_KING] =
        "Re",
        [PCX_TEXT_STRING_KING_OBJECT] =
        "il re",
        [PCX_TEXT_STRING_KING_DESCRIPTION] =
        "Scegli un altro giocatore e scambia la carta che hai in mano con la loro.",
        [PCX_TEXT_STRING_COMTESSE] =
        "Contessa",
        [PCX_TEXT_STRING_COMTESSE_OBJECT] =
        "La contessa",
        [PCX_TEXT_STRING_COMTESSE_DESCRIPTION] =
        "Se hai questa carta insieme al re o al principe nella tua mano "
        "devi scartare questa carta.",
        [PCX_TEXT_STRING_PRINCESS] =
        "Principessa",
        [PCX_TEXT_STRING_PRINCESS_OBJECT] =
        "la principessa",
        [PCX_TEXT_STRING_PRINCESS_DESCRIPTION] =
        "Se scarti questa carta perdi il round.",
        [PCX_TEXT_STRING_ONE_COPY] =
        "1 copia",
        [PCX_TEXT_STRING_PLURAL_COPIES] =
        "%i copie",
        [PCX_TEXT_STRING_YOUR_CARD_IS] =
        "La tua carta è: ",
        [PCX_TEXT_STRING_VISIBLE_CARDS] =
        "Carte scartate: ",
        [PCX_TEXT_STRING_N_CARDS] =
        "Mazzo: ",
        [PCX_TEXT_STRING_YOUR_GO_NO_QUESTION] =
        "<b>%p</b>, è il tuo turno.",
        [PCX_TEXT_STRING_DISCARD_WHICH_CARD] =
        "Quale carta vorresti scartare?",
        [PCX_TEXT_STRING_EVERYONE_PROTECTED] =
        "%p scarta %C ma tutti gli altri giocatori sono protetti e quindi non ha "
        "nessun effetto.",
        [PCX_TEXT_STRING_WHO_GUESS] =
        "A chi vorresti indovinare la carta?",
        [PCX_TEXT_STRING_GUESS_WHICH_CARD] =
        "Che carta vuoi indovinare?",
        [PCX_TEXT_STRING_GUARD_SUCCESS] =
        "%p ha scartato %C e ha correttamente indovinato che %p aveva %C. %p perde il "
        "round.",
        [PCX_TEXT_STRING_GUARD_FAIL] =
        "%p ha scartato %C e ha incorrettamente sbagliato ad indovinare che %p avesse %C.",
        [PCX_TEXT_STRING_WHO_SEE_CARD] =
        "A chi vuoi vedere la carta?",
        [PCX_TEXT_STRING_SHOWS_CARD] =
        "%p ha scartato %C e ha costretto %p a mostrargli la carta.",
        [PCX_TEXT_STRING_TELL_SPIED_CARD] =
        "%p ha %C",
        [PCX_TEXT_STRING_WHO_COMPARE] =
        "Con chi vuoi confrontare le tue carte?",
        [PCX_TEXT_STRING_COMPARE_LOSER] =
        "%p ha scartato %C e ha confrontato la mano con %p. %p aveva la carta più bassa "
        "e perde il round.",
        [PCX_TEXT_STRING_TELL_COMPARE] =
        "Hai %C e %p ha %C",
        [PCX_TEXT_STRING_COMPARE_CARDS_EQUAL] =
        "%p ha scartato %C e ha confrontato la mano con %p. Le carte erano uguali "
        "e nessuno perde il round.",
        [PCX_TEXT_STRING_DISCARDS_HANDMAID] =
        "%p ha scartato %C e sarà protetto fino al prossimo turno",
        [PCX_TEXT_STRING_WHO_PRINCE] =
        "A chi vuoi far scartare la mano?",
        [PCX_TEXT_STRING_PRINCE_SELF] =
        "%p ha scartato %C e ha fatto scartare a sè stesso %C",
        [PCX_TEXT_STRING_PRINCE_OTHER] =
        "%p ha scartato %C e ha fatto scartare %C a %p ",
        [PCX_TEXT_STRING_FORCE_DISCARD_PRINCESS] =
        " e quindi perde il round.",
        [PCX_TEXT_STRING_FORCE_DISCARD_OTHER] =
        " e prende una nuova carta.",
        [PCX_TEXT_STRING_WHO_EXCHANGE] =
        "Con chi vorresti scambiare le carte?",
        [PCX_TEXT_STRING_TELL_EXCHANGE] =
        "Hai dato %C a %p e hai ricevuto %C",
        [PCX_TEXT_STRING_EXCHANGES] =
        "%p ha scartato il re e ha scambiato carte con %p.",
        [PCX_TEXT_STRING_DISCARDS_COMTESSE] =
        "%p ha scartato %C",
        [PCX_TEXT_STRING_DISCARDS_PRINCESS] =
        "%p ha scartato %C e perde il round.",
        [PCX_TEXT_STRING_EVERYBODY_SHOWS_CARD] =
        "Il round è finito e ognuno mostra le proprie carte:",
        [PCX_TEXT_STRING_SET_ASIDE_CARD] =
        "La carta nascosta era %c",
        [PCX_TEXT_STRING_WINS_ROUND] =
        "💘 %p vince il round e guadagna un punto di affetto dalla principessa.",
        [PCX_TEXT_STRING_WINS_PRINCESS] =
        "🏆 %p ha %i punti di affetto e vince il gioco!",
        [PCX_TEXT_STRING_FIGHTERS_ARE] =
        "I giocatori nella prossima lotta sono:\n"
        "\n"
        "%s\n"
        "%s\n"
        "\n"
        "Stanno scegliendo i loro lottatori.",
        [PCX_TEXT_STRING_POSSIBLE_ROLES] =
        "I tuoi personaggi sono:",
        [PCX_TEXT_STRING_POSSIBLE_ATTRIBUTES] =
        "Le tue caratteristiche sono:",
        [PCX_TEXT_STRING_CHOOSE_ROLE] =
        "Per favore, scegli un personaggio.",
        [PCX_TEXT_STRING_CHOOSE_ATTRIBUTE] =
        "Per favore, scegli una caratteristica.",
        [PCX_TEXT_STRING_YOUR_FIGHTER_IS] =
        "Grazie, il tuo lottatore è:",
        [PCX_TEXT_STRING_FIGHTERS_CHOSEN] =
        "I lottatori sono pronti! Sono:",
        [PCX_TEXT_STRING_NOW_ARGUE] =
        "Ora dovete discutere sul perché il tuo lottatore dovrebbe vincere in uno "
        "scontro all'ultimo sangue!",
        [PCX_TEXT_STRING_DONT_FORGET_TO_VOTE] =
        "Non dimenticarti di votare! I voti attuali sono:",
        [PCX_TEXT_STRING_YOU_CAN_VOTE] =
        "La discussione è già finita? Gli altri giocatori possono ora votare "
        "con i pulsanti sottostanti o aspettare per la fine della discussione.",
        [PCX_TEXT_STRING_X_VOTED_Y] =
        "%s ha votato per %s",
        [PCX_TEXT_STRING_CURRENT_VOTES_ARE] =
        "I voti attuali sono:",
        [PCX_TEXT_STRING_FIGHT_EQUAL_RESULT] =
        "È un pareggio! Ci sarà una lotta di spareggio senza "
        "caratteristiche.",
        [PCX_TEXT_STRING_FIGHT_WINNER_IS] =
        "%s ha vinto la sfida! I punti attuali sono:",
        [PCX_TEXT_STRING_STAYS_ON] =
        "Il primo giocatore che raggiunge %i punti vince la partita. "
        "%s affronterà la prossima sfida senza cambiare le carte.",
        [PCX_TEXT_STRING_THROW] =
        "Tira i dadi",
        [PCX_TEXT_STRING_STOP] =
        "Fermati",
        [PCX_TEXT_STRING_STOP_SCORE] =
        "%p si ferma e aggiunge %i al suo punteggio.",
        [PCX_TEXT_STRING_THROW_FIRST_DICE] =
        "<b>%p</b>, è il tuo turno, premi il pulsante sottostante per tirare i dadi.",
        [PCX_TEXT_STRING_YOUR_DICE_ARE] =
        "I tuoi dadi sono:",
        [PCX_TEXT_STRING_THROWING_DICE] =
        "Tirando i dadi…",
        [PCX_TEXT_STRING_SCORE_SO_FAR] =
        "Punteggio attuale:",
        [PCX_TEXT_STRING_DICE_IN_HAND] =
        "Nella tua mano:",
        [PCX_TEXT_STRING_NO_DICE_IN_HAND] =
        "niente",
        [PCX_TEXT_STRING_REMAINING_DICE_IN_BOX] =
        "Dadi nella scatola:",
        [PCX_TEXT_STRING_YOU_ARE_DEAD] =
        "Sei stato sparato troppe volte e perdi tutti i punti "
        "di questo turno!",
        [PCX_TEXT_STRING_THROW_OR_STOP] =
        "Vuoi tirare di nuovo i dadi o fermarti?",
        [PCX_TEXT_STRING_START_LAST_ROUND] =
        "%p ha raggiunto %i punti quindi questo sarà il round finale. Buona fortuna!",
        [PCX_TEXT_STRING_WINS] =
        "🏆 <b>%p</b> ha vinto!",
        [PCX_TEXT_STRING_FINAL_SCORES] =
        "I punteggi finali sono:",
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
