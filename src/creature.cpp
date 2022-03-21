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

    int element_selector = rand() % 16;
    std::cout << "element_selector = " << element_selector << "\n";


    if(element_selector <= 6)
    {
       std::cout << "1st common \n";
       this->elements.emplace_back(this->species->common_elements[0]);
    }
 
    else if(element_selector <= 10) 
    {
        std::cout << "1 common \n";
        int random = rand() % this->species->common_elements.size();
        this->elements.emplace_back(this->species->common_elements[random]);
    }

    else if(element_selector <= 14)
    {     
        std::cout << "2 common \n";
        int random_1 = 0, random_2 = 0;

        do 
        {
            random_1 = rand() % this->species->common_elements.size();
            random_2 = rand() % this->species->common_elements.size();    
        } while (random_1 == random_2);

        this->elements.emplace_back(this->species->common_elements[random_1]);
        this->elements.emplace_back(this->species->common_elements[random_2]);    
    }

    else if(element_selector <= 15)
    {
        std::cout << "1 common, 1 random \n";    
        int random_1 = 0, random_2 = 0;

        do
        {
            random_1 = rand() % this->species->common_elements.size();
            random_2 = rand() % element_map.size();
        } while (random_1 == random_2);


        std::string random_element = element_map_keys(element_map)[random_1];


        this->elements.emplace_back(this->species->common_elements[random_1]);
        this->elements.emplace_back(element_map.at(random_element)); 
    }

    else
    {
        std::cout << "2 random \n";
        int random_1 = 0, random_2 = 0;

        do 
        {
            random_1 = rand() % element_map.size();
            random_2 = rand() % element_map.size();    
        } while (random_1 == random_2);

        std::string random_element_1 = element_map_keys(element_map)[random_1];
        std::string random_element_2 = element_map_keys(element_map)[random_2];

        this->elements.emplace_back(element_map.at(random_element_1));
        this->elements.emplace_back(element_map.at(random_element_2));
            
    }
    this->subtypes = this->species->subtypes;
}

void Creature::print()
{
    for(auto element : this->elements)
    {
      std::cout << element->words.at("names")[0] << "\n";
    }
}
