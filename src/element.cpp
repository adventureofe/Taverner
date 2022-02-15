/* taverner

By theadventureofe(John Gormley)

element source code

the_adventure_of_e λ */

#include <iostream>
#include <utility>
#include <string>
#include <vector>

#include "../headers/element.hpp"

Element::Element()
{
    this->name = "DEFAULT_ELEMENT";
  
    this->multipliers = 
    {
        {"alien",    1.0},
        {"air",      1.0},
        {"chaos",    1.0},
        {"earth",    1.0},
        {"electric", 1.0},
        {"evil",     1.0},
        {"fire",     1.0},
        {"holy",     1.0},
        {"ice",      1.0},
        {"magic",    1.0},
        {"metal",    1.0},
        {"mutant",   1.0},
        {"normal",   1.0},
        {"nuclear",  1.0},
        {"plant",    1.0},
        {"poison",   1.0},
        {"shadow",   1.0},
        {"toon",     1.0},
        {"undead",   1.0},
        {"water",    1.0}
    };
};

Element::Element(std::string name, Multipliers multipliers)
{
    this->name = name;

    this->multipliers =
    {
        {"alien",    multipliers.alien},
        {"air",      multipliers.air},
        {"chaos",    multipliers.chaos},
        {"earth",    multipliers.earth},
        {"electric", multipliers.electric},
        {"evil",     multipliers.evil},
        {"fire",     multipliers.fire},
        {"holy",     multipliers.holy},
        {"ice",      multipliers.ice},
        {"magic",    multipliers.magic},
        {"metal",    multipliers.metal},
        {"mutant",   multipliers.mutant},
        {"normal",   multipliers.normal},
        {"nuclear",  multipliers.nuclear},
        {"plant",    multipliers.plant},
        {"poison",   multipliers.poison},
        {"shadow",   multipliers.shadow},
        {"toon",     multipliers.toon},
        {"undead",   multipliers.undead},
        {"water",    multipliers.water}
    };
};

void Element::print(){
  std::cout << "(ELEMENT-PRINT)\n";
  std::cout << "Name:( " << this->name << " )\n";
  
  std::cout << "(Multipliers)\n";
    for (auto const& [key, val] : this->multipliers)
    {
        std::cout << "   " << key << " : ";
        std::cout << val << "\n";
    }
    std::cout << "\n";
}

//blueprints for all elements
/////////////////////////////////////////////////////////////////////////////////////////////////
Element alien = Element(
    "alien" ,

    Multipliers
    {
        .alien = 0.5, 
        .air = 2.0,
        .chaos = 1.0,
        .earth = 2.0, 
        .electric = 2.0,
        .evil =  1.0,
        .fire = 2.0,
        .holy = 1.0,
        .ice = 1.0,
        .magic = 1.0,
        .metal = 1.0,
        .mutant = 1.0,
        .normal = 2.0,
        .nuclear = 0.5,
        .plant = 1.0,
        .poison = 0.5,
        .shadow = 2.0,
        .toon = 1.0,
        .undead = 0.5,
        .water = 0.5
    }
);

Element air = Element(
    "air" ,

    Multipliers
    {
        .alien = 0.5, 
        .air = 0.5,
        .chaos = 1.0,
        .earth = 1.0, 
        .electric = 2.0,
        .evil =  0.5,
        .fire = 2.0,
        .holy = 1.0,
        .ice = 2.0,
        .magic = 1.0,
        .metal = 1.0,
        .mutant = 2.0,
        .normal = 1.0,
        .nuclear = 0.5,
        .plant = 0.5,
        .poison = 1.0,
        .shadow = 1.0,
        .toon = 2.0,
        .undead = 1.0,
        .water = 1.0
    }
);

Element chaos = Element(
    "chaos" ,

    Multipliers
    {
        .alien = 2.0, 
        .air = 0.5,
        .chaos = 2.0,
        .earth = 0.5, 
        .electric = 1.0,
        .evil =  1.0,
        .fire = 0.5,
        .holy = 1.0,
        .ice = 1.0,
        .magic = 2.0,
        .metal = 1.0,
        .mutant = 2.0,
        .normal = 1.0,
        .nuclear = 2.0,
        .plant = 0.5,
        .poison = 1.0,
        .shadow = 2.0,
        .toon = 2.0,
        .undead = 2.0,
        .water = 2.0
    }
);

Element earth = Element(
    "earth" ,

    Multipliers
    {
        .alien = 1.0, 
        .air = 1.0,
        .chaos = 1.0,
        .earth = 0.5, 
        .electric = 1.0,
        .evil =  2.0,
        .fire = 2.0,
        .holy = 1.0,
        .ice = 1.0,
        .magic = 2.0,
        .metal = 0.5,
        .mutant = 1.0,
        .normal = 1.0,
        .nuclear = 1.0,
        .plant = 0.5,
        .poison = 1.0,
        .shadow = 1.0,
        .toon = 1.0,
        .undead = 2.0,
        .water = 0.5
    }
);

Element electric = Element(
    "electric" ,

    Multipliers
    {
        .alien = 0.5, 
        .air = 0.5,
        .chaos = 1.0,
        .earth = 0.5, 
        .electric = 0.5,
        .evil =  1.0,
        .fire = 1.0,
        .holy = 2.0,
        .ice = 1.0,
        .magic = 2.0,
        .metal = 2.0,
        .mutant = 1.0,
        .normal = 1.0,
        .nuclear = 1.0,
        .plant = 0.5,
        .poison = 1.0,
        .shadow = 1.0,
        .toon = 2.0,
        .undead = 1.0,
        .water = 2.0
    }
);

Element evil = Element(
    "evil" ,

    Multipliers
    {
        .alien = 1.0, 
        .air = 1.0,
        .chaos = 1.0,
        .earth = 1.0, 
        .electric = 1.0,
        .evil =  0.5,
        .fire = 1.0,
        .holy = 2.0,
        .ice = 1.0,
        .magic = 1.0,
        .metal = 1.0,
        .mutant = 1.0,
        .normal = 2.0,
        .nuclear = 0.5,
        .plant = 2.0,
        .poison = 1.0,
        .shadow = 0.5,
        .toon = 0.5,
        .undead = 0.5,
        .water = 2.0
    }
);

Element fire = Element(
    "fire" ,

    Multipliers
    {
        .alien = 2.0, 
        .air = 0.5,
        .chaos = 2.0,
        .earth = 0.5, 
        .electric = 1.0,
        .evil =  0.5,
        .fire = 0.5,
        .holy = 1.0,
        .ice = 2.0,
        .magic = 1.0,
        .metal = 2.0,
        .mutant = 1.0,
        .normal = 1.0,
        .nuclear = 1.0,
        .plant = 2.0,
        .poison = 1.0,
        .shadow = 0.5,
        .toon = 1.0,
        .undead = 2.0,
        .water = 0.5
    }
);

Element holy = Element(
    "holy" ,

    Multipliers
    {
        .alien = 0.5, 
        .air = 1.0,
        .chaos = 0.5,
        .earth = 2.0, 
        .electric = 1.0,
        .evil =  2.0,
        .fire = 2.0,
        .holy = 0.5,
        .ice = 2.0,
        .magic = 2.0,
        .metal = 1.0,
        .mutant = 2.0,
        .normal = 1.0,
        .nuclear = 2.0,
        .plant = 1.0,
        .poison = 2.0,
        .shadow = 2.0,
        .toon = 0.5,
        .undead = 2.0,
        .water = 1.0
    }
);

Element ice = Element(
    "ice" ,

    Multipliers
    {
        .alien = 2.0, 
        .air = 1.0,
        .chaos = 0.5,
        .earth = 2.0, 
        .electric = 1.0,
        .evil =  1.0,
        .fire = 0.5,
        .holy = 2.0,
        .ice = 0.5,
        .magic = 0.5,
        .metal = 1.0,
        .mutant = 2.0,
        .normal = 1.0,
        .nuclear = 1.0,
        .plant = 2.0,
        .poison = 1.0,
        .shadow = 1.0,
        .toon = 1.0,
        .undead = 2.0,
        .water = 2.0
    }
);

Element magic = Element(
    "magic" ,

    Multipliers
    {
        .alien = 0.5, 
        .air = 1.0,
        .chaos = 2.0,
        .earth = 0.5, 
        .electric = 1.0,
        .evil =  2.0,
        .fire = 2.0,
        .holy = 2.0,
        .ice = 2.0,
        .magic = 0.5,
        .metal = 2.0,
        .mutant = 0.5,
        .normal = 1.0,
        .nuclear = 1.0,
        .plant = 1.0,
        .poison = 0.5,
        .shadow = 2.0,
        .toon = 0.5,
        .undead = 2.0,
        .water = 1.0
    }
);

Element metal = Element(
    "metal" ,

    Multipliers
    {
        .alien = 1.0, 
        .air = 2.0,
        .chaos = 1.0,
        .earth = 1.0, 
        .electric = 1.0,
        .evil =  1.0,
        .fire = 1.0,
        .holy = 1.0,
        .ice = 1.0,
        .magic = 1.0,
        .metal = 0.5,
        .mutant = 1.0,
        .normal = 1.0,
        .nuclear = 1.0,
        .plant = 2.0,
        .poison = 2.0,
        .shadow = 1.0,
        .toon = 1.0,
        .undead = 1.0,
        .water = 0.5
    }
);

Element mutant = Element(
    "mutant" ,

    Multipliers
    {
        .alien = 2.0, 
        .air = 1.0,
        .chaos = 2.0,
        .earth = 1.0, 
        .electric = 1.0,
        .evil =  2.0,
        .fire = 1.0,
        .holy = 0.5,
        .ice = 0.5,
        .magic = 1.0,
        .metal = 1.0,
        .mutant = 0.5,
        .normal = 1.0,
        .nuclear = 2.0,
        .plant = 2.0,
        .poison = 1.0,
        .shadow = 1.0,
        .toon = 1.0,
        .undead = 2.0,
        .water = 0.5
    }
);


Element normal = Element(
    "normal" ,

    Multipliers
    {
        .alien = 0.5, 
        .air = 1.0,
        .chaos = 0.5,
        .earth = 2.0, 
        .electric = 1.0,
        .evil =  2.0,
        .fire = 1.0,
        .holy = 1.0,
        .ice = 1.0,
        .magic = 1.0,
        .metal = 1.0,
        .mutant = 2.0,
        .normal = 1.0,
        .nuclear = 1.0,
        .plant = 1.0,
        .poison = 1.0,
        .shadow = 1.0,
        .toon = 2.0,
        .undead = 0.5,
        .water = 1.0
    }
);

Element nuclear = Element(
    "nuclear" ,
    Multipliers
    {
        .alien = 2.0, 
        .air = 2.0,
        .chaos = 2.0,
        .earth = 1.0, 
        .electric = 0.5,
        .evil =  1.0,
        .fire = 0.5,
        .holy = 1.0,
        .ice = 1.0,
        .magic = 0.5,
        .metal = 1.0,
        .mutant = 1.0,
        .normal = 1.0,
        .nuclear = 2.0,
        .plant = 2.0,
        .poison = 1.0,
        .shadow = 0.5,
        .toon = 0.5,
        .undead = 2.0,
        .water = 1.0
    }
);

Element plant = Element(
    "plant" ,
    Multipliers
    {
        .alien = 2.0, 
        .air = 2.0,
        .chaos = 0.5,
        .earth = 2.0, 
        .electric = 1.0,
        .evil =  0.5,
        .fire = 0.5,
        .holy = 2.0,
        .ice = 0.5,
        .magic = 1.0,
        .metal = 1.0,
        .mutant = 1.0,
        .normal = 1.0,
        .nuclear = 0.5,
        .plant = 0.5,
        .poison = 1.0,
        .shadow = 1.0,
        .toon = 1.0,
        .undead = 1.0,
        .water = 2.0
    }
);

Element poison = Element(
    "poison" ,
    Multipliers
    {
        .alien = 2.0, 
        .air = 1.0,
        .chaos = 2.0,
        .earth = 1.0, 
        .electric = 1.0,
        .evil =  1.0,
        .fire = 1.0,
        .holy = 2.0,
        .ice = 1.0,
        .magic = 2.0,
        .metal = 0.5,
        .mutant = 0.5,
        .normal = 1.0,
        .nuclear = 0.5,
        .plant = 2.0,
        .poison = 0.5,
        .shadow = 0.5,
        .toon = 0.5,
        .undead = 0.5,
        .water = 2.0
    }
);

Element shadow = Element(
    "shadow" ,
    Multipliers
    {
        .alien = 1.0, 
        .air = 2.0,
        .chaos = 2.0,
        .earth = 2.0, 
        .electric = 1.0,
        .evil =  0.5,
        .fire = 1.0,
        .holy = 2.0,
        .ice = 1.0,
        .magic = 2.0,
        .metal = 1.0,
        .mutant = 0.5,
        .normal = 2.0,
        .nuclear = 2.0,
        .plant = 0.5,
        .poison = 0.5,
        .shadow = 0.5,
        .toon = 1.0,
        .undead = 2.0,
        .water = 1.0
    }
);

Element toon = Element(
    "toon" ,
    Multipliers
    {
        .alien = 1.0, 
        .air = 2.0,
        .chaos = 2.0,
        .earth = 0.5, 
        .electric = 0.5,
        .evil =  1.0,
        .fire = 0.5,
        .holy = 2.0,
        .ice = 1.0,
        .magic = 0.5,
        .metal = 1.0,
        .mutant = 1.0,
        .normal = 0.5,
        .nuclear = 1.0,
        .plant = 1.0,
        .poison = 2.0,
        .shadow = 2.0,
        .toon = 0.5,
        .undead = 1.0,
        .water = 1.0
    }
);

Element undead = Element(
    "undead" ,
    Multipliers
    {
        .alien = 2.0, 
        .air = 0.5,
        .chaos = 2.0,
        .earth = 0.5, 
        .electric = 2.0,
        .evil =  1.0,
        .fire = 0.5,
        .holy = 2.0,
        .ice = 2.0,
        .magic = 2.0,
        .metal = 0.5,
        .mutant = 2.0,
        .normal = 2.0,
        .nuclear = 1.0,
        .plant = 1.0,
        .poison = 2.0,
        .shadow = 2.0,
        .toon = 1.0,
        .undead = 0.5,
        .water = 0.5
    }
);

Element water = Element(
    "water" ,
    Multipliers
    {
        .alien = 2.0, 
        .air = 1.0,
        .chaos = 0.5,
        .earth = 1.0, 
        .electric = 0.5,
        .evil = 2.0,
        .fire = 2.0,
        .holy = 1.0,
        .ice = 0.5,
        .magic = 2.0,
        .metal = 2.0,
        .mutant = 0.5,
        .normal = 1.0,
        .nuclear = 0.5,
        .plant = 0.5,
        .poison = 0.5,
        .shadow = 1.0,
        .toon = 1.0,
        .undead = 1.0,
        .water = 0.5
    }
);
/////////////////////////////////////////////////////////////////////////////////////////////

//map of all available elements
std::map<std::string, Element*> element_map = 
{
    {"alien", &alien},
    {"air", &air},
    {"chaos", &chaos},
    {"earth", &earth},
    {"electric", &electric},
    {"evil", &evil},
    {"fire", &fire},
    {"holy", &holy},
    {"ice", &ice},
    {"magic", &magic},
    {"metal", &metal},
    {"mutant", &mutant},
    {"normal", &normal},
    {"nuclear", &nuclear},
    {"plant", &plant},
    {"poison", &poison},
    {"shadow", &shadow},
    {"toon", &toon},
    {"undead", &undead},
    {"water", &water}
};
