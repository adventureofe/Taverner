import json
from functools import reduce
element_json = open('../json/element.json')

element_data = json.load(element_json)["elements"]
#print(element_data)

element_names = lambda element_data : list(map(lambda x :x["name"], element_data))
#print(element_names(element_data))

element_stats_atk = lambda element_data, index: list(map(lambda x : x, element_data[index].values()))[1:]
#print(element_stats_atk(element_data, 18))

element_stats_def = lambda element_data, index: list(map(lambda x: x[element_names(element_data)[index]], element_data))



def get_element(name):
    return list(filter(lambda x: x["name"] == name, element_data))
# print(get_element("alien"))


def print_stat(stat_string, stat_list):
    print("\t(" + stat_string.upper() + "):", end = " ")
    print(stat_list, end = " ")
    print("(" + str(len(stat_list)) + ")")


def print_element_atk(element_data, index):
    
    names = element_names(element_data)
    stats = element_stats_atk(element_data, index)
    
    strong_stats = []
    neutral_stats = []
    weak_stats = []
    error_stats = []

    for i in range(0, len(stats)):
        if stats[i] == 'strong':
            strong_stats.append(names[i])
        elif stats[i] == 'neutral':
            neutral_stats.append(names[i])
        elif stats[i] == 'weak':
            weak_stats.append(names[i])
        else:
            error_stats.append(names[i])
    
    stat_total = len(strong_stats) + len(neutral_stats) + len(weak_stats)

    print("(ATTACKING)")
    print_stat("strong", strong_stats)
    print_stat("netural", neutral_stats)
    print_stat("weak", weak_stats)
    print("\t(TOTAL): (" + str(stat_total) + ")", end = " ") 
    print_stat("error", error_stats)

def print_element_def(element_data, index):

    names = element_names(element_data)
    stats = element_stats_def(element_data, index)

    resists_stats = []
    neutral_stats = []
    weak_to_stats = []
    error_stats = []

    for i in range(0, len(stats)):
        if stats[i] == 'weak':
            resists_stats.append(names[i])
        elif stats[i] == 'neutral':
            neutral_stats.append(names[i])
        elif stats[i] == 'strong':
            weak_to_stats.append(names[i])
        else:
            error_stats.append(names[i])

    stat_total = len(resists_stats) + len(neutral_stats) + len(weak_to_stats)
    
    print("(DEFENDING)")
    print_stat("resists", resists_stats)
    print_stat("netural", neutral_stats)
    print_stat("weak_to", weak_to_stats)
    print("\t(TOTAL): (" + str(stat_total) + ")", end = " ") 
    print_stat("error", error_stats)




def print_element_stats(element_data, index):
    print("(" + str(index) + ")" + "(NAME) " + element_data[index]["name"])
    print_element_atk(element_data, index)
    print_element_def(element_data, index)
    print()

for i in range(0, len(element_data)):
    print_element_stats(element_data, i)

