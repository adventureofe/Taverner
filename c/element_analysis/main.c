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

    FILE *fp = fopen("../../json/element.json", "r"); //file pointer to open json
    char buffer[16384]; //buffer for json data

    fread(buffer, 8192, 1, fp); //put contents into buffer

    //fclose(fp); ///close the pointer

    struct json_object *parsed_json;

    struct json_object *id;
    struct json_object *name;
    struct json_object *type;
    struct json_object *weak;
    struct json_object *weak_buffer;
    struct json_object *strong;
    struct json_object *strong_buffer;
    struct json_object *colour;
    struct json_object *hex;
    struct json_object *rgb;

    struct json_object *test;

    char* test_element = "mutation";

    parsed_json = json_tokener_parse(buffer); //parse json files contents

    json_object_object_get_ex(parsed_json, test_element, &test);//get value of key

    json_object_object_get_ex(test, "id", &id);
    json_object_object_get_ex(test, "name", &name);
    json_object_object_get_ex(test, "type", &type);
    json_object_object_get_ex(test, "weak", &weak);
    json_object_object_get_ex(test, "strong", &strong);
    json_object_object_get_ex(test, "colour", &colour);
    json_object_object_get_ex(test, "hex", &hex);
    json_object_object_get_ex(test, "rgb", &rgb);

    printf("==========(ELEMENT-INFO)==========\n");
    printf("ID: %d\n", json_object_get_int(id));
    printf("NAME: %s\n", json_object_get_string(name));
    printf("TYPE: %s\n\n", json_object_get_string(type));

    printf("=(WEAK ATTACKS)=\n");
    for(size_t i = 0; i < json_object_array_length(weak); i++)
    {
      weak_buffer = json_object_array_get_idx(weak, i);
      printf("%lu: %s\n", i+1, json_object_get_string(weak_buffer));
    }
    printf("\n");

    printf("=(STRONG ATTACKS)=\n");
    for(size_t i = 0; i < json_object_array_length(strong); i++)
    {
      strong_buffer = json_object_array_get_idx(strong, i);
      printf("%lu: %s\n", i+1, json_object_get_string(strong_buffer));
    }

    printf("\n");

    return EXIT_SUCCESS;
}
