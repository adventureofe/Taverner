from element import elements
import random


def menu_main():
    print("MAIN MENU: Choose Command")
    print("1. Print all elements")
    print("2. Element types")
    print("3. Analyse (Element)")
    print("4. Analyse all elements")
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

def analyse_all():
    for i in elements.values():
        print()
        strong_atk = 0
        weak_atk = 0
        print(i.name + " STATS")

        for j in i.strong:
            strong_atk += 1

        for j in i.weak:
            weak_atk += 1

        print("STRONG ATK(" + str(strong_atk) + ")", end = " ")
        print("WEAK ATK(" + str(weak_atk) + ")", end = " ")
        print("RATING(" + str((strong_atk - weak_atk)) + ")")

        strong_def = 0
        weak_def = 0

        for j in elements.values():
            for k in j.strong:
                if k == i.name:
                    weak_def += 1

            for l in j.weak:
                if l == i.name:
                    strong_def += 1

        print("STRONG DEF(" + str(strong_def) + ")", end = " ")
        print("WEAK DEF(" + str(weak_def) + ")", end = " ")
        print("RATING(" + str((strong_def - weak_def)) + ")")

        print("TOTAL RATING(" +  str((strong_atk - weak_atk) + (strong_def - weak_def)) + ")")



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

    elif menu_command == 4:
        analyse_all()

if __name__ == "__main__":
    main()
