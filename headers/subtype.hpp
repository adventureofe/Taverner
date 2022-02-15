/* taverner

By theadventureofe(John Gormley)

element header file

the_adventure_of_e λ
*/

#pragma once

#include <utility>
#include <string>
#include <map>
#include <vector>

class Subtype
{
public:
  Subtype();
  Subtype(std::string name);
  void print();
  std::string name;
};

// main map for all subtypes
extern std::map<std::string, Subtype*> subtype_map;
