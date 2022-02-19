/* taverner
   
By theadventureofe(John Gormley)

main file

the_adventure_of_e λ */

#include <iostream>
#include <map>
#include <memory>

#include "headers/species.hpp"
#include "headers/element.hpp"
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
    arg_print(argc, argv);

    // print all data of zebra species
    // species_map["zebra"]->print();

    // print all data of water element
    // element_map["water"]->print();

    // testing default constructor
    // Creature creature_test = Creature();
    // std::cout << creature_test.name << "\n\n";

    //using the print function of the internal species of creature
    // creature_test.species->print();

    //using the print function of the interal eleement of creature
    // creature_test.element_1->print();

    //testing created creature
    Creature test = Creature("Jacob", "gelatinous cube", "shadow", "earth");
    std::cout << test.name << "\n\n";

    //using the print function of the internal species of creature
    test.species->print();

    //using the print function of the interal eleement of creature
    test.element_1->print();
   
    return 0;
}
