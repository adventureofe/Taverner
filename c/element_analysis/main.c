/* By theadventureofe(John Gormley)
   main file
   the_adventure_of_e λ */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>

#include<json-c/json.h>

// print all included cmd args (removes warning)
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

int main(int argc, char** argv){
  arg_print(argc, argv);
  printf("Hello, World!\n");

  FILE *fp = fopen("../json/element.json", "r"); //file pointer to open json
  char buffer[8192]; //buffer for json data

  fread(buffer, 8192, 1, fp); //put contents into buffer

  fclose(fp); ///close the pointer

  struct json_object *parsed_json;
  struct json_objeect *name;

  size_t n_elements;

  parsed_json = json_tokener_parse(buffer); //parse json files contents

  json_object_object_get_ex(parsed_json, "name", &name);//get value of key

  printf("%s\n", json_object_get_string(parsed_json));

  return EXIT_SUCCESS;
}
