import json
from matplotlib import pyplot as plt
from functools import reduce

# load json data
elements_json = open("../json/element.json")

# create a list of elements
elements_list = json.load(elements_json)["elements"]

# create dictionary of elements
elements = dict((x["name"], x) for x in elements_list)

# create sublist
sublist = lambda elements, key: [element[key] for element in elements.values()]

sublist_len = lambda elements, key: [len(element[key]) for element in elements.values()]

# sub-lists within the elements dictionary
elements_id = sublist(elements, "id")
elements_name = sublist(elements, "name")
elements_type = sublist(elements, "type")
elements_atk_weak = sublist(elements, "weak")
elements_atk_weak_len = sublist_len(elements, "weak")
elements_atk_strong = sublist(elements, "strong")
elements_atk_strong_len = sublist_len(elements, "strong")

elements_atk_rating = [a - b for a, b in zip(elements_atk_strong_len, elements_atk_weak_len)]

# get defence stats by cycling through other element attacks to see effectiveness
def get_def_list(elements, key, stat):
    answer = []

    for i in elements.values():
        for j in i[stat]:
            if j == key:
                answer.append(i["name"])

    return answer

#get what an element takes weak damage from
elements_def_strong = list(map(lambda x : get_def_list(elements, x, "weak"), elements))
elements_def_strong_len = list(map(lambda x : len(get_def_list(elements, x, "weak")), elements))

#get what an element takes strong damage from
elements_def_weak = list(map(lambda x : get_def_list(elements, x, "strong"), elements))
elements_def_weak_len = list(map(lambda x : len(get_def_list(elements, x, "strong")), elements))

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
    "def_weak": elements_def_weak,
    "def_weak_len": elements_def_weak_len,
    "def_strong": elements_def_strong,
    "def_strong_len": elements_def_strong_len,

    "atk_rating": elements_atk_rating,
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

def plot_2_axis(list_x, list_y, list_y_name):
    plt.plot(list_x, list_y, drawstyle = "steps", label = list_y_name, linewidth = 1.5)
    plt.legend()
    plt.show()

# plot_2_axis(elements_map["name"], elements_map["type"], "element_type")
