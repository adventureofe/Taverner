/* taverner
   
By theadventureofe(John Gormley)

main file

the_adventure_of_e λ
*/

#include <iostream>
#include <map>
#include <memory>

#include "headers/species.hpp"

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
  
    //test print statements for maps ALL WORKING
    std::cout << species["vampire"]->length["max"] << "\n";
    std::cout << species["dwarf"]->noun["generic_plural"][0] << "\n";
    std::cout << species["human"]->subtypes[0] << "\n";
    //std::cout << species["orc"]->noun["collective_plural"][0] << "\n";
    //std::cout << species["frog"]->subtypes[0] << "\n";
    
/*  
    //print all keys and some values (not completed yet)
    for (auto const& [key, val] : species)
    {
        std::cout << "key-name (" << key << ")\n";
        std::cout << "weight (" << val->weight["min"] << " - " << val->weight["max"] << ") \n";
        std::cout << "length (" << val->length["min"] << " - " << val->length["max"] << ") \n";

        std::cout << "subtypes ( ";
        
        std::for_each(val->subtypes.begin(), val->subtypes.end(),
            [](std::string const& i)
            {
                std::cout << i << " ";
            });
        
        std::cout << ") \n";

        std::cout << "names ( ";
        
        std::for_each(val->noun["generic"].begin(), val->noun["generic"].end(),
            [](std::string const& i)
            {
                std::cout << i << " ";
            });

        std::cout << ") \n";        
        std::cout << "\n"; 
    }
*/
    return 0;
}
