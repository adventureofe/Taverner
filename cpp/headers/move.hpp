/* taverner

By theadventureofe(John Gormley)

species header file

each creature will have 1 species

the_adventure_of_e λ */

#pragma once

#include "element.hpp"

struct move_words
{
  vec_str names;
};

class Move
{
public:
  Element* element;
  int atk;

  Move();
  Move(move_words words, Element* element, int atk, std::string move_type);

  void print();
  std::string name();

  std::map<std::string, vec_str> words;
  std::string move_type;
};

// main map for all elements
extern std::map<std::string, Move*> move_map;
