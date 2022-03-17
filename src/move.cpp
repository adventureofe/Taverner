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
    element_map["alien"],
    10
);

Move gust = Move(
   "gust",
   element_map["air"],
   10
);

Move discombobulate = Move(
    "discombobulate",
    element_map["chaos"],
    10
);

Move mudball = Move(
    "mudball",
    element_map["earth"],
    10
);

Move fireball = Move(
    "fireball",
    element_map["fire"],
    10
);

Move iceball = Move(
    "iceball",
    element_map["ice"],
    10
);

Move lightning_bolt = Move(
    "lightning bolt",
    element_map["electricity"],
    10
);

Move back_stab = Move(
    "back stab",
    element_map["evil"],
    10
);

Move smite = Move(
    "smite",
    element_map["holy"],
    10
);

Move mind_ray = Move(
    "mind ray",
    element_map["magic"],
    10
);

Move bullet = Move(
    "bullet",
    element_map["metal"],
    10
);

Move tentacle_slap = Move(
    "tentacle slap",
    element_map["mutation"],
    10
);

Move vine_whip = Move(
    "vine whip",
    element_map["plant"],
    10
);

Move sting = Move(
    "sting",
    element_map["poison"],
    10
);

Move atomic_blast = Move(
    "atomic blast",
    element_map["radiation"],
    10
);

Move sneak_attack = Move(
    "sneak attack",
    element_map["shadow"],
    10
);

Move cannibalise = Move(
    "cannibalise",
    element_map["undead"],
    10
);

Move soak = Move(
    "soak",
    element_map["water"],
    10
);

Move fin_slap = Move(
    "fin slap",
    element_map["water"],
    10
);

Move slap = Move(
    "slap",
    element_map["normal"],
    10
);

Move hoof_kick = Move(
    "hoof_kick",
    element_map["normal"],
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
    {"mind ray", &mind_ray},
    {"bullet", &bullet},
    {"tentacle slap", &tentacle_slap},
    {"vine whip", &vine_whip},
    {"sting", &sting},
    {"atomic blast", &atomic_blast},
    {"sneak attack", &sneak_attack},
    {"cannibalise", &cannibalise},
    {"soak", &soak},
    {"fin slap", &fin_slap},
    {"slap", &slap},
    {"hoof kick", &hoof_kick},
};
