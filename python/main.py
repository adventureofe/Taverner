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

def main():
    c_moveset = [moves["poison sting"], moves["atomic punch" ]]
    c = Creature(
        name = "Bob",
        species = species["human"],
        element_1 = elements["ice"],
        element_2  =elements["plant"],
        ability = abilities["photosynthesis"],
        moveset = c_moveset)

    d_moveset = [moves["slap"], moves["shadow ball"]]
    d = Creature(
        name = "Cormac",
        species = species["aardvark"],
        element_1 = elements["alien"],
        element_2 = elements["radiation"],
        ability = abilities["chicanery"],
        moveset = d_moveset)

    p = Player(input("enter your name: "), [c])
    enemy = Player("Wizard George", [d])


    print(p.creatures[0].name)

    b = Battle(p, enemy, terrain["grass"], weather["rain"])
    #b.battle()

    p.creatures[0].moveset[0].calc_damage(b)

if __name__ == "__main__":
    main()
