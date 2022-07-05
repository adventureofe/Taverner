import json

sublist =  lambda input_list, key: [element[key] for element in input_list]
sublist_len =  lambda input_list, key: [len(element[key]) for element in input_list]
sublist_average = lambda input_list, key: [int((element[key][1] + element[key][0]) / 2) for element in input_list]

def plot_2_axis(list_x, list_y, list_y_name):
    plt.bar(list_x, list_y, label = list_y_name)
    plt.xticks(rotation=90)
    plt.legend()
    plt.show()

