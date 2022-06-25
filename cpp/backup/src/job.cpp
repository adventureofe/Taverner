/* taverner

By theadventureofe(John Gormley)

element source code

the_adventure_of_e λ */

#include <iostream>
#include <utility>
#include <string>
#include <vector>

#include "../headers/job.hpp"

Job::Job()
{
  this->name = "DEFAULT_JOB_NAME";
  this->name_plural = "DEFAULT_JOB_NAME_PLURAL";
}

Job::Job(std::string name, std::string name_plural)
{
  this->name = name;
  this->name_plural = name_plural;
}
void Job::print()
{
    std::cout << "(JOB-PRINT)\n";
    std::cout << "Name:( " << this->name << "\n";
    std::cout << "Name Plural:( " << this->name_plural<< "\n";
}


Job bard = Job(
    "bard",
    "bards"
);

Job mage = Job(
    "mage",
    "magi"
);

Job warrior = Job(
    "warrior",
    "warriors"
);

std::map<std::string, Job*> job_map = 
{
    {"bard", &bard},
    {"mage", &mage},
    {"warrior", &warrior}
};
