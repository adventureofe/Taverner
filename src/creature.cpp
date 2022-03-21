/* taverner

By theadventureofe(John Gormley)

creature source code

the_adventure_of_e λ */

//some of these may be removable at a later stage

#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <iterator>
#include <memory>

#include "../headers/element.hpp"
#include "../headers/creature.hpp"

#define vec_subtype std::vector<Subtype*>
#define vec_element std::vector<Element*>
#define vec_str std::vector<std::string>

Creature::Creature()
{
    this->name = "CREATURE_NAME_DEFAULT";
    this->species = new Species();
    this->elements = vec_element{new Element()};
    this->subtypes = vec_subtype{new Subtype()};
}

Creature::Creature(std::string species, vec_str elements, vec_str subtypes)
{
    this->name = "Boris";
    this->species = species_map[species];

    for (auto element : elements)
    {
        this->elements.emplace_back(element_map[element]);
    }

    for (auto subtype : subtypes)
    {
        this->subtypes.emplace_back(subtype_map[subtype]);
    }

}

Creature::Creature(std::string species)
{
    this->name = "Bob";
    this->species = species_map[species];

    int element_selector = rand() % 4;

    switch(element_selector)
    {
        case 0: 
        {
            std::cout << "1 common \n";
            break;
        }
        case 1:
        {
            std::cout << "2 common \n";
            break;
        }

        case 2:
        {
            std::cout << "1 random \n";
            int random = rand() % element_map.size();
            
            std::cout << "random = " << random << "\n";
            
            std::string random_element = element_map_keys(element_map)[random];
            

            std::cout << "random_element = " << random_element << "\n";
            
            this->elements.emplace_back(element_map[random_element]); 
            break;
        }

        case 3:
        {
            std::cout << "2 random \n";
            int random_1 = 0, random_2 = 0;
            do 
            {
                random_1 = rand() % element_map.size();
                random_2 = rand() % element_map.size();

            } while (random_1 == random_2);

            std::cout << "random_1 = " << random_1 << "\n";
            std::cout << "random_2 = " << random_2 << "\n\n";

            std::string random_element_1 = element_map_keys(element_map)[random_1];
            std::string random_element_2 = element_map_keys(element_map)[random_2];

            std::cout << "random_element_1 = " << random_element_1 << "\n";
            std::cout << "random_element_2 = " << random_element_2 << "\n";


            this->elements.emplace_back(element_map[random_element_1]);
            this->elements.emplace_back(element_map[random_element_2]);
            
            break;
        }
    }
    this->subtypes = this->species->subtypes;
}

void Creature::print()
{
    for(auto element : this->elements)
    {
      std::cout << element->words["names"][0] << "\n";
    }
}
