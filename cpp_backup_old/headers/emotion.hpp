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

class emotion
{
  public:
  std::string name;
  std::map <std::string, std::vector<std::string> noun;
  std::map <std::string, std::vector<std::string> adjective;
}
