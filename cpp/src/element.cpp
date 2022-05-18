/* taverner

By theadventureofe(John Gormley)

element source code

the_adventure_of_e λ */

//some of these may be removable at a later stage
#include <iostream>
#include <utility>
#include <string>
#include <vector>

#include "../headers/element.hpp"

Element::Element()
{
    this->words =
    {
        {"names", vec_str{"ELEMENT_NAME_DEFAULT"}},
        {"adjectives", vec_str{"ELEMENT_ADJECTIVES_DEFAULT"}}
    };
}

Element::Element(element_words words)
{
    this->words =
    {
        {"names", words.names},
        {"adjectives", words.adjectives}
    };
}

void Element::print()
{
    std::cout << "(ELEMENT-PRINT)\n";
    std::cout << "(NAME): " << this->words["names"][0] << "\n";
    std::cout << "\n";
}

vec_str element_set_names(std::initializer_list<std::string> names)
{
    vec_str result;

    for(std::string i : names)
    {
      result.push_back(i);
    }

    return result;
}

vec_str element_set_adjectives(std::initializer_list<std::string> adjectives)
{
    vec_str result;

    for(std::string i : adjectives)
    {
      result.push_back(i);
    }

    return result;
}

std::string Element::name()
{
  return this->words[0][0];
}

Element alien = Element
(
    element_words
    {
      .names = element_set_names({"alien", "extraterrestrial"}),
      .adjectives = element_set_adjectives({"unearthly", "otherworldy"}) 
    }
);

Element air = Element
(
    element_words
    {
      .names = element_set_names({"air", "wind"}),
      .adjectives = element_set_adjectives({"windy"}) 
    }
);

Element chaos = Element
(
    element_words
    {
      .names = element_set_names({"chaos"}),
      .adjectives = element_set_adjectives({"chaotic"}) 
    }
);

Element earth  = Element
(
    element_words
    {
      .names = element_set_names({"earth", "soil", "mud", "dirt"}),
      .adjectives = element_set_adjectives({"earthy", "muddy"}) 
    }
);

Element electricity  = Element
(
    element_words
    { 
      .names = element_set_names({"electricity", "shock", "lightning"}), 
      .adjectives = element_set_adjectives({"electric", "electricifying", "shocking"}) 
    }
);

Element evil  = Element
(
    element_words
    {
      .names = element_set_names({"evil", "wickedness"}),
      .adjectives = element_set_adjectives({"unholy", "wicked"}) 
    }
);

Element fire = Element
(
    element_words
    {
      .names = element_set_names({"fire", "flame", "blaze", "ember"}),
      .adjectives = element_set_adjectives({"fiery", "flaming", "burning", "flaring"}) 
    }
);

Element holiness = Element
(
    element_words
    {
      .names = element_set_names({"holiness"}),
      .adjectives = element_set_adjectives({"hole"}) 
    }
);


Element ice = Element
(
    element_words
    {
      .names = element_set_names({"ice", "frost"}),
      .adjectives = element_set_adjectives({"icy", "frozen", "frosty", "frosted"}) 
    }
);

Element metal  = Element
(
    element_words
    {
      .names = element_set_names({"metal", "steel"}),
      .adjectives = element_set_adjectives({"metallic"}) 
    }
);

Element mutation  = Element
(
    element_words
    {
      .names = element_set_names({"mutation"}),
      .adjectives = element_set_adjectives({"mutant", "mutated"}) 
    }
);

Element normal  = Element
(
    element_words
    {
      .names = element_set_names({"normal"}),
      .adjectives = element_set_adjectives({""}) 
    }
);


Element plant  = Element
(
    element_words
    {
      .names = element_set_names({"plant"}),
      .adjectives = element_set_adjectives({"grassy", "mossy", "leafy"}) 
    }
);

Element poison  = Element
(
    element_words
    {
      .names = element_set_names({"poison", "toxic"}),
      .adjectives = element_set_adjectives({"poisonous"}) 
    }
);

Element radiation  = Element
(
    element_words
    {
      .names = element_set_names({"radiation", "radioactivity"}),
      .adjectives = element_set_adjectives({"nuclear", "atomic", "radioactive"}) 
    }
);

Element shadow  = Element
(
    element_words
    {
      .names = element_set_names({"shadow", "darkness"}),
      .adjectives = element_set_adjectives({"shadowy", "dark"}) 
    }
);

Element undead = Element
(
    element_words
    {
      .names = element_set_names({"undead", "zombie"}),
      .adjectives = element_set_adjectives({"zombified", "rotting"}) 
    }
);

Element water = Element
(
    element_words
    {
      .names = element_set_names({"water", "sea"}),
      .adjectives = element_set_adjectives({"watery", "wet"}) 
    }
);

std::map<std::string, Element*> element_map =
{
    {"alien", &alien},
    {"air", &air},
    {"chaos", &chaos},
    {"earth", &earth},
    {"electricity", &electricity},
    {"evil", &evil},
    {"fire", &fire},
    {"holiness", &holiness},
    {"ice", &ice},
    {"metal", &metal},
    {"mutation", &mutation},
    {"normal", &normal},
    {"plant", &plant},
    {"poison", &poison},
    {"radiation", &radiation},
    {"undead", &undead},
    {"water", &water}
};

vec_str element_map_keys(std::map<std::string, Element*> element_map) {
    vec_str retval;

    for (auto el : element_map)
    {
      retval.emplace_back(el.first);
    }

    return retval;
}
