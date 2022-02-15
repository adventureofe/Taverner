/* taverner

By theadventureofe(John Gormley)

species header file

the_adventure_of_e λ
*/

#pragma once

#include <utility>
#include <string>
#include <map>
#include <vector>

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
  Species(Weight weight, Length length, std::vector<std::string> subtypes, Nouns nouns);
  Species();
  

  std::map <std::string, int> weight;
  std::map <std::string, int> length;
  std::vector<std::string> subtypes;
  std::map <std::string, std::vector<std::string>> noun;
};

  //main map for all species
extern std::map <std::string, Species*> species;
