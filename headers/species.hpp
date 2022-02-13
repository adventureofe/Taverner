/* taverner

By theadventureofe(John Gormley)

species header file

the_adventure_of_e λ
*/

#include <utility>
#include <string>
#include <map>
#include <vector>

struct Weight
{
  int min;
  int max;
};

struct Length
{
  int min;
  int max;
};

struct Nouns
{
  std::vector<std::string> generic;
  std::vector<std::string> generic_plural;
  std::vector<std::string> male;
  std::vector<std::string> male_plural;
  std::vector<std::string> female;
  std::vector<std::string> female_plural;  
  std::vector<std::string> child;
  std::vector<std::string> child_plural;
  std::vector<std::string> collective;
  std::vector<std::string> collective_plural;
};

class Species 
{
  public:
  Species(Weight weights, Length lengths, std::vector<std::string> subtypes, Nouns nouns);
  Species();

  std::map <std::string, int> weight;
  std::map <std::string, int> length;
  std::vector<std::string> subtype;
  std::map <std::string, std::vector<std::string>> noun;
};
