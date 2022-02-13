/* taverner

By theadventureofe(John Gormley)

species source code

the_adventure_of_e λ
*/

#include <utility>

#include "../headers/species.hpp"


Species::Species(Weight weights, Length lengths, std::vector<std::string> subtypes, Nouns nouns) 
{
  weight = {{"min", weights.min}, {"max", weights.max}};
  length = {{"min", lengths.min}, {"max", lengths.max}};
  subtype = subtypes;
  
  noun = {
    {"generic", nouns.generic}, {"generic_plural", nouns.generic_plural}, 
    {"male", nouns.male}, {"male_plural", nouns.male_plural}, 
    {"female", nouns.female}, {"female_plural", nouns.female_plural},
    {"child", nouns.child}, {"child_plural", nouns.child_plural},
    {"collective", nouns.collective}, {"collective_plural", nouns.collective_plural}
  }; 
}
