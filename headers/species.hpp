/* taverner

By theadventureofe(John Gormley)

species header file

the_adventure_of_e λ */

#pragma once

//some of these may be removable at a later stage
#include <utility>
#include <string>
#include <map>
#include <vector>

#include "subtype.hpp"
#include "element.hpp"

struct species_words
{
    vec_str names;
    vec_str names_plural;
    vec_str adjectives;
};

class Species
{
 public:
    Species();
    Species(species_words words, vec_subtype subtypes, vec_element common_elements);
 
    static vec_subtype set_subtypes(std::initializer_list<std::string> subtypes);
    static vec_element set_common_elements(std::initializer_list<std::string> subtypes);

    void print();

    std::map<std::string, vec_str> words;
    vec_subtype subtypes;
    vec_element common_elements;
};

// main map for all elements
extern std::map<std::string, Species*> species_map;
