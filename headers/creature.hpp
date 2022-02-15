/* taverner

By theadventureofe(John Gormley)

species header file

each creature will have 1 species
each creature will have 1-2 elements

the_adventure_of_e λ */

#pragma once

#include <utility>
#include <string>
#include <map>
#include <vector>

#include "element.hpp"
#include "species.hpp"

class Creature
{
  public:
  std::string name;
  Species* species;
  Element* element_1;
  Element* element_2;
  Creature();
  Creature(std::string name, std::string species, std::string element);
  Creature(std::string name, std::string species, std::string element_1, std::string element_2);
  void print();
};

extern std::map<std::string, Creature*> creature_map;
