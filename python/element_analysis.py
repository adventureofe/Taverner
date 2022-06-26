import json
from matplotlib import pyplot as plt

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
print(elements_atk_rating)

#get what an element takes weak damage from
def strong_def(elements, key):
    answer = []

    for i in elements.values():
        for j in i["weak"]:
            if j == key:
                answer.append(i["name"])

    return answer

elements_def_strong = list(map(lambda x : strong_def(elements, x), elements))
elements_def_strong_len = list(map(lambda x : len(strong_def(elements, x)), elements))

#get what an element takes strong damage from
def weak_def(elements, key):
    answer = []

    for i in elements.values():
        for j in i["strong"]:
            if j == key:
                answer.append(i["name"])

    return answer

elements_def_weak = list(map(lambda x : weak_def(elements, x), elements))
elements_def_weak_len = list(map(lambda x : len(weak_def(elements, x)), elements))

elements_def_rating = [a - b for a, b in zip(elements_def_strong_len, elements_def_weak_len)]

elements_total_rating = [a + b for a, b in zip(elements_atk_rating, elements_def_rating)]


# print map entry
def element_print(elements, key):
    element = elements[key]

    atk_rating = len(element["strong"]) - len(element["weak"])

    def_weak = weak_def(elements, key)
    def_strong = strong_def(elements, key)
    def_rating = len(def_strong) - len(def_weak)

    print("==(ELEMENT-INFO)==")
    print("id: " + str(element["id"]))
    print("name: " + str(element["name"]), end = "\n\n")

    print("(" + str(len(element["strong"])) + ") STRONG atk against: " + str(element["strong"]))
    print("(" + str(len(element["weak"])) + ") WEAK atk against: " + str(element["weak"]))
    print("atk rating: " + str(atk_rating), end = "\n\n")

    print("(" + str(len(def_strong)) + ") STRONG def against: " + str(def_strong))
    print("(" + str(len(def_weak)) + ") WEAK def against: " + str(def_weak))
    print("def rating: " + str(def_rating), end = "\n\n")

    print("total rating: " + str(atk_rating + def_rating), end = "\n\n")

element_print(elements, "air")

plt.plot(elements_name, elements_atk_rating, drawstyle = "steps", label = "atk rating", linewidth = 1.5)
plt.plot(elements_name, elements_def_rating, drawstyle = "steps", label = "def rating", linewidth = 1.5)
plt.plot(elements_name, elements_total_rating, drawstyle = "steps", label = "total rating", linewidth = 3.0)

plt.legend()
plt.show()
