/* taverner

By theadventureofe(John Gormley)

species header file

each creature will have 1 species

the_adventure_of_e λ */

#pragma once

#include <utility>
#include <string>
#include <map>
#include <vector>
#include <initializer_list>

#include "subtype.hpp"
#include "element.hpp"

struct Weight
{
  int min;
  int max;
};

struct Length
{
  int min;
  int max;
};

struct Stats
{
  int hp;
  int atk;
  int def;
  int special_atk; 
  int special_def; 
  int speed;
};

//macro to shorten typing in this long ass template code
#define vec_str std::vector<std::string>

struct Nouns
{
  vec_str generic;
  vec_str generic_plural;
  vec_str male;
  vec_str male_plural;
  vec_str female;
  vec_str female_plural;  
  vec_str child;
  vec_str child_plural;
  vec_str collective;
  vec_str collective_plural;
};

class Species 
{
  public:
  Species(Weight weight, Length length, std::vector<Subtype*> subtypes, std::vector<Element*> common_elemnts, Nouns nouns, Stats stats);
  Species();
  
  static std::vector<Subtype*> set_subtypes(std::initializer_list<std::string> subtypes);
  static std::vector<Element*> set_common_elements(std::initializer_list<std::string> elements);
  void print();
  

  std::map <std::string, int> weight;
  std::map <std::string, int> length;
  std::vector<Subtype*> subtypes;
  std::vector<Element*> common_elements;
  std::map <std::string, std::vector<std::string>> noun;
  std::map <std::string, int> stat;
};

// main map for all species
extern std::map <std::string, Species*> species_map;

