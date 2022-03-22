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

typedef std::vector<std::string> vec_str;

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
    std::string name();

    std::map<std::string, vec_str> words;

};

typedef std::vector<Element*> vec_element;

// main map for all elements
extern std::map<std::string, Element*> element_map;
extern vec_str element_map_keys(std::map<std::string, Element*> element_map);
