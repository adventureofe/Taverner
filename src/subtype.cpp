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

void Subtype::print()
{
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

Subtype amphibian = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"amphibian"}),
      .adjectives = subtype_set_adjectives({"amphibious"}) 
    }
);

Subtype ape = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"ape"}),
      .adjectives = subtype_set_adjectives({"simian"}) 
    }
);

Subtype bird = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"bird"}),
      .adjectives = subtype_set_adjectives({"avian"}) 
    }
);

Subtype bird_of_prey = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"bird of prey"}),
      .adjectives = subtype_set_adjectives({"avian"}) 
    }
);

Subtype bug = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"bug"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);


Subtype burrower = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"burrower"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);


Subtype canid = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"canid"}),
      .adjectives = subtype_set_adjectives({"avian"}) 
    }
);

Subtype crawler = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"crawler"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype equine = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"equine"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype fairy = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"fairy"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype feline = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"feline"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype finned = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"finned"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype flyer = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"flyer"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype humanoid = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"humanoid"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype jumper = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"jumper"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype mammal = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"mammal"}),
      .adjectives = subtype_set_adjectives({"mammalian"}) 
    }
);

Subtype monster = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"monster"}),
      .adjectives = subtype_set_adjectives({"monsterous"}) 
    }
);

Subtype nocturnal = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"nocturnal"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype orcish = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"orcish"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype primate = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"primate"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype reptile = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"reptile"}),
      .adjectives = subtype_set_adjectives({"reptilian"}) 
    }
);


Subtype runner = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"runner"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype spirit = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"spirit"}),
      .adjectives = subtype_set_adjectives({"spiritual"}) 
    }
);

Subtype swimmer = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"swimmer"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype vermin = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"vermin"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

Subtype wanderer = Subtype
(
    subtype_words
    {
      .names = subtype_set_names({"wanderer"}),
      .adjectives = subtype_set_adjectives({""}) 
    }
);

std::map<std::string, Subtype*> subtype_map =
{
    {"amphibian", &amphibian},
    {"ape", &ape},
    {"bird", &bird},
    {"canid", &canid},
    {"crawler", &crawler},
    {"equine", &equine},
    {"fairy", &fairy},
    {"feline", &feline},
    {"flyer", &flyer},
    {"humanoid", &humanoid},
    {"jumper", &jumper},
    {"mammal", &mammal},
    {"nocturnal", &nocturnal},
    {"orcish", &orcish},
    {"primate", &primate},
    {"runner", &runner},
    {"spirit", &spirit},
    {"swimmer", &swimmer},
    {"vermin", &vermin},
    {"wanderer", &wanderer},
};
