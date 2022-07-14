import json
from matplotlib import pyplot as plt
from functools import reduce
import pandas as pd
from analysis import *

# load json data
elements_json = open("../json/element.json")
elements = json.load(elements_json)

# sub-lists within the elements dictionary
elements_id = sublist(elements, "id")
elements_name = sublist(elements, "name")
elements_type = sublist(elements, "type")
elements_atk_weak = sublist(elements, "weak")
elements_atk_weak_len = sublist_len(elements, "weak")
elements_atk_strong = sublist(elements, "strong")
elements_atk_strong_len = sublist_len(elements, "strong")
elements_atk_rating = [a - b for a, b in zip(elements_atk_strong_len, elements_atk_weak_len)]

def def_sublist(key, input_list):
    answer = []
    key = elements_name.index(key)

    for i in elements_id:
        if elements_name[key] in input_list[i]:
            answer.append(elements_name[i])

    return answer

#get what an element has weak defence against
elements_def_weak = list(map(lambda x : def_sublist(x, elements_atk_strong), elements_name))
elements_def_weak_len = list(map(lambda x : len(def_sublist(x, elements_atk_strong)), elements_name))

#get what an element has strong defence against
elements_def_strong = list(map(lambda x : def_sublist(x, elements_atk_weak), elements_name))
elements_def_strong_len = list(map(lambda x : len(def_sublist(x, elements_atk_weak)), elements_name))

elements_def_rating = [a - b for a, b in zip(elements_def_strong_len, elements_def_weak_len)]

elements_total_rating = [a + b for a, b in zip(elements_atk_rating, elements_def_rating)]

#combine all data into hasmap/dictionary/key-value pairs
elements_map = {
    "id" : elements_id,
    "name": elements_name,
    "type": elements_type,

    "atk_weak": elements_atk_weak,
    "atk_weak_len": elements_atk_weak_len,
    "atk_strong": elements_atk_strong,
    "atk_strong_len": elements_atk_strong_len,
    "atk_rating": elements_atk_rating,

    "def_weak": elements_def_weak,
    "def_weak_len": elements_def_weak_len,
    "def_strong": elements_def_strong,
    "def_strong_len": elements_def_strong_len,
    "def_rating": elements_def_rating,

    "total_rating": elements_total_rating
}

# print map entry
def element_print(elements_map, key):
    emap = elements_map

    if type(key) == str:
        key = emap["name"].index(key)

    print("==(ELEMENT-INFO)==")
    print("id:", emap["id"][key])
    print("name:", emap["name"][key], end = "\n\n")

    print("STRONG atk against:", emap["atk_strong_len"][key],  emap["atk_strong"][key])
    print("WEAK atk against:", emap["atk_weak_len"][key], emap["atk_weak"][key])
    print("atk rating:", emap["atk_rating"][key], end = "\n\n")

    print("STRONG def against:", emap["def_strong_len"][key], emap["def_strong"][key])
    print("WEAK def against:", emap["def_weak_len"][key], emap["def_weak"][key])
    print("def rating:", emap["def_rating"][key], end = "\n\n")

    print("total rating:", emap["total_rating"][key], end = "\n\n")


element_print(elements_map, "fire")
plot_2_axis(elements_map["name"], elements_map["def_strong_len"], "element_type")
