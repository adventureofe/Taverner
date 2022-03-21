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

Move::Move(){
  this->name = "MOVE_NAME_DEFAULT";
  this->element = new Element();
  this->atk = 1; 
}

Move::Move(std::string name, Element* element, int atk){
  this->name = name;
  this->element = element;
  this->atk = atk;
}

Move probe = Move(
    "probe",
    element_map.at("alien"),
    10
);

Move gust = Move(
   "gust",
   element_map.at("air"),
   10
);

Move discombobulate = Move(
    "discombobulate",
    element_map.at("chaos"),
    10
);

Move mudball = Move(
    "mudball",
    element_map.at("earth"),
    10
);

Move fireball = Move(
    "fireball",
    element_map.at("fire"),
    10
);

Move iceball = Move(
    "iceball",
    element_map.at("ice"),
    10
);

Move lightning_bolt = Move(
    "lightning bolt",
    element_map.at("electricity"),
    10
);

Move back_stab = Move(
    "back stab",
    element_map.at("evil"),
    10
);

Move smite = Move(
    "smite",
    element_map.at("holiness"),
    10
);

Move bullet = Move(
    "bullet",
    element_map.at("metal"),
    10
);

Move tentacle_slap = Move(
    "tentacle slap",
    element_map.at("mutation"),
    10
);

Move vine_whip = Move(
    "vine whip",
    element_map.at("plant"),
    10
);

Move sting = Move(
    "sting",
    element_map.at("poison"),
    10
);

Move atomic_blast = Move(
    "atomic blast",
    element_map.at("radiation"),
    10
);

Move cannibalise = Move(
    "cannibalise",
    element_map.at("undead"),
    10
);

Move soak = Move(
    "soak",
    element_map.at("water"),
    10
);

Move fin_slap = Move(
    "fin slap",
    element_map.at("water"),
    10
);

Move slap = Move(
    "slap",
    element_map.at("normal"),
    10
);

Move hoof_kick = Move(
    "hoof_kick",
    element_map.at("normal"),
    15
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
