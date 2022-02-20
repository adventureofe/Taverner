/* tAverner

By theadventureofe(John Gormley)

species source code

the_adventure_of_e λ */

#include <iostream>
#include <utility>
#include <string>
#include <vector>


#include "../headers/subtype.hpp"
#include "../headers/element.hpp"
#include "../headers/species.hpp"

//macro to shorten typing in this long types
#define vec_str std::vector<std::string>

//default constructor for species with no arguments
Species::Species() 
{
    this->weight = {{"min", 1}, {"max", 1}};
    this->length = {{"min", 1}, {"max", 1}};

    this->subtypes = std::vector<Subtype*> {new Subtype()};

    this->common_elements = std::vector<Element*> {new Element()};
 
    this->noun = 
    {
        {"generic", vec_str{"DEFAULT_SPECIES_GENERIC"}}, {"generic_plural", vec_str{"DEFAULT_SPECIES_GENERIC_PLURAL"}}, 
        {"male", vec_str{"DEFAULT_SPECIES_MALE"}}, {"male_plural", vec_str{"DEFAULT_SPECIES_MALES"}}, 
        {"female", vec_str{"DEFAULT_SPECIES_FEMALE"}}, {"female_plural", vec_str{"dEFAULT_SPECIES_FEMALES"}},
        {"child", vec_str{"DEFAULT_SPECIES_CHILD"}}, {"child_plural", vec_str{"DEFAULT_SPECIES_CHILD_PLURAL"}},
        {"collective", vec_str{"DEFAULT_SPECIES_PLURAL"}}, {"collective_plural", vec_str{"DEFAULT_SPECIES_COLLECTIVE_PLURAL"}}
    }; 
};

//constructor for species
Species::Species(Weight weight, Length length, std::vector<Subtype*> subtypes, std::vector<Element*> common_elements, Nouns nouns, Stats stats) 
{
    this->weight = {{"min", weight.min}, {"max", weight.max}};
    this->length = {{"min", length.min}, {"max", length.max}};
    this->subtypes = subtypes;
    this->common_elements = common_elements;
    
    this->noun = 
    {
        {"generic", nouns.generic}, {"generic  plural", nouns.generic_plural}, 
        {"male", nouns.male}, {"male plural", nouns.male_plural}, 
        {"female", nouns.female}, {"female plural", nouns.female_plural},
        {"child", nouns.child}, {"child plural", nouns.child_plural},
        {"collective", nouns.collective}, {"collective plural", nouns.collective_plural}
    };

    this->stat = 
    {
        {"hp", stats.hp},
        {"atk", stats.atk}, {"def", stats.def},
        {"specal_atk", stats.special_atk}, {"special_def", stats.special_def},
        {"speed", stats.speed}
    };
}

#define for_each_subtype std::for_each(this->subtypes.begin(), this->subtypes.end(), [](Subtype* const& i)

void Species::print()
{
    std::cout << "(SPECIES-PRINT)\n";
    std::cout << "Name:( " << this->noun["generic"][0] << " )\n";
    std::cout << "Weight:( " << this->weight["min"] << " - " << this->weight["max"] << " )\n";
    std::cout << "Length:( " << this->length["min"] << " - " << this->length["max"] << " )\n";
    
    std::cout << "Subtype:( ";
    std::for_each(this->subtypes.begin(), this->subtypes.end(), 
       [](Subtype* const& i)
       {
            std::cout << i->name << " ";
       }
    ); 
    std::cout << " )\n";

    std::cout << "Common Elements:( ";
    std::for_each(this->common_elements.begin(), this->common_elements.end(),
        [](Element* const& i)
        {
            std::cout << i->name << " ";
        }
    ); 
    std::cout << " )\n";
    
    std::cout << "Stats:(\n";
    
    for (const auto& [key, value] : this->stat)
    {
        std::cout << "    " << key << " : " << value << "\n";
    }

    std::cout << ")\n";

    std::cout << "\n";
}


std::vector<Subtype*> Species::set_subtypes(std::initializer_list<std::string> subtypes)
{
    std::vector<Subtype*> result;

    for(std::string i : subtypes)
    {
      result.push_back(subtype_map[i]);
    }

    return result;
}

std::vector<Element*> Species::set_common_elements(std::initializer_list<std::string> elements)
{   
    std::vector<Element*> result;

    for(std::string i : elements)
    {
      result.push_back(element_map[i]);
    }
  
    return result;
}



// large section for creating blueprints for all available prebaked species
//these wil be added to a map at the bottom once all are declared
/////////////////////////////////////////////////////////////////////////////////////////////
Species aardvark = Species(   
    Weight {.min = 60000, .max = 80000},
    Length {.min = 1050, .max = 1300},

    Species::set_subtypes({"mammal", "burrower","runner"}),
  
    Species::set_common_elements({"earth", "normal", "metal"}),

    Nouns 
    {
        .generic           = vec_str{"aardvark", "dirt-pig"}, 
        .generic_plural    = vec_str{"aardvarks", "dirt-pigs"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{"sow"},
        .female_plural     = vec_str{"sows"},
        .child             = vec_str{"aardvarklet"},
        .child_plural      = vec_str{"aardvarklets"},
        .collective        = vec_str{"armoury", "group"},
        .collective_plural = vec_str{"armouries", "groups"}
    },
    
    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);
 
Species angel = Species(   
    Weight {.min = 1, .max = 1},
    Length {.min = 1700, .max = 2000},

    Species::set_subtypes({"spirit", "humanoid","flyer"}),
  
    Species::set_common_elements({"holy", "air", "water", "fire"}),

    Nouns 
    {
        .generic           = vec_str{"angel", "spirit"}, 
        .generic_plural    = vec_str{"angels", "spirits"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"wisp"},
        .child_plural      = vec_str{"wisps"},
        .collective        = vec_str{"choir", "group"},
        .collective_plural = vec_str{"choirs", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species banshee = Species(   
    Weight {.min = 1, .max = 1},
    Length {.min = 1220, .max = 1440},

    Species::set_subtypes({"spirit", "humanoid","flyer"}),
  
    Species::set_common_elements({"shadow", "evil", "ice", "magic"}),

    Nouns 
    {
        .generic           = vec_str{"banshee", "ghoul"}, 
        .generic_plural    = vec_str{"banshees", "ghouls"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"wisp"},
        .child_plural      = vec_str{"wisps"},
        .collective        = vec_str{"haunting", "group"},
        .collective_plural = vec_str{"hauntings", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);


Species chimpanzee = Species (   
    Weight {.min = 40000, .max = 70000},
    Length {.min = 1500, .max = 1680},

    Species::set_subtypes({"mammal", "humanoid", "primate", "ape", "climber"}),
  
    Species::set_common_elements({"chaos", "plant", "normal"}),
 
    Nouns 
    {
        .generic           = vec_str{"chimpanzee", "chimp"}, 
        .generic_plural    = vec_str{"chimpanzees", "chimps"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"child", "youngster", "chimplet"},
        .child_plural      = vec_str{"children", "youngsters", "chimplets"},
        .collective        = vec_str{"tribe", "group"},
        .collective_plural = vec_str{"tribes", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species demon = Species(   
    Weight {.min = 1, .max = 1},
    Length {.min = 1700, .max = 2000},

    Species::set_subtypes({"spirit", "demon", "humanoid", "flyer"}),
  
    Species::set_common_elements({"evil", "shadow", "magic", "fire"}),

    Nouns 
    {
        .generic           = vec_str{"demon"}, 
        .generic_plural    = vec_str{"demons"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{"she-demon"},
        .female_plural     = vec_str{"she-demon"},
        .child             = vec_str{"demonling"},
        .child_plural      = vec_str{"demonlings"},
        .collective        = vec_str{"legion", "group"},
        .collective_plural = vec_str{"legions", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species duck = Species(   
    Weight {.min = 720, .max = 1600},
    Length {.min = 500, .max = 650},

    Species::set_subtypes({"bird", "flyer", "swimmer"}),
  
    Species::set_common_elements({"water", "air", "normal"}),
 
    Nouns 
    {
        .generic           = vec_str{"duck", "ducky"}, 
        .generic_plural    = vec_str{"ducks", "duckies"},
        .male              = vec_str{"drake"},
        .male_plural       = vec_str{"drakes"},
        .female            = vec_str{"hen"},
        .female_plural     = vec_str{"hens"},
        .child             = vec_str{"duckling", "fledgling"},
        .child_plural      = vec_str{"ducklings", "fledlings"},
        .collective        = vec_str{"flock", "group"},
        .collective_plural = vec_str{"flocks", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species dwarf = Species (   
    Weight {.min = 44000, .max = 55000},
    Length {.min = 1030, .max = 1310},

    Species::set_subtypes({"mammal", "humanoid", "primate", "ape", "burrower", "runner"}),
  
    Species::set_common_elements({"earth", "evil", "holy", "chaos"}),
 
    Nouns 
    {
        .generic           = vec_str{"dwarf", "person"}, 
        .generic_plural    = vec_str{"dwarves", "people"},
        .male              = vec_str{"lad", "fellow"},
        .male_plural       = vec_str{"lads", "fellows"},
        .female            = vec_str{"lass", "lassie" "lady"},
        .female_plural     = vec_str{"lasses", "lassies", "ladies"},
        .child             = vec_str{"youngster", "wee-un", "child"},
        .child_plural      = vec_str{"youngsters", "wee-uns", "children"},
        .collective        = vec_str{"tribe", "group"},
        .collective_plural = vec_str{"tribes", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species elephant = Species (   
    Weight {.min = 6000000, .max = 10000000},
    Length {.min = 3130, .max = 3960},

    Species::set_subtypes({"mammal", "wanderer", "runner"}),
  
    Species::set_common_elements({"earth", "plant", "normal"}),

    Nouns 
    {
        .generic           = vec_str{"elephant"}, 
        .generic_plural    = vec_str{"elephants"},
        .male              = vec_str{"bull elephant"},
        .male_plural       = vec_str{"bull elephants"},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"calf"},
        .child_plural      = vec_str{"calves"},
        .collective        = vec_str{"herd", "tribe", "group"},
        .collective_plural = vec_str{"herds", "tribes", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);


Species frog = Species(   
    Weight {.min = 22, .max = 29},
    Length {.min = 60, .max = 90},

    Species::set_subtypes({"amphibian", "slime", "swimmer", "jumper"}),
  
    Species::set_common_elements({"mutant", "poison", "water"}),

    Nouns 
    {
        .generic           = vec_str{"frog", "froggy", "toad"}, 
        .generic_plural    = vec_str{"frogs", "froggies", "toads"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"polliwog", "tadpole", "frogling"},
        .child_plural      = vec_str{"polliwogs", "tadpoles", "froglings"},
        .collective        = vec_str{"army", "group"},
        .collective_plural = vec_str{"armies", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species gelatinous_cube = Species(   
    Weight {.min = 200000, .max = 300000},
    Length {.min = 2000, .max = 3000},

    Species::set_subtypes({"slime", "crawler", "monster"}),
  
    Species::set_common_elements({"poison", "chaos", "undead"}),
 
    Nouns 
    {
        .generic           = vec_str{"gelatinous cube", "cube"}, 
        .generic_plural    = vec_str{"gelatinous cubes", "cubes"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"cubelet", "cubeling"},
        .child_plural      = vec_str{"cubelets" "cubelings"},
        .collective        = vec_str{"mire", "army", "group"},
        .collective_plural = vec_str{"mires", "armies", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species goblin = Species(   
    Weight {.min = 40000, .max = 650000},
    Length {.min = 1030, .max = 1400},

    Species::set_subtypes({"orcish", "humanoid", "ape", "runner"}),
  
    Species::set_common_elements({"evil", "magic", "earth"}),
 
    Nouns 
    {
        .generic           = vec_str{"goblin"}, 
        .generic_plural    = vec_str{"goblins"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"gobling", "youngster"},
        .child_plural      = vec_str{"goblings", "youngsters"},
        .collective        = vec_str{"horde", "group"},
        .collective_plural = vec_str{"hordes", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species gremlin = Species(   
    Weight {.min = 12000, .max = 15000},
    Length {.min = 714, .max = 1090},

    Species::set_subtypes({"orcish", "humanoid", "fairy", "runner"}),
  
    Species::set_common_elements({"chaos", "poison", "evil", "shadow", "magic"}),

    Nouns 
    {
        .generic           = vec_str{"gremlin"}, 
        .generic_plural    = vec_str{"gremlins"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"gremling", "gremlet"},
        .child_plural      = vec_str{"gremlings", "gremlets"},
        .collective        = vec_str{"horde", "group"},
        .collective_plural = vec_str{"hordes", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species human = Species (   
    Weight {.min = 59000, .max = 77000},
    Length {.min = 1590, .max = 1710},

    Species::set_subtypes({"mammal", "humanoid", "primate", "ape", "wanderer", "runner"}),
  
    Species::set_common_elements({"normal", "holy", "evil", "mutant"}),

    Nouns
    {
        .generic           = vec_str{"human", "person"}, 
        .generic_plural    = vec_str{"humans", "people"},
        .male              = vec_str{"man", "gentleman", "bloke"},
        .male_plural       = vec_str{"men", "gentlemen", "blokes"},
        .female            = vec_str{"woman", "madam", "lass"},
        .female_plural     = vec_str{"women", "madams", "lasses"},
        .child             = vec_str{"child", "kid", "youngster"},
        .child_plural      = vec_str{"children", "kids", "youngsters"},
        .collective        = vec_str{"tribe", "group"},
        .collective_plural = vec_str{"tribes", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species ogre = Species(   
    Weight {.min = 110000, .max = 190000},
    Length {.min = 2105, .max = 2560},
    
    Species::set_subtypes({"orcish", "humanoid", "monster", "nocturnal", "runner"}),
  
    Species::set_common_elements({"earth", "evil", "ice", "plant", "normal"}),

    Nouns 
    {
      .generic           = vec_str{"ogre"}, 
      .generic_plural    = vec_str{"ogres"},
      .male              = vec_str{"he-ogre"},
      .male_plural       = vec_str{"he-ogres"},
      .female            = vec_str{"she-ogre"},
      .female_plural     = vec_str{"she-orgres"},
      .child             = vec_str{"ogreling"},
      .child_plural      = vec_str{"ogrelings"},
      .collective        = vec_str{"stampede", "group"},
      .collective_plural = vec_str{"stampede", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species orc = Species(   
    Weight {.min = 70000, .max = 100000},
    Length {.min = 1790, .max = 2090},

    Species::set_subtypes({"orcish", "humanoid", "monster", "demon", "runner"}),
  
    Species::set_common_elements({"alien", "earth", "chaos", "normal"}),

    Nouns 
    {
      .generic           = vec_str{"orc", "person"}, 
      .generic_plural    = vec_str{"orcs", "people"},
      .male              = vec_str{"he-orc", "fellow"},
      .male_plural       = vec_str{"he-orcs", "fellows"},
      .female            = vec_str{"she-orc", "lass"},
      .female_plural     = vec_str{"she-orcs", "lasses"},
      .child             = vec_str{"orcling", "child", "youngster"},
      .child_plural      = vec_str{"orclings", "children", "youngsters"},
      .collective        = vec_str{"clan", "group"},
      .collective_plural = vec_str{"clans", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species owl = Species(   
    Weight {.min = 260, .max = 555},
    Length {.min = 333, .max = 391},

    Species::set_subtypes({"bird", "flyer", "bird of prey", "nocturnal"}),
  
    Species::set_common_elements({"air", "shadow", "holy"}),

    Nouns 
    {
        .generic           = vec_str{"owl"}, 
        .generic_plural    = vec_str{"owls"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{"hen"},
        .female_plural     = vec_str{"hens"},
        .child             = vec_str{"fledgling"},
        .child_plural      = vec_str{"fledglings"},
        .collective        = vec_str{"flock", "group"},
        .collective_plural = vec_str{"flocks", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species pigeon = Species(   
    Weight {.min = 238, .max = 381},
    Length {.min = 290, .max = 375},

    Species::set_subtypes({"bird", "flyer", "vermin"}),
  
    Species::set_common_elements({"air", "poison", "mutant", "nuclear"}),
    
    Nouns 
    {
        .generic           = vec_str{"pigeon", "rock-dove"}, 
        .generic_plural    = vec_str{"pigeons", "rock-doves"},
        .male              = vec_str{"cock"},
        .male_plural       = vec_str{"cocks"},
        .female            = vec_str{"hen"},
        .female_plural     = vec_str{"hens"},
        .child             = vec_str{"chick", "hatchling"},
        .child_plural      = vec_str{"chicks" "hatchlings"},
        .collective        = vec_str{"squab", "flock", "group"},
        .collective_plural = vec_str{"squabs", "flocks", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species penguin = Species(   
    Weight {.min = 2200, .max = 4500},
    Length {.min = 800, .max = 1000},

    Species::set_subtypes({"bird", "swimmer"}),
  
    Species::set_common_elements({"ice", "water", "evil"}),

    Nouns 
    {
        .generic           = vec_str{"penguin"}, 
        .generic_plural    = vec_str{"penguins"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"chick", "hatchling"},
        .child_plural      = vec_str{"chicks" "hatchlings"},
        .collective        = vec_str{"raft", "group"},
        .collective_plural = vec_str{"rafts", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species slime = Species(   
    Weight {.min = 6000, .max = 8040},
    Length {.min = 500, .max = 1010},

    Species::set_subtypes({"slime", "crawler", "vermin"}),
  
    Species::set_common_elements({"poison", "alien", "mutant", "evil", "nuclear"}),

    Nouns 
    {
        .generic           = vec_str{"slime"}, 
        .generic_plural    = vec_str{"slimes"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{},
        .female_plural     = vec_str{},
        .child             = vec_str{"slimelet", "slimeling"},
        .child_plural      = vec_str{"slimelets", "slimelings"},
        .collective        = vec_str{"mire", "army", "group"},
        .collective_plural = vec_str{"mires", "armies", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species tiger = Species(   
    Weight {.min = 206000, .max = 210040},
    Length {.min = 1780, .max = 2080},
    
    Species::set_subtypes({"feline", "runner"}),
  
    Species::set_common_elements({"normal", "holy"}),

    Nouns 
    {
        .generic           = vec_str{"tiger"}, 
        .generic_plural    = vec_str{"tigers"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{"tigress"},
        .female_plural     = vec_str{"tigresses"},
        .child             = vec_str{"cub", "kitten"},
        .child_plural      = vec_str{"cubs", "kittens"},
        .collective        = vec_str{"streak", "group"},
        .collective_plural = vec_str{"streaks", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species vampire = Species (   
    Weight {.min = 59000, .max = 77000},
    Length {.min = 1590, .max = 1710},

    Species::set_subtypes({"spirit", "humanoid", "primate", "flyer"}),
  
    Species::set_common_elements({"undead", "evil", "shadow", "magic"}),

    Nouns 
    {
        .generic           = vec_str{"vampire", "bloodsucker"}, 
        .generic_plural    = vec_str{"vampires", "bloodsuckers"},
        .male              = vec_str{"gentleman", "man"},
        .male_plural       = vec_str{"gentlemen", "men"},
        .female            = vec_str{"lady", "woman"},
        .female_plural     = vec_str{"ladies", "women"},
        .child             = vec_str{"vampling", "child"},
        .child_plural      = vec_str{"vamplings", "children"},
        .collective        = vec_str{"legion", "group"},
        .collective_plural = vec_str{"legions", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species wolf = Species(   
    Weight {.min = 39000, .max = 69000},
    Length {.min = 1050, .max = 1600},

    Species::set_subtypes({"mammal", "canine", "wanderer", "runner"}),
  
    Species::set_common_elements({"shadow", "normal", "evil"}),
 
    Nouns 
    {
        .generic           = vec_str{"wolf", "dog"}, 
        .generic_plural    = vec_str{"wolves", "dogs"},
        .male              = vec_str{},
        .male_plural       = vec_str{},
        .female            = vec_str{"she-wolf", "bitch"},
        .female_plural     = vec_str{"she-wolves", "bitches"},
        .child             = vec_str{"cub", "puppy", "pup"},
        .child_plural      = vec_str{"cubs", "puppies", "pups"},
        .collective        = vec_str{"pack", "group"},
        .collective_plural = vec_str{"packs", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);

Species zebra = Species(   
    Weight {.min = 352000, .max = 450000},
    Length {.min = 2500, .max = 3000},

    Species::set_subtypes({"mammal", "equine", "runner"}),
  
    Species::set_common_elements({"normal", "earth", "electric"}),

    Nouns 
    {
        .generic           = vec_str{"zebra", "horse"}, 
        .generic_plural    = vec_str{"zebras", "horses"},
        .male              = vec_str{"stallion", "colt"},
        .male_plural       = vec_str{"stallions", "colts"},
        .female            = vec_str{"filly", "mare"},
        .female_plural     = vec_str{"fillies", "mares"},
        .child             = vec_str{"foal"},
        .child_plural      = vec_str{"foals"},
        .collective        = vec_str{"herd", "group"},
        .collective_plural = vec_str{"herds", "groups"}
    },

    Stats
    {
      //default stats (remove this comment when updated)
        .hp = 50,
        .atk = 10,
        .def = 10,
        .special_atk = 10,
        .special_def = 10,
        .speed = 10
    }
);
/////////////////////////////////////////////////////////////////////////////////////////////////

//Generate map for all species
//this may be better as smart pointers (don't know how to do that)
std::map<std::string, Species*> species_map = 
{
    {"aardvark", &aardvark},
    {"angel", &angel},
    {"banshee", &banshee},
    {"chimpanzee", &chimpanzee},
    {"demon", &demon},
    {"duck", &duck},
    {"dwarf", &dwarf},
    {"elephant", &elephant},
    {"frog", &frog},
    {"gelatinous cube", &gelatinous_cube},
    {"goblin", &goblin},
    {"gremlin", &gremlin},
    {"human", &human},
    {"ogre", &ogre},
    {"orc", &orc},
    {"owl", &owl},
    {"pigeon", &pigeon},
    {"penguin", &penguin},
    {"slime", &slime},
    {"tiger", &tiger},
    {"vampire", &vampire},
    {"wolf", &wolf},
    {"zebra", &zebra}
};
