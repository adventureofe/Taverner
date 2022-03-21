/* taverner

By theadventureofe(John Gormley)

element header file

the_adventure_of_e λ */

#pragma once

//some of these may be removable at a later stage
#include <utility>
#include <string>
#include <map>
#include <vector>

//macro to shorten typing in this long types
#define vec_str std::vector<std::string>

struct element_words
{
    vec_str names;
    vec_str adjectives;
};

class Element
{
 public:
    Element();
    Element(element_words words);

    void print();

    std::map<std::string, vec_str> words;

};

// main map for all elements
extern std::map<std::string, Element*> element_map;
extern vec_str element_map_keys(std::map<std::string, Element*> element_map);
