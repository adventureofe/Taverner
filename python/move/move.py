import random

# add higher directory to load path
import sys
sys.path.append("..")

from element.element import elements

class Move:
    def __init__(self, name: str = "DEFAULT_MOVE_NAME", description: str = "DFEAULT_MOVE_DESCRIPTION", move_type = "DEFAULT_MOVE_TYPE", element = elements["DEFAULT_ELEMENT"]):
        self.name = name
        self.description = description
        self.move_type = move_type
        self.element = element

    def info(self):
        print("+|==|+ MOVE INFO +|==|+")
        print("NAME: ", self.name)
        print("DESCRIPTION: ", self.description)
        print("MOVE_TYPE: ", self.move_type)
        print("Element: ", self.element.name)
        print()

DEFAULT_MOVE = Move(
)

gust = Move(
    name = "gust",
    description = "target is stricken by ferocious, cutting winds",
    move_type = "special",
    element = elements["air"]
)

swoop = Move(
    name = "swoop",
    description = "target is struck by piercing claws from above",
    move_type = "special",
    element = elements["air"]
)

fire_ball = Move(
    name = "fire ball",
    description = "target is struck with a scorching orb of flame",
    move_type = "special",
    element = elements["fire"]
)

fire_punch = Move(
    name = "fire punch",
    description = "target is struck by a scorching, fiery fist",
    move_type = "physical",
    element = elements["ice"]
)

ice_ball = Move(
    name = "ice ball",
    description = "target is struck with a orb of bitter cold",
    move_type = "special",
    element = elements["ice"]
)

ice_punch = Move(
    name = "ice punch",
    description = "target is struck by a bitter cold fist",
    move_type = "physical",
    element = elements["ice"]
)

stalictite = Move(
    name = "stalictite",
    description = "target is struck by a pointed, falling rock",
    move_type = "special",
    element = elements["earth"]
)

rock_punch = Move(
    name = "rock punch",
    description = "target is smacked by a punch of rock",
    move_type = "physical",
    element = elements["earth"]
)

lightning_bolt = Move(
    name = "lightning bolt",
    description = "target is fried by a shocking bolt of lightning",
    move_type = "special",
    element = elements["electricity"]
)

thunder_punch = Move(
    name = "thunder punch",
    description = "target is smacked by an electrified fist",
    move_type = "physical",
    element = elements["electricity"]
)

back_stab = Move(
    name = "back stab",
    description = "target is underhandedly stabbed from behind",
    move_type = "physical",
    element = elements["evil"]
)

shadow_ball = Move(
    name = "shadow ball",
    description = "target is struck by an orb of darkness",
    move_type = "special",
    element = elements["evil"]
)

bullet = Move(
    name = "bullet",
    description = "target is shot with a fast, metal projectile",
    move_type = "special",
    element = elements["metal"]
)

metal_punch = Move(
    name = "metal punch",
    description = "target is smacked by a steel fist",
    move_type = "physical",
    element = elements["metal"],
)

slap = Move(
    name = "slap",
    description = "target is smacked upside the chops with a heavy, open hand",
    move_type = "physical",
    element = elements["normal"]
)

sonic_boom = Move(
    name = "sonic boom",
    description = "target is struck by a boom of sound waves",
    move_type = "special",
    element = elements["normal"]
)

vine_whip = Move(
    name = "vine whip",
    description = "target is whipped savagely with vines",
    move_type = "physical",
    element = elements["plant"]
)

leaf_ball = Move(
    name = "leaf ball",
    description = "target is by a forceful orb of cutting leaves",
    move_type = "special",
    element = elements["plant"]
)


poison_sting = Move(
    name = "poison sting",
    description = "target is stabbed by a poisonous barb",
    move_type = "physical",
    element = elements["poison"],
)

acid_ball = Move(
    name = "acid ball",
    description = "target is struck by a ball of acid",
    move_type = "special",
    element = elements["poison"],
)

atomic_blast = Move(
    name = "atomic blast",
    description = "target is struck by the splitting atoms",
    move_type = "special",
    element = elements["radiation"],
)

atomic_punch = Move(
    name = "atomic blast",
    description = "target is smashed by an atom splitting punch",
    move_type = "physical",
    element = elements["radiation"],
)

cannibalise = Move(
    name = "cannibalise",
    description = "target's flesh is eaten alive",
    move_type = "physical",
    element = elements["undead"],
)

blood_ball = Move(
    name = "blood ball",
    description = "target is struck by an orb of sickly blood",
    move_type = "special",
    element = elements["undead"],
)

water_ball= Move(
    name = "water ball",
    description = "target is struck by an forceful orb of water",
    move_type = "special",
    element = elements["water"],
)

water_jet = Move(
    name = "water jet",
    description = "target is soaked by a high pressured water jet",
    move_type = "special",
    element = elements["water"],
)

water_punch = Move(
    name = "water punch",
    description = "target is smacked by a watery punch",
    move_type = "physical",
    element = elements["water"],
)

moves = {
    "DEAFAULT_MOVE": DEFAULT_MOVE,

    "gust": gust,
    "swoop": swoop,

    "fire ball": fire_ball,
    "fire punch": fire_punch,

    "ice ball": ice_ball,
    "ice_punch": ice_punch,

    "stalictite": stalictite,
    "rock punch": rock_punch,

    "ligtning bolt": lightning_bolt,
    "thunder punch": thunder_punch,

    "back stab": back_stab,
    "shadow ball": shadow_ball,

    "bullet": bullet,
    "metal_punch": metal_punch,

    "slap": slap,
    "sonic boom": sonic_boom,

    "vine whip": vine_whip,
    "leaf ball": leaf_ball,

    "poison sting": poison_sting,
    "acid ball": acid_ball,

    "atomic blast": atomic_blast,
    "atomic_punch": atomic_punch,
    "cannibalise": cannibalise,
    "blood ball": blood_ball,

    "water ball": water_ball,
    "water_jet": water_jet,
    "water_punch": water_punch,
}
