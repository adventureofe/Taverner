/* taverner
   
By theadventureofe(John Gormley)

main file

the_adventure_of_e λ */

#include <iostream>
#include <map>
#include <memory>
#include <time.h>

#include "headers/element.hpp"
#include "headers/species.hpp"
#include "headers/subtype.hpp"
#include "headers/move.hpp"
#include "headers/creature.hpp"

// print all included cmd args (removes compiler warning)
void arg_print(int argc, char** argv)
{
    for(int i = 1; i < argc; i++)
    {
        printf("arg[%d]: %s", i, argv[i]);
    }
  
    if(argc > 1)
    {
        printf("\n");
    } 
}

int main (int argc, char** argv)
{
    srand (time(NULL));

    //std::cout << species_map["anchovy"]->words["names plural"][0] << "\n";
    //std::cout << subtype_map["canid"]->words["names"][0] << "\n";
    //std::cout << species_map["anchovy"]->common_elements[0]->words["names"][0] << "\n";
    //std::cout << species_map["demon"]->subtypes[0]->words["names"][0] << "\n";
    //std::cout << move_map["fireball"]->element->words["names"][0] << "\n";

    Creature* c = new Creature("alligator");
    c->print();

    arg_print(argc, argv);
    return 0;
}
