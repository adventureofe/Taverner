/* taverner

By theadventureofe(John Gormley)

element source code

the_adventure_of_e λ
*/

#include <iostream>
#include <utility>
#include <string>
#include <vector>

#include "../headers/creature.hpp"

Creature::Creature()
{
  this->species = new Species();
  this->element_1 = new Element();
  this->element_2 = new Element();
  this->name = "default_name the " + this->element_1->name + " " + this->species->noun["generic"][0];
  
}

Creature::Creature(std::string name, std::string species, std::string element)
{
  this->species = species_map[species];
  this->element_1 = element_map[element];
  this->element_2 = element_map[element];
  this->name = name + " the " +  this->element_1->name + " " + this->species->noun["generic"][0];
}


Creature::Creature(std::string name, std::string species, std::string element_1, std::string element_2)
{
  this->species = species_map[species];
  this->element_1 = element_map[element_1];
  this->element_2 = element_map[element_2];
  this->name = name + " the " + this->element_1->name + " " + this->element_2->name + " " +  this->species->noun["generic"][0];
}
