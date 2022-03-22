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
  std::string name;
  Element* element;
  int atk;

  Move();
  Move(move_words words, Element* element, int atk);

  void print();

  std::map<std::string, vec_str> words;
};

// main map for all elements
extern std::map<std::string, Move*> move_map;
