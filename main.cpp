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
  
  Species vampire = Species(   
                        Weight {.min = 59000, .max = 77000},
                        Length {.min = 1590, .max = 1710},
                        vec_str {"spirit", "humanoid", "primate", "flyer"}, //subtypes
                        
                        Nouns {
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

  Species dwarf = Species(   
                        Weight {.min = 44000, .max = 55000},
                        Length {.min = 1030, .max = 1310},
                        vec_str {"mammal", "humanoid", "primate", "ape", "burrower", "runner"}, //subtypes

                        Nouns {
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

  Species human = Species(   
                        Weight {.min = 59000, .max = 77000},
                        Length {.min = 1590, .max = 1710},
                        vec_str {"mammal", "humanoid", "primate", "ape", "wanderer", "runner"}, //subtypes

                        Nouns {
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

  Species chimpanzee = Species(   
                        Weight {.min = 40000, .max = 70000},
                        Length {.min = 1500, .max = 1680},
                        vec_str {"mammal", "humanoid", "ape", "climber", "runner"}, //subtypes

                        Nouns {
                          .generic           = vec_str{"chimpanzee", "chimp"}, 
                          .generic_plural    = vec_str{"chimpanzees", "chimps"},
                          .male              = vec_str{""},
                          .male_plural       = vec_str{""},
                          .female            = vec_str{""},
                          .female_plural     = vec_str{""},
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

                        Nouns {
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

  Species frog = Species(   
                        Weight {.min = 22, .max = 29},
                        Length {.min = 60, .max = 90},
                        vec_str {"amphibian", "slime", "swimmer", "jumper"}, //subtypes

                        Nouns {
                          .generic           = vec_str{"frog", "froggy", "toad"}, 
                          .generic_plural    = vec_str{"frogs", "froggies", "toads"},
                          .male              = vec_str{""},
                          .male_plural       = vec_str{""},
                          .female            = vec_str{},
                          .female_plural     = vec_str{},
                          .child             = vec_str{"polliwog", "tadpole", "frogling"},
                          .child_plural      = vec_str{"polliwogs", "tadpoles", "froglings"},
                          .collective        = vec_str{"army", "group"},
                          .collective_plural = vec_str{"armies", "groups"}
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
    {"frog", &frog}
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
    for_each(val->subtypes.begin(), val->subtypes.end(),
             [](std::string const& i)
             {
               std::cout << i << " ";
             });
    std::cout << ") \n";

    std::cout << "names ( ";
    for_each(val->noun["generic"].begin(), val->noun["generic"].end(),
             [](std::string const& i)
             {
               std::cout << i << " ";
             });
    std::cout << ") \n";

    std::cout << "\n";
    
  }


  return 0;
}
