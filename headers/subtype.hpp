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

struct subtype_words
{
    vec_str names;
    vec_str adjectives;
};

class Subtype
{
public:
    Subtype();
    Subtype(subtype_words words);

    void print();
    std::string name();
  
    std::map<std::string, vec_str> words;
};

typedef std::vector<Subtype*> vec_subtype;

// main map for all subtypes
extern std::map<std::string, Subtype*> subtype_map;
