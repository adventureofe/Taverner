/* taverner
   
By theadventureofe(John Gormley)

main file

the_adventure_of_e λ */

#include <iostream>
#include <map>
#include <memory>

#include "headers/element.hpp"
#include "headers/species.hpp"
#include "headers/subtype.hpp"

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
    std::cout << element_map["mutation"]->words["adjectives"][1] << "\n";
    std::cout << species_map["anchovy"]->words["names plural"][0] << "\n";
    std::cout << subtype_map["canid"]->words["names"][0] << "\n";
    std::cout << species_map["anchovy"]->common_elements[0]->words["names"][0] << "\n";

    arg_print(argc, argv);
    return 0;
}
