from element.element import elements
from species.species import species

class Creature:
    def __init__(self, name: str = "DFEAULT_CREATURE_NAME", species = species["DEFAULT_SPECIES"], element_1 = elements["DEFAULT_ELEMENT"], element_2 = elements["DEFAULT_ELEMENT"]):
        self.name = name
        self.species = species
        self.element_1 = element_1
        self.element_2 = element_2

    def info(self):
        print("+|==|+ CREATURE INFO +|==|+")
        print("NAME:", self.name)
        print("SPECIES:", self.species.name)

        if self.element_1 == self.element_2:
            print("ELEMENT:", self.element_1.name)
        else:
            print("ELEMENT_1:", self.element_1.name)
            print("ELEMENT_2:", self.element_2.name)
        print("FULL_NAME:", self.title())
        print()

    def title(self):
        if self.element_1 == self.element_2:
            return self.name + " the " + self.element_1.name + " " + self.species.name
        else:
            return self.name + " the " + self.element_1.name + " " + self.element_2.name + " " + self.species.name

