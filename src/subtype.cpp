/* taverner

By theadventureofe(John Gormley)

element source code

the_adventure_of_e λ */

//some of these may be removable at a later stage
#include <iostream>
#include <utility>
#include <string>
#include <vector>

#include "../headers/subtype.hpp"

#define vec_str std::vector<std::string>

Subtype::Subtype()
{
    this->words =
    {
        {"name", vec_str{"SUBTYPE_NAME_DEFAULT"}},
        {"adjective", vec_str{"SUBTYPE_ADJECTIVES_DEFAULT"}}
    };
}

Subtype::Subtype(subtype_words words)
{
    this->words =
    {
        {"names", words.names},
        {"adjectives", words.adjectives}
    };
}

void Subtype::print(){
    std::cout << "(ELEMENT-PRINT)\n";
}

vec_str subtype_set_names(std::initializer_list<std::string> names)
{
    vec_str result;

    for(std::string i : names)
    {
      result.push_back(i);
    }

    return result;
}

vec_str subtype_set_adjectives(std::initializer_list<std::string> adjectives)
{
    vec_str result;

    for(std::string i : adjectives)
    {
      result.push_back(i);
    }

    return result;
}

Subtype amphibian = Subtype(
    subtype_words
    {
      .names = subtype_set_names({"amphibian"}),
      .adjectives = subtype_set_adjectives({"amphibious"}) 
    }
);

Subtype ape = Subtype(
    subtype_words
    {
      .names = subtype_set_names({"ape"}),
      .adjectives = subtype_set_adjectives({"simian"}) 
    }
);

Subtype bird = Subtype(
    subtype_words
    {
      .names = subtype_set_names({"bird"}),
      .adjectives = subtype_set_adjectives({"avian"}) 
    }
);

Subtype canid = Subtype(
    subtype_words
    {
      .names = subtype_set_names({"canid"}),
      .adjectives = subtype_set_adjectives({"avian"}) 
    }
);


std::map<std::string, Subtype*> subtype_map =
{
    {"amphibian", &amphibian},
    {"ape", &ape},
    {"bird", &bird},
    {"canid", &canid},
};
