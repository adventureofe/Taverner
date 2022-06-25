from move import moves
import random

def print_list(name, input_list):
    print(name + ": " + str(len(input_list)))
    for i in input_list:
        print(i.name)
    print()

def count_types():
    physical = []
    special = []
    unknown = []

    for i in moves.values():
        if i.move_type == "physical":
            physical.append(i)
        elif i.move_type == "special":
            special.append(i)
        else:
            unknown.append(i)

    print_list("PHYSICAL", physical)
    print_list("SPECIAL", special)
    print_list("UNKNOWN", unknown)

def main():
    print("hello world")
    count_types()

if __name__ == "__main__":
    main()
