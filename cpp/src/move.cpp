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
#include "../headers/move.hpp"

Move::Move()
{
    this->words =
    {
        {"names", vec_str{"MOVE_NAME_DEFAULT"}}
    };

    this->element = new Element();
    this->atk = 1;
    this->move_type = "MOVE_TYPE_DEFAULT";
}

Move::Move(move_words words, Element* element, int atk, std::string move_type)
{
    this->words = 
    {
     {"names", words.names}
    };

    this->element = element;
    this->atk = atk;
    this->move_type = move_type;
}

void Move::print()
{
    std::cout << "(MOVE-PRINT)\n";
    std::cout << "(NAME): " << this->words["names"][0] << "\n";
    std::cout << "(ELEMENT): " << this->element->words["names"][0] << "\n";
    std::cout << "(POWER): " << this->atk << "\n";
    std::cout << "(MOVE TYPE): " << this->move_type << "\n";
    std::cout << "\n";
}

vec_str move_set_names(std::initializer_list<std::string> names)
{
    vec_str result;

    for(std::string i : names)
    {
      result.push_back(i);
    }

    return result;
}

Move probe = Move
(
    move_words
    {
        .names = move_set_names({"probe"})
    },
    element_map.at("alien"),
    10,
    "physical"
);

Move gust = Move
(
    move_words
    {
        .names = move_set_names({"gust"})
    },
   element_map.at("air"),
   10,
   "special"
);

Move discombobulate = Move
(
    move_words
    {
        .names = move_set_names({"discombobulate"})
    },
    element_map.at("chaos"),
    10,
    "special"
);

Move mudball = Move
(
    move_words
    {
        .names = move_set_names({"mudball"})
    },
    element_map.at("earth"),
    10,
    "special"
);

Move fireball = Move
(
     move_words
     {
         .names = move_set_names({"fireball"})
     },
     element_map.at("fire"),
     10,
     "special"
);

Move iceball = Move
(
    move_words
    {
        .names = move_set_names({"iceball"})
    },
    element_map.at("ice"),
    10,
    "special"
);

Move lightning_bolt = Move
(
    move_words
    {
        .names = move_set_names({"lightning bolt"})
    },
    element_map.at("electricity"),
    10,
    "special"
);

Move back_stab = Move
(
    move_words
    {
        .names = move_set_names({"back stab"})
    },
    element_map.at("evil"),
    10,
    "physical"
);

Move smite = Move
(
    move_words
    {
        .names = move_set_names({"smite"})
    },
    element_map.at("holiness"),
    10,
    "special"
);

Move bullet = Move
(
    move_words
    {
        .names = move_set_names({"bullet"})
    },
    element_map.at("metal"),
    10,
    "special"
);

Move tentacle_slap = Move
(
    move_words
    {
        .names = move_set_names({"tentacle slap"})
    },
    element_map.at("mutation"),
    10,
    "physical"
);

Move vine_whip = Move
(
    move_words
    {
        .names = move_set_names({"vine whip"})
    },
    element_map.at("plant"),
    10,
    "physical"
);

Move sting = Move
(
    move_words
    {
        .names = move_set_names({"sting"})
    },
    element_map.at("poison"),
    10,
    "physical"
);

Move atomic_blast = Move
(
    move_words
    {
        .names = move_set_names({"atomic blast"})
    },
    element_map.at("radiation"),
    10,
    "special"
);

Move cannibalise = Move
(
    move_words
    {
        .names = move_set_names({"cannibalise"})
    },
    element_map.at("undead"),
    10,
    "physical"
);

Move soak = Move
(
    move_words
    {
        .names = move_set_names({"soak"})
    },
    element_map.at("water"),
    10,
    "special"
);

Move fin_slap = Move
(
    move_words
    {
        .names = move_set_names({"fin slap"})
    },
    element_map.at("water"),
    10,
    "physical"
);

Move slap = Move
(
    move_words
    {
        .names = move_set_names({"slap"})
    },
    element_map.at("normal"),
    10,
    "physical"
);

Move hoof_kick = Move
(
    move_words
    {
        .names = move_set_names({"hoof kick"})
    },
    element_map.at("normal"),
    15,
    "physical"
);

std::map<std::string, Move*> move_map =
{
    {"probe", &probe},
    {"gust", &gust},
    {"discombobulate", &discombobulate},
    {"mudball", &mudball},
    {"fireball", &fireball},
    {"iceball", &iceball},
    {"lightning bolt", &lightning_bolt},
    {"back stab", &back_stab},
    {"smite", &smite},
    {"bullet", &bullet},
    {"tentacle slap", &tentacle_slap},
    {"vine whip", &vine_whip},
    {"sting", &sting},
    {"atomic blast", &atomic_blast},
    {"cannibalise", &cannibalise},
    {"soak", &soak},
    {"fin slap", &fin_slap},
    {"slap", &slap},
    {"hoof kick", &hoof_kick},
};
