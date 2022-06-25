/* taverner

By theadventureofe(John Gormley)

species header file

each creature will have 1 species
each creature will have 1-2 elements

the_adventure_of_e λ */

#pragma once


#include <utility>
#include <string>
#include <map>
#include <vector>

#include "element.hpp"
#include "species.hpp"

class Job
{
  public:
  std::string name;
  std::string name_plural;
  Job();
  Job(std::string name, std::string name_plural);

  void print();
};

extern std::map<std::string, Job*> job_map;
