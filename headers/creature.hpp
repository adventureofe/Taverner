/* taverner

By theadventureofe(John Gormley)

creature header file

the_adventure_of_e λ */

#pragma once

//some of these may be removable at a later stage
#include <utility>
#include <string>
#include <map>
#include <vector>

#include "element.hpp"
#include "move.hpp"
#include "species.hpp"
#include "subtype.hpp"

//macro to shorten typing in this long types
#define vec_str std::vector<std::string>

class Creature
{
public:
  std::string name;
  Species* species;
  std::vector<Element*> elements;
  std::vector<Subtype*> subtypes;
  std::vector<Move*> moves;
  
  Creature();
  Creature(std::string species);
  Creature(std::string species, vec_str elements, vec_str subtypes);
  void print();
};
