/* taverner

By theadventureofe(John Gormley)

species header file

each creature will have 1 species

the_adventure_of_e λ */

#pragma once

#include "element.hpp"

class Move
{
public:
  std::string name;
  Element* element;
  int atk;

  Move();
  Move(std::string name, Element* element, int atk);
};

// main map for all elements
extern std::map<std::string, Move*> move_map;
