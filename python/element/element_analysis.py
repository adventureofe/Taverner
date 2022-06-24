from element import elements
import random


def menu_main():
    print("MAIN MENU: Choose Command")
    print("1. Print all elements")
    print("2. Element types")
    print("3. Analyse (Element)")
    answer = int(input(": "))
    print()
    return answer

def print_list(name, input_list):
    print(name + ": " + str(len(input_list)))
    for i in input_list:
        print(i.name)
    print()

def count_types():
    physical = []
    special = []
    unknown = []

    for i in elements.values():
        if i.element_type == "physical":
            physical.append(i)
        elif i.element_type == "special":
            special.append(i)
        else:
            unknown.append(i)

    print_list("PHYSICAL", physical)
    print_list("SPECIAL", special)
    print_list("UNKNOWN", unknown)


def analyse_element():
    print("enter element name")
    answer = input(": ")
    print()

    counter = 0
    print(answer + " DOES STRONG DAMAGE AGAINST")
    for i in elements[answer].strong:
        counter += 1
        print(str(counter) + ": "  + i)

    print()
    counter = 0
    print(answer + " DOES WEAK DAMAGE AGAINST")
    for i in elements[answer].weak:
        counter += 1
        print(str(counter) + ": " + i)

    print()
    counter = 0
    print("ATTACKS STRONG AGAINST " + answer)
    for i in elements.values():
        for j in i.strong:
            if j == answer:
                counter += 1
                print(str(counter) + ": " + i.name)

    print()
    counter = 0
    print("ATTACKS WEAK AGAINST " + answer)
    for i in elements.values():
        for j in i.weak:
            if j == answer:
                counter += 1
                print(str(counter) + ": " + i.name)


def main():
    menu_command = menu_main()

    if menu_command == 1:
        for i in elements.values():
            print(i.name)

    elif menu_command == 2:
        count_types()

    elif menu_command == 3:
        analyse_element()

if __name__ == "__main__":
    main()
