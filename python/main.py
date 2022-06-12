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

def main():
    c_moveset = [moves["poison sting"], moves["atomic punch" ]]
    c = Creature("Bob", species["human"], elements["ice"], elements["plant"], abilities["photosynthesis"], c_moveset)


    d_moveset = [moves["slap"], moves["shadow ball"]]
    d = Creature("Cormac", species["aardvark"], elements["alien"], elements["radiation"], abilities["chicanery"], d_moveset)


    p = Player(input("enter your name: "), [c])
    enemy = Player("Wizard George", [d])

    b = Battle(p, enemy, terrain["grass"], weather["rain"])
    b.battle()

if __name__ == "__main__":
    main()
