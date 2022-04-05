#!/usr/bin/python3

# Puxcobot - A robot to play Coup in Esperanto (Puĉo)
# Copyright (C) 2022  Neil Roberts
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

from lxml import etree
import glob
import re
import sys
import os

class WordList:
    ALPHA_RE = re.compile(r'[^a-pr-vzĥŝĝĉĵŭ]')
    LIST_RE = re.compile(r', *$')
    PRONOUNS = {"mi", "ni", "ci", "vi", "li", "ŝi", "ri", "ili"}

    def __init__(self):
        self.words = set()

    def add_word(self, word):
        self.words.add(word)

    def add_noun(self, root):
        for ending in ["o", "oj", "on", "ojn"]:
            self.add_word(root + ending)

    def add_simple_adjective(self, root):
        for ending in ["a", "aj", "an", "ajn"]:
            self.add_word(root + ending)

    def add_simple_adjective_and_adverb(self, root):
        self.add_simple_adjective(root)
        self.add_word(root + "e")

    def add_adjective(self, root):
        self.add_simple_adjective_and_adverb(root)
        self.add_verb(root)
        self.add_verb(root + "ig")
        self.add_verb(root + "iĝ")

    def add_verb(self, root):
        self.add_word(root + "i")

        for tense in "iao":
            participle = root + tense + "nt"
            self.add_noun(participle)
            self.add_simple_adjective_and_adverb(participle)

            self.add_word(root + tense + "s")

        self.add_noun(root + "ad")

    def _parse_kap(self, root, kap):
        before = []
        after = []
        current_list = before

        if kap.text is not None:
            before.append(kap.text)

        for element in kap:
            if element.tag == "tld":
                first_letter = element.get("lit")

                if first_letter is None:
                    current_list.append(root)
                else:
                    current_list.append(first_letter)
                    current_list.append(root[1:])

                current_list = after

            if element.tail is not None:
                current_list.append(element.tail)

        return ("".join(before).strip(), "".join(after).strip())

    def _contains_nonalpha(self, word):
        return bool(self.ALPHA_RE.search(word))

    def _add_pair(self, before, after):
        if after.endswith("i"):
            self.add_verb(before + after[:-1])
        elif after.endswith("o"):
            self.add_noun(before + after[:-1])
        elif after.endswith("a"):
            if before in self.PRONOUNS:
                self.add_simple_adjective(before + after[:-1])
            else:
                self.add_adjective(before + after[:-1])
        else:
            self.add_word(before + after)

    def _add_variants(self, derivation, root, before, after):
        for child in derivation.xpath("./var/kap"):
            variant = "".join(self._parse_kap(root, child))

            if self._contains_nonalpha(variant):
                continue

            if variant.endswith(after):
                self._add_pair(variant[0:len(variant) - len(after)], after)

    def _add_derivation(self, derivation, root):
        (before, after) = self._parse_kap(root, derivation)

        md = self.LIST_RE.search(after)
        if md:
            after = after[0:md.start()]

        if (self._contains_nonalpha(before) or
            self._contains_nonalpha(after)):
            return

        self._add_pair(before, after)
        self._add_variants(derivation, root, before, after)

    def add_from_xml(self, filename):
        parser = etree.XMLParser(load_dtd=True,
                                 no_network=False)
        tree = etree.parse(filename, parser=parser)

        article = tree.xpath("/vortaro/art")[0]
        root_node = article.xpath("./kap/rad")
        root = "".join(root_node[0].itertext()).strip()

        for derivation in article.xpath("./drv/kap"):
            self._add_derivation(derivation, root)

        for derivation in article.xpath("./subart/drv/kap"):
            self._add_derivation(derivation, root)

def add_correlatives(word_list):
    # The correlatives are listed as root words so they don’t get the
    # declinations automatically

    for prefix in ["i", "ki", "ti", "ĉi", "neni"]:
        for suffix in ["aj", "an", "ajn",
                       "on",
                       "uj", "un", "ujn"]:
            word_list.add_word(prefix + suffix)

def add_pronouns(word_list):
    # The pronouns aren’t listed with the accusative so we have to add
    # them manually.
    for pronoun in WordList.PRONOUNS:
        word_list.add_word(pronoun + "n")

word_list = WordList()

add_correlatives(word_list)
add_pronouns(word_list)

for arg in sys.argv[1:]:
    if os.path.isdir(arg):
        for xml_file in glob.glob(os.path.join(glob.escape(arg), "*.xml")):
            word_list.add_from_xml(xml_file)
    else:
        word_list.add_from_xml(arg)

for word in sorted(word_list.words):
    print(word)
