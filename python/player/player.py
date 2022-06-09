from creature.creature import Creature

class Player:
    def __init__(self, name: str = "DEFAULT_PLAYER_NAME", creatures = []):
        self.name = name
        self.creatures = creatures

    def info(self):
        print("+|==|+ PLAYER INFO +|==|+")
        print("NAME:", self.name)

        print("Creatures")
        for i in self.creatures:
            print("\t", i.title())

    def change_name(self):
        self.name = input("please enter your name: ")
