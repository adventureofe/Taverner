from biome import biomes
import random

def print_list(name, input_list):
    print(name + ": " + str(len(input_list)))
    for i in input_list:
        print(i.name)
    print()

def count_temperatures():
    very_cold = []
    cold = []
    temperate = []
    hot = []
    very_hot = []
    unknown = []

    for i in biomes.values():
        if i.temperature == "very cold":
            very_cold.append(i)
        elif i.temperature == "cold":
            cold.append(i)
        elif i.temperature == "temperate":
            temperate.append(i)
        elif i.temperature == "hot":
            hot.append(i)
        elif i.temperature == "very hot":
            very_hot.append(i)
        else:
            unknown.append(i)

    print_list("VERY COLD", very_cold)
    print_list("COLD", cold)
    print_list("TEMPERATE", temperate)
    print_list("HOT", hot)
    print_list("VERY HOT", very_hot)
    print_list("UNKNOWN", unknown)

def main():
    count_temperatures()

if __name__ == "__main__":
    main()
