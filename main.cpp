/* taverner
   
By theadventureofe(John Gormley)

main file

the_adventure_of_e λ
*/

#include <iostream>
#include <map>
#include <memory>

#include "headers/species.hpp"
#include "headers/element.hpp"

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

    //print all data of zebra species
    species["zebra"]->print();

    //print all data of water element
    elements["water"]->print();
  
    return 0;
}
