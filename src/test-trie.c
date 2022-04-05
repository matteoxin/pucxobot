/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2022  Neil Roberts
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

#include "pcx-trie.h"

#include <stdlib.h>
#include <stdio.h>

static void
test_words(struct pcx_trie *trie,
           int n_words,
           char **words)
{
        uint32_t token;

        for (int i = 0; i < n_words; i++) {
                printf("%s: %s\n",
                       words[i],
                       pcx_trie_contains_word(trie, words[i], &token) ?
                       "yes" :
                       "no");
        }
}

static void
word_cb(const char *word,
        void *user_data)
{
        fprintf(user_data, "%s\n", word);
}

static void
dump_trie(struct pcx_trie *trie)
{
        pcx_trie_iterate(trie, word_cb, stdout);
}

int
main(int argc, char **argv)
{
        int ret = EXIT_SUCCESS;

        struct pcx_error *error = NULL;

        if (argc < 2) {
                fprintf(stderr, "usage: test-trie <dictionary> [word]...\n");
                return EXIT_FAILURE;
        }

        char **words = argv + 2;
        int n_words = argc - 2;

        struct pcx_trie *trie = pcx_trie_new(argv[1], &error);

        if (trie == NULL) {
                fprintf(stderr, "%s\n", error->message);
                pcx_error_free(error);
                ret = EXIT_FAILURE;
        } else {
                if (n_words > 0)
                        test_words(trie, n_words, words);
                else
                        dump_trie(trie);

                pcx_trie_free(trie);
        }

        return ret;
}
