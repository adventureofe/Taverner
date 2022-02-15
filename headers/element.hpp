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

struct Multipliers
{
  double alien;
  double air;
  double chaos;
  double earth;
  double electric;
  double evil;
  double fire;
  double holy;
  double ice;
  double magic;
  double metal;
  double mutant;
  double normal;
  double nuclear;
  double plant;
  double poison;
  double shadow;
  double toon;
  double undead;
  double water;
};

class Element
{
  public:
  
  Element();
  Element(std::string name, Multipliers multipliers);
  std::string name;
  void print();
  std::map<std::string, double> multipliers;
};

// main map for all elements
extern std::map<std::string, Element*> element_map;
