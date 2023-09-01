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

#include "pcx-superfight-help.h"

#include "pcx-text.h"

const char *
pcx_superfight_help[] = {
        [PCX_TEXT_LANGUAGE_ESPERANTO] =
        "<b>SUPERBATALO</b>\n"
        "\n"
        "Superbatalo estas simpla ludo de ridindaj debatoj.\n"
        "\n"
        "La partio okazas per serio de bataloj. Por la unua batalo, la "
        "roboto elektos du hazardajn ludantojn. Tiuj du "
        "ricevos po 6 kartoj. 3 el ili surhavas rolulon kaj la aliaj 3 "
        "surhavas trajton por la rolulo. La du ludantoj devas elekti po "
        "unu karto de ĉiu tipo. La roboto aldonos al tiuj kartoj unu plian "
        "trajton kiu povas aŭ helpi aŭ malhelpi. La elektitaj rolulo kaj "
        "trajtoj iĝas via batalanto.\n"
        "\n"
        "Kiam ambaŭ batalantoj estas pretaj la du ludantoj devas disputi en "
        "la grupo por konvinki la aliajn ludantojn kial ria batalanto venkus "
        "en ĝismorta batalo. Kiam ĉiuj estas sufiĉe konvinkitaj ili povas "
        "voĉdoni. La venkinto gajnas unu poenton kaj restas por la sekva "
        "batalo sen ŝanĝi siajn kartojn. La malvenkinton anstataŭas la "
        "sekva ludanto kiu kreas sian batalanton kiel supre.\n"
        "\n"
        "En okazo de egaleco, la du ludantoj prenas po unu hazarda "
        "rolulo sen aldonaj trajtoj kaj devas denove batali kun tiuj ĝis "
        "iu venkos.\n"
        "\n"
        "La unua homo kiu atingas 3 poentojn gajnas la partion.",
        [PCX_TEXT_LANGUAGE_ENGLISH] =
        "<b>SUPERFIGHT</b>\n"
        "\n"
        "Superfight is a simple game of ridiculous arguments.\n"
        "\n"
        "The game takes place over a series of fights. For the first "
        "fight, the bot chooses two random players. Those two players "
        "receive 6 cards each. 3 of them have characters and the other 3 "
        "have attributes. The two players have to choose 1 of each type of "
        "card. The bot then adds a second random attribute which will "
        "either help or hinder the player. The chosen character and "
        "attributes are your fighter.\n"
        "\n"
        "When both fighters are ready the two players have to argue in the "
        "group why their fighter would win in a fight to the death. When "
        "everybody is sufficiently convinced they can vote for the winner. "
        "The winning player gets one point and stays on for the next round "
        "without changing their fighter. The loser gets replaced by the "
        "next player who makes his fighter as above.\n"
        "\n"
        "In case of a draw, the two players take one new character card "
        "each and use that in a new fight without any additional "
        "attributes. This repeats until someone gets more votes.\n"
        "\n"
        "The first player to get 3 points wins the game.",
        [PCX_TEXT_LANGUAGE_PT_BR] =
        "<b>SUPERLUTA</b>\n"
        "\n"
        "Superluta é um jogo simples de argumentos absurdos.\n"
        "\n"
        "O jogo funciona com uma série de lutas. Para a primeira "
        "luta, o bot escolhe 2 jogadores aleatoriamente. Cada um desses 2 jogadores "
        "recebe 6 cartas. 3 cartas são de personagem e 3 "
        "de atributos. Os jogadores devem escolher uma de cada tipo."
        " O bot, então, adiciona um segundo atributo aleatoriamente. Este atributo irá "
        "ajudar ou atrapalhar o jogador. A personagem escolhida e seus atributos serão "
        "seu lutador.\n"
        "\n"
        "Quando os 2 jogadores estiverem prontos, eles deverão debater no "
        "grupo porque seu lutador ganharia em uma batalha até a morte. Quando "
        "todos estiverem convencidos, poderão votar em quem deve ser o vencedor. "
        "O vencedor ganha 1 ponto e fica para a próxima rodada "
        "sem trocar seu lutador. O perdedor é substituído pelo "
        "próximo jogador que irá definir seu lutador de acordo com o processo acima.\n"
        "\n"
        "Em caso de empate, os 2 jogadores escolhem uma nova personagem "
        "e a usam em uma nova luta sem atributos adicionais. "
        "Isso se repete até alguém conseguir mais votos.\n"
        "\n"
        "O primeiro que fizer 3 pontos ganha o jogo.",
        [PCX_TEXT_LANGUAGE_ITALIAN] = 
        "<b>Superfight</b> è un semplice gioco di argomenti ridicoli.\n\n"

        "Il gioco si svolge con una serie di combattimenti.\n"
        "Per il primo combattimento, il bot sceglie due giocatori casuali. Quei due giocatori ricevono 6 carte ciascuno.\n"
        "Tre di esse sono personaggi e le altre tre sono attributi.\n"
        "I due giocatori devono scegliere una di ogni tipo di carta.\n"
        "Il bot aggiunge quindi un secondo attributo casuale che aiuterà o ostacolerà il giocatore.  Il personaggio e gli attributi scelti sono il tuo combattente.\n\n"
        
        "Quando entrambi i combattenti sono pronti, i due giocatori devono discutere nel gruppo sul perché il loro combattente vincerebbe in una lotta all'ultimo sangue."
        "Quando tutti sono sufficientemente convinti possono votare per il vincitore.  Il giocatore vincente ottiene un punto e rimane per il round successivo senza cambiare il proprio combattente.\n"
        "Il perdente viene sostituito dal giocatore successivo che creerà il suo combattente come scritto sopra.\n\n"
        
        "In caso di pareggio, i due giocatori prendono una nuova carta personaggio ciascuno e la usano in un nuovo combattimento senza attributi aggiuntivi.\n"
        "Questo si ripete finché qualcuno non ottiene più voti.\n\n"
        
        "Il primo giocatore che ottiene 3 punti vince la partita.",
};
