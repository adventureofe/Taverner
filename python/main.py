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

def battle(player, enemy, terrain, weather):
    print(player.name, "and", enemy.name, "start to battle")

    print("TERRAIN:", terrain.name)
    print("WEATHER:", weather.name)
    print()

    print(player.name, "sends in", player.creatures[0].title())
    print(enemy.name, "sends in", enemy.creatures[0].title())
    print()

    player_creature = player.creatures[0]
    enemy_creature = enemy.creatures[0]

    print("1. Attack")
    print("2. Switch")
    print("3. Info")
    print("4. Speak")

    action = int(input("Choose command: "))
    print()

    if action == 1:
        print(player_creature.name, "attacks", enemy_creature.name)
        print(player_creature.name , "does 10 damage to", enemy_creature.name)
        
        print(enemy_creature.name, "hp:", enemy_creature.current_stats.hp, "->", end=" ")
        enemy_creature.current_stats.hp = enemy_creature.current_stats.hp- 10
        print(enemy_creature.current_stats.hp)
    elif action == 2:
        print("switch")
    elif action == 3:
        print("1.", player_creature.title())
        print("2.", enemy_creature.title())
        print("3. battlefield")

        info = int(input("Choose info: "))
        print()
        if info == 1:
            player_creature.info()
        elif info == 2:
            enemy_creature.info()
        elif info == 3:
            print("TERRAIN:", terrain.name)
            print("WEATHER:", weather.name)
            print()
        else:
            print("invalid command")


    elif action == 4:
        print("speak")
    else:
        print("Invalid command")

def main():
    c = Creature("Bob", species["human"], elements["ice"], elements["plant"], abilities["photosynthesis"])

    d = Creature("Cormac", species["aardvark"], elements["alien"], elements["radiation"], abilities["chicanery"])

    p = Player(input("enter your name: "), [c])
    enemy = Player("Wizard George", [d])

    battle(p, enemy, weather["rain"], terrain["grass"])


if __name__ == "__main__":
    main()
