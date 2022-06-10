from battle.battle import Battle
from creature.creature import Creature
from creature.ability import abilities
from creature.battle import battle
from element.element import elements
from move.move import moves
from personality.trait import traits
from player.player import Player
from species.species import species
from species.species_quality import species_qualities

from weather.weather import weather
from terrain.terrain import terrain
import random

def choose_random_word(words_list):
    selector = random.randrange(0, len(words_list))
    return words_list[selector]

def battle(input_battle):
    input_battle.battle_start()
    input_battle.info()

    while True:
        command = input_battle.battle_menu()

        if command == 1:
            print("attack")
        elif command == 2:
            print("switch")
        elif command == 3:
            command = input_battle.info_menu()

            if command == 1:
                command = input_battle.creature_menu()
                if command == 1:
                    input_battle.player_creature.info()
                elif command == 2:
                    input_battle.player_creature.current_stats.info()
                else:
                    print("invalid command")
            elif command  == 2:
                command = input_battle.creature_menu()

                if command == 1:
                    input_battle.enemy_creature.info()
                elif command == 2:
                    input_battle.enemy_creature.current_stats.info()
                else:
                    print("invalid command")

            elif command == 3:
                input_battle.info()
            else:
                print("invalid command")

        elif command == 4:
            print("speak")
        elif command == 0:
            return 0
        else:
            print("Invalid command")

def main():
    c = Creature("Bob", species["human"], elements["ice"], elements["plant"], abilities["photosynthesis"])

    d = Creature("Cormac", species["aardvark"], elements["alien"], elements["radiation"], abilities["chicanery"])

    p = Player(input("enter your name: "), [c])
    enemy = Player("Wizard George", [d])

    b = Battle(p, enemy, terrain["grass"], weather["rain"])
    battle(b)

if __name__ == "__main__":
    main()
