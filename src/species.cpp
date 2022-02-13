/* taverner

By theadventureofe(John Gormley)

species source code

the_adventure_of_e λ
*/

#include <utility>

#include "../headers/species.hpp"


Species::Species(Weight weight, Length length, std::vector<std::string> subtypes, Nouns nouns) 
{
  this->weight = {{"min", weight.min}, {"max", weight.max}};
  this->length = {{"min", length.min}, {"max", length.max}};
  this->subtypes = subtypes;
  
  this->noun = {
    {"generic", nouns.generic}, {"generic_plural", nouns.generic_plural}, 
    {"male", nouns.male}, {"male_plural", nouns.male_plural}, 
    {"female", nouns.female}, {"female_plural", nouns.female_plural},
    {"child", nouns.child}, {"child_plural", nouns.child_plural},
    {"collective", nouns.collective}, {"collective_plural", nouns.collective_plural}
  }; 
}
