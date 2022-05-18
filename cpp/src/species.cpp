/* taverner

By theadventureofe(John Gormley)

spcies source code

the_adventure_of_e λ */

//some of these may be removable at a later stage
#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <time.h>

#include "../headers/element.hpp"
#include "../headers/species.hpp"
#include "../headers/subtype.hpp"

Species::Species()
{
    this->words =
    {
        {"names", vec_str{"SPECIES_NAME_DEFAULT"}},
        {"names plural", vec_str{"SPECIES_NAME_PLURALS_DEFAULT"}},
        {"adjectives", vec_str{"SPECIES_ADJECTIVES_DEFAULT"}}
    };

    this->subtypes = vec_subtype {new Subtype()};
    this->common_elements = vec_element {new Element()};
}

Species::Species(species_words words, vec_subtype subtypes, vec_element common_elements)
{
    this->words =
    {
        {"names", words.names},
        {"names plural", words.names_plural},
        {"adjectives", words.adjectives}
    };

    this->subtypes = subtypes;
    this->common_elements = common_elements; 
}

void Species::print()
{
    std::cout << "(SPECIES-PRINT)\n";
    std::cout << "(NAME): " << this->words["names"][0] << "\n";

    std::cout << "(SUBTYPES)\n";
    for (Subtype* i : this->subtypes)
    {
        std::cout << "\t" << i->words["names"][0] << "\n";
    }
    std::cout << "\n";

    std::cout << "(COMMON-ELEMENTS)\n";
    for (Element* i : this->common_elements)
    {
        std::cout << "\t" << i->words["names"][0] << "\n";
    }
    std::cout << "\n";
}

vec_str species_set_names(std::initializer_list<std::string> names)
{
    vec_str result;

    for(std::string i : names)
    {
      result.push_back(i);
    }

    return result;
}

vec_str species_set_names_plural(std::initializer_list<std::string> names_plural)
{
    vec_str result;

    for(std::string i : names_plural)
    {
      result.push_back(i);
    }

    return result;
}

vec_str species_set_adjectives(std::initializer_list<std::string> adjectives)
{
    vec_str result;

    for(std::string i : adjectives)
    {
      result.push_back(i);
    }

    return result;
}

vec_subtype Species::set_subtypes(std::initializer_list<std::string> subtypes)
{
    vec_subtype result;

    for(std::string i : subtypes)
    {
      result.push_back(subtype_map[i]);
    }

    return result;
}

vec_element Species::set_common_elements(std::initializer_list<std::string> elements)
{   
    vec_element result;

    for(std::string i : elements)
    {
      result.push_back(element_map[i]);
    }
  
    return result;
}

Species aardvark = Species
(
    species_words
    {
        .names = species_set_names({"aardvark"}),
        .names_plural = species_set_names_plural({"aardvarks"}),
        .adjectives = species_set_adjectives({""})
    },
    Species::set_subtypes({"mammal", "vermin", "runner"}),
    Species::set_common_elements({"earth", "normal"})
);

Species aardwolf = Species
(
    species_words
    {
        .names = species_set_names({"aardwolf"}),
        .names_plural = species_set_names_plural({"aardwolves"}),
        .adjectives = species_set_adjectives({""})
    },
    Species::set_subtypes({"mammal", "canid", "vermin", "runner"}),
    Species::set_common_elements({"earth", "normal", "chaos"})
);

Species albatross = Species
(
    species_words
    {
        .names = species_set_names({"albatross"}),
        .names_plural = species_set_names_plural({"albatrosses"}),
        .adjectives = species_set_adjectives({""})
    },
    Species::set_subtypes({"bird", "bird of prey", "flyer", "swimmer", "wanderer"}),
    Species::set_common_elements({"air", "water", "normal"})
);

Species alligator = Species
(
    species_words
    {
        .names = species_set_names({"alligator"}),
        .names_plural = species_set_names_plural({"alligators"}),
        .adjectives = species_set_adjectives({""})
    },
    Species::set_subtypes({"reptile", "monster", "swimmer"}),
    Species::set_common_elements({"water", "evil", "normal"})
);


Species anchovy = Species
(
    species_words
    {
        .names = species_set_names({"anchovy"}),
        .names_plural = species_set_names_plural({"anchovies"}),
        .adjectives = species_set_adjectives({""})
    },
    Species::set_subtypes({"swimmer", "finned"}),
    Species::set_common_elements({"water", "normal"})
);

Species angel = Species
(
    species_words
    {
        .names = species_set_names({"angel"}),
        .names_plural = species_set_names_plural({"angels"}),
        .adjectives = species_set_adjectives({"angelic"})
    },
    Species::set_subtypes({"spirit", "flyer", "humanoid"}),
    Species::set_common_elements({"holiness", "water"})
);

Species ant = Species
(
    species_words
    {
        .names = species_set_names({"ant"}),
        .names_plural = species_set_names_plural({"ants"}),
        .adjectives = species_set_adjectives({"crawler"})
    },
    Species::set_subtypes({"bug", "crawler"}),
    Species::set_common_elements({"earth", "poison", "metal"})
);

Species anteater = Species
(
    species_words
    {
        .names = species_set_names({"anteater"}),
        .names_plural = species_set_names_plural({"anteaters"}),
        .adjectives = species_set_adjectives({"crawler"})
    },
    Species::set_subtypes({"mammal", "runner"}),
    Species::set_common_elements({"earth", "normal", "plant", "chaos"})
);

Species demon = Species
(
    species_words
    {
        .names = species_set_names({"demon"}),
        .names_plural = species_set_names_plural({"demons"}),
        .adjectives = species_set_adjectives({"demonic"})
    },
    Species::set_subtypes({"spirit", "humanoid", "flyer"}),
    Species::set_common_elements({"evil", "fire", "chaos"})
);

std::map<std::string, Species*> species_map =
{
    {"aardvark", &aardvark},
    {"aardwolf", &aardwolf},
    {"albatross", &albatross},
    {"alligator", &alligator},
    {"anchovy", &anchovy},
    {"angel", &angel},
    {"ant", &ant},
    {"anteater", &anteater},
    {"demon", &demon},
};
