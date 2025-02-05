/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2020  Neil Roberts
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

#include "pcx-zombie-help.h"

#include "pcx-text.h"

const char *
pcx_zombie_help[] = {
        [PCX_TEXT_LANGUAGE_ESPERANTO] =
        "<b>RESUMO DE LA REGULOJ:</b>\n"
        "\n"
        "Vi estas zombio kaj vi volas manĝi la maksimumon da cerboj. Dum via "
        "vico vi ĵetos 3 ĵetkubojn. Ĉiu ĵetkubo reprezentas homon. La ĵeto "
        "povas havi unu el la sekvaj tri rezultoj:\n"
        "\n"
        "🧠: Vi manĝas la cerbon de la homo\n"
        "💥: La homo pafas al vi\n"
        "👣: La homo eskapis\n"
        "\n"
        "Ĵetinte la kubojn, vi flanken metas ĉiujn cerbojn🧠 kaj pafojn💥. Se "
        "vi fine ricevas 3 pafojn, vi mortas kaj perdas ĉiujn cerbojn kiujn vi "
        "gajnis dum ĉi tiu vico. Aliokaze vi rajtas elekti ĉu daŭrigi la "
        "ĵetadon. Se vi ĉesas, vi aldonas ĉiujn cerbojn kiujn vi ĵetis al via "
        "poentaro.\n"
        "\n"
        "Se vi ĵetas denove, vi prenas ĉiujn kubojn kun piedoj👣, aldonas "
        "pliajn kubojn el la skatolo por rehavi tri kaj sekve ĵetas ilin same "
        "kiel antaŭe.\n"
        "\n"
        "Estas tri koloroj de ĵetkubo: verda🍏, flava💛 kaj ruĝa🧨. La verdaj "
        "ĵetkuboj pli ofte rezultas en cerbo kaj la ruĝaj pli ofte en pafo. La "
        "flavaj estas ekvilibraj.\n"
        "\n"
        "Post kiam unu ludanto gajnas 13 poentojn, la aliaj ludantoj rajtas "
        "fini unu lastan vicon. Post tio, la homo kun la plej multe da poentoj "
        "gajnas la partion.",
        [PCX_TEXT_LANGUAGE_FRENCH] =
        "<b>RÉSUMÉ DES RÈGLES :</b>\n"
        "\n"
        "Vous êtes un zombie et vous voulez manger le plus grand nombre "
        "de cerveaux possible. Pendant votre tour, vous allez lancer 3 dès "
        "qui représentent tous une personne. Le résultat du dès peut être une "
        "de ces 3 choses :\n"
        "\n"
        "🧠: Vous avez mangé le cerveau de la personne\n"
        "💥: La personne vous a tiré dessus\n"
        "👣: La personne s’est échappée\n"
        "\n"
        "Après avoir lancé les dès, vous mettrez de côté tous les cerveaux🧠 "
        "et tires💥. Se vous finissez par avoir 3 tires, vous mourrez and "
        "perdez tous les cerveaux que vous avez gagnez de ce tour. Sinon, "
        "vous pouvez choisir si vous voulez continuer à lancer les dès. Se "
        "vous arrêtez, vous ajoutez tous les cerveaux que vous avez lancés à "
        "votre score.\n"
        "\n"
        "Si vous lancez encore les dès, vous prenez tous les dès qui montrent "
        "des pieds👣, ajoutez plus de dès de la boîte pour en avoir trois et "
        "les relancez encore comme avant.\n"
        "\n"
        "Il y a trois couleurs de dès : vert🍏, jaune💛 et rouge🧨. Les dès "
        "verts montrent plus souvent des cerveaux et les rouges montrent plus "
        "souvent des tires. Les dès jaunes sont équilibrés.\n"
        "\n"
        "Dès qu’un joueur atteint 13 points les autres joueurs ont le droit à "
        "finir un dernier tour. Après ça la personne avec le score le plus "
        "élevé remporte la partie. ",
        [PCX_TEXT_LANGUAGE_ENGLISH] =
        "<b>SUMMARY OF THE RULES:</b>\n"
        "\n"
        "You are a zombie and you want to eat as many brains as possible. "
        "During your turn you will throw 3 dice with each die representing a "
        "person. A dice throw can result in one of these three things "
        "happening:\n"
        "\n"
        "🧠: You ate the person’s brain\n"
        "💥: The person shot at you\n"
        "👣: The person escaped\n"
        "\n"
        "After throwing the dice you put aside all the brains🧠 and shotguns💥. "
        "If you end up with 3 shotguns you die and lose all the brains that "
        "you gained in this turn. Otherwise you can choose whether to continue "
        "rolling. If you stop, you add all of the brains that you threw to "
        "your total score.\n"
        "\n"
        "If you roll again, you take all of the feet👣 dice, add more dice "
        "from the box to get back up to three and then roll them again as "
        "before.\n"
        "\n"
        "There are three colors of die: green🍏, yellow💛 and red🧨. The green "
        "dice are more likely to throw a brain and the red dice are more "
        "likely to throw a shotgun. The yellow dice are balanced.\n"
        "\n"
        "After one player scores 13 points the other players are allowed to "
        "finish one last turn. After that the person with the highest score "
        "wins.\n",
        [PCX_TEXT_LANGUAGE_PT_BR] =
        "<b>RESUMO DAS REGRAS:</b>\n"
        "\n"
        "Você é um zumbi e deseja comer o máximo possível de cérebros. "
        "No seu turno, você irá jogar 3 dados, onde cada dado representa uma "
        "pessoa. Uma jogada de dados pode resultar em uma das seguintes "
        "situações:\n"
        "\n"
        "🧠: Você comeu o cérebro da pessoa\n"
        "💥: A pessoa atirou em você\n"
        "👣: A pessoa escapou\n"
        "\n"
        "Depois de lançar os dados, você irá separar todos os cérebros🧠 e as espingardas💥. "
        "Se você sofrer 3 tiros, você morre e perde todos os cérebros que "
        "ganhou no turno. No entanto, você é quem escolher se continua a jogar  "
        "ou não. Se escolher parar, todos os cérebros que você manteve são adicionados "
        "à sua pontuação total.\n"
        "\n"
        "Se escolher jogar novamente, você irá pegar todos os dados de pés👣, pegar mais dados "
        "até obter 3, e lança-los como descrito na regra acima.\n"
        "\n"
        "Os dados têm 3 cores: verde🍏, amarelo💛 e vermelho🧨. No dado verde, "
        "a probabilidade de aparecer um cérebro é maior. Nos dados vermelhos, a probabilidade de aparecer "
        "uma espingarda é maior. No dado amarelo, as chances são as mesmas.\n"
        "\n"
        "Quando um jogador marcar 13 pontos, os outros jogadores poderão jogar "
        "até terminar o turno. Por fim, a pessoa com maior pontuação "
        "vence.\n",
        [PCX_TEXT_LANGUAGE_ITALIAN] =
        "<b>Zombie Dice</b>\n\n"

        "Sei uno zombi e vuoi mangiare più cervelli possibile.\n"
        "Durante il tuo turno lancerai 3 dadi con ogni dado che rappresenta una persona.\n"
        "Un lancio di dadi può provocare una di queste tre cose:\n\n"

        "🧠: Hai mangiato il cervello della persona\n"
        "💥: La persona ti ha sparato\n"
        "👣: La persona è scappata\n\n"

        "Dopo aver lanciato i dadi metti da parte tutti i cervelli 🧠 e i fucili 💥.\n"
        "Se ti ritrovi con 3 fucili, muori e perdi tutto I cervelli che hai guadagnato in questo turno. Altrimenti puoi scegliere se continuare a rollare.\n"
        "Se ti fermi, aggiungi tutti i cervelli che hai ottenuto al tuo punteggio totale.\n"
        "Se tiri di nuovo, prendi tutti i dadi dei piedi 👣, aggiungi altri dadi dalla scatola per tornare fino a tre e poi lanciali di nuovo come prima.\n\n"

        "Ci sono tre colori di dado: verde 🍏, giallo 💛 e rosso 🧨.\n" 
        "I dadi verdi hanno maggiori probabilità di far uscire un cervello e i dadi rossi hanno maggiori probabilità di far uscire un fucile. I dadi gialli sono bilanciati.\n\n"

        "Dopo che un giocatore ha ottenuto <b>13 punti</b>, gli altri giocatori possono giocare e finire un ultimo turno.\n"
        "Dopodiché vince la persona con il punteggio più alto.",
};
