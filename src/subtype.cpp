/* taverner

By theadventureofe(John Gormley)

subtype source code

the_adventure_of_e λ */

#include <iostream>
#include <utility>
#include <string>
#include <vector>

#include "../headers/subtype.hpp"

Subtype::Subtype()
{
  this->name = "default_subtype";
}

Subtype::Subtype(std::string name)
{
  this->name = name;
}

Subtype amphibian = Subtype("amphibian");
Subtype ape = Subtype("ape");
Subtype climber = Subtype("climber");
Subtype bird = Subtype("bird");
Subtype bird_of_prey = Subtype("bird of prey");
Subtype burrower = Subtype("burrower");
Subtype canine = Subtype("canine");
Subtype crawler = Subtype("crawler");
Subtype demon_subtype = Subtype("demon"); //added subtype suffix to stop linker error
Subtype equine = Subtype("equine");
Subtype fairy = Subtype("fairy");
Subtype feline = Subtype("feline");
Subtype flyer = Subtype("flyer");
Subtype humanoid = Subtype("humanoid");
Subtype jumper = Subtype("jumper");
Subtype mammal = Subtype("mammal");
Subtype monster = Subtype("monster");
Subtype nocturnal = Subtype("nocturnal");
Subtype orcish = Subtype("orcish");
Subtype primate = Subtype("primate");
Subtype runner = Subtype("runner");
Subtype slime_subtype = Subtype("slime"); //added subtype suffix to stop linker error
Subtype spirit = Subtype("spirit");
Subtype swimmer = Subtype("swimmer");
Subtype vermin = Subtype("vermin");
Subtype wanderer = Subtype("wanderer");

std::map<std::string, Subtype*> subtype_map =
{
    {"amphibian", &amphibian},
    {"ape", &ape},
    {"climber", &climber},
    {"bird", &bird},
    {"bird of prey", &bird_of_prey},
    {"burrower", &burrower},
    {"canine", &canine},
    {"crawler", &crawler},
    {"demon", &demon_subtype},
    {"equine", &equine},
    {"fairy", &fairy},
    {"feline", &feline},
    {"flyer", &flyer},
    {"humanoid", &humanoid},
    {"jumper", &jumper},
    {"mammal", &mammal},
    {"monster", &monster},
    {"nocturnal", &nocturnal},
    {"orcish", &orcish},
    {"primate", &primate},
    {"runner", &runner},
    {"slime", &slime_subtype},
    {"spirit", &spirit},
    {"swimmer", &swimmer},
    {"vermin", &vermin},
    {"wanderer", &wanderer}
};
