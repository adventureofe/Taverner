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

//macro to shorten typing in this long ass template code
#define vec_str std::vector<std::string>

int main (int argc, char** argv)
{
    arg_print(argc, argv);
  
    Species vampire = Species (   
        Weight {.min = 59000, .max = 77000},
        Length {.min = 1590, .max = 1710},
    
        vec_str {"spirit", "humanoid", "primate", "flyer"}, //subtypes
                        
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
        }
    );

    Species dwarf = Species (   
        Weight {.min = 44000, .max = 55000},
        Length {.min = 1030, .max = 1310},
    
        vec_str {"mammal", "humanoid", "primate", "ape", "burrower", "runner"}, //subtypes

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
        }
    );

    Species human = Species (   
        Weight {.min = 59000, .max = 77000},
        Length {.min = 1590, .max = 1710},
    
        vec_str {"mammal", "humanoid", "primate", "ape", "wanderer", "runner"}, //subtypes
    
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
        }
    );

    Species chimpanzee = Species (   
        Weight {.min = 40000, .max = 70000},
        Length {.min = 1500, .max = 1680},
        
        vec_str {"mammal", "humanoid", "ape", "climber", "runner"}, //subtypes
      
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
        }
    );

    Species orc = Species(   
        Weight {.min = 70000, .max = 100000},
        Length {.min = 1790, .max = 2090},
        
        vec_str {"orcish", "humanoid", "monster", "demon", "runner"}, //subtypes

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
        }
    );

    Species goblin = Species(   
        Weight {.min = 40000, .max = 650000},
        Length {.min = 1030, .max = 1400},
        
        vec_str {"orcish", "humanoid", "ape", "runner"}, //subtypes

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
        }
    );

    Species gremlin = Species(   
        Weight {.min = 12000, .max = 15000},
        Length {.min = 714, .max = 1090},
        
        vec_str {"orcish", "humanoid", "fairy", "runner"}, //subtypes
        
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
        }
    );

  Species frog = Species(   
      Weight {.min = 22, .max = 29},
      Length {.min = 60, .max = 90},
      
      vec_str {"amphibian", "slime", "swimmer", "jumper"}, //subtypes

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
      }
  );

    Species slime = Species(   
        Weight {.min = 6000, .max = 8040},
        Length {.min = 500, .max = 1010},
        
        vec_str {"slime", "crawler"}, //subtypes

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
        }
    );

    Species gelatinous_cube = Species(   
        Weight {.min = 200000, .max = 300000},
        Length {.min = 2000, .max = 3000},
        
        vec_str {"slime", "crawler", "monster"}, //subtypes

        Nouns 
        {
            .generic           = vec_str{"gelatinous-cube", "cube"}, 
            .generic_plural    = vec_str{"gelatinous-cubes", "cubes"},
            .male              = vec_str{},
            .male_plural       = vec_str{},
            .female            = vec_str{},
            .female_plural     = vec_str{},
            .child             = vec_str{"cubelet", "cubeling"},
            .child_plural      = vec_str{"cubelets" "cubelings"},
            .collective        = vec_str{"mire", "army", "group"},
            .collective_plural = vec_str{"mires", "armies", "groups"}
        }
    );

  Species pigeon = Species(   
      Weight {.min = 238, .max = 381},
      Length {.min = 290, .max = 375},
      
      vec_str {"bird", "flyer", "vermin"}, //subtypes

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
      }
  );

    Species owl = Species(   
        Weight {.min = 260, .max = 555},
        Length {.min = 333, .max = 391},
        
        vec_str {"bird", "flyer", "bird-of-prey", "nocturnal"}, //subtypes

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
        }
    );

    Species aardvark = Species(   
        Weight {.min = 60000, .max = 80000},
        Length {.min = 1050, .max = 1300},
        
        vec_str {"mammmal", "burrower", "runner"}, //subtypes
        
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
        }
    );

    Species angel = Species(   
        Weight {.min = 1, .max = 1},
        Length {.min = 1700, .max = 2000},
        
        vec_str {"spirit", "humanoid", "flyer"}, //subtypes

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
        }
    );

    Species demon = Species(   
        Weight {.min = 1, .max = 1},
        Length {.min = 1700, .max = 2000},
                       
        vec_str {"spirit", "demon", "humanoid", "flyer"}, //subtypes

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
        }
    );

    Species wolf = Species(   
        Weight {.min = 39000, .max = 69000},
        Length {.min = 1050, .max = 1600},
        
        vec_str {"mammal", "canine", "wanderer", "runner"}, //subtypes

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
        }
    );
  
    Species duck = Species(   
        Weight {.min = 720, .max = 1600},
        Length {.min = 500, .max = 650},
        
        vec_str {"bird", "flyer", "swimmer"}, //subtypes

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
        }
);
  
    //Generate map for all species
    //this may be better as smart pointers (don't know how to do that)
    std::map<std::string, Species*> species = 
    {
        {"vampire", &vampire},
        {"dwarf", &dwarf},
        {"human", &human},
        {"chimpanzee", &chimpanzee},
        {"orc", &orc},
        {"goblin", &goblin},
        {"gremlin", &gremlin},
        {"frog", &frog},
        {"slime", &slime},
        {"gelatinous-cube", &gelatinous_cube},
        {"pigeon", &pigeon},
        {"owl", &owl},
        {"aardvark", &aardvark},
        {"angel", &angel},
        {"demon", &demon},
        {"wolf", &wolf},
        {"duck", &duck}
    };
  
    /*
    //test print statements for maps ALL WORKING
    std::cout << species["vampire"]->length["max"] << "\n";
    std::cout << species["dwarf"]->noun["generic_plural"][0] << "\n";
    std::cout << species["human"]->subtypes[4] << "\n";
    std::cout << species["orc"]->noun["collective_plural"][0] << "\n";
    std::cout << species["frog"]->subtypes[0] << "\n";
    */
    
  
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
    return 0;
}
