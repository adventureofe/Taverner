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

std::map<std::string, Move*> move_map =
{
    {"fireball", &fireball},
    {"iceball", &iceball},
    {"lightning bolt", &lightning_bolt}
};
