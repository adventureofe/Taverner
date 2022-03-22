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

    subtype_map["canid"]->print();
    species_map["demon"]->print();
    move_map["fireball"]->print();

    arg_print(argc, argv);
    return 0;
}
