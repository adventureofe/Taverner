import json
from matplotlib import pyplot as plt
from functools import reduce
from analysis import *

# load json data
species_json = open("../json/species.json")
species = json.load(species_json)["species"]

# sub-lists within the species dictionary
species_id = sublist(species, "id")
species_name = sublist(species, "name")
species_weight = sublist(species, "weight")
species_weight_average = sublist_average(species, "weight")
species_length = sublist(species, "length")
species_length_average = sublist_average(species, "length")

#combine all data into hashmap/dictionary/key-value pairs
species_map = {
    "id" : species_id,
    "name": species_name,
    "weight": species_weight,
    "weight_average": species_weight_average,
    "length": species_length,
    "length_average": species_length_average,
}

# print map entry
def species_print(species_map, key):
    smap = species_map

    if type(key) == str:
        key = smap["name"].index(key)

    print("==(SPECIES-INFO)==")
    print("id:", smap["id"][key])
    print("name:", smap["name"][key], end = "\n\n")
    print("weight:", smap["weight"][key])
    print("weight_average:", smap["weight_average"][key])
    print("length:", smap["length"][key])
    print("length_average:", smap["length_average"][key])

species_print(species_map, "dwarf")
species_print(species_map, "elephant")
