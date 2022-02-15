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

    species["zebra"]->print();
  
    //test print statements for maps ALL WORKING
/*  
    //print all keys and some values (not completed yet)
    for (auto const& [key, val] : species)
    {
        std::cout << "key-name (" << key << ")\n";
        std::cout << "weight (" << val->weight["min"] << " - " << val->weight["max"] << ") \n";
        std::cout << "length (" << val->length["min"] << " - " << val->length["max"] << ") \n";
    }
*/
    return 0;
}
