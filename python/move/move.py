import random

# add higher directory to load path
import sys
sys.path.append("..")

from element.element import elements

class Move:
    def __init__(self, name: str = "DEFAULT_MOVE_NAME", description: str = "DFEAULT_MOVE_DESCRIPTION", move_type = "DEFAULT_MOVE_TYPE", element = elements["DEFAULT_ELEMENT"], base_power: int = 5):
        self.name = name
        self.description = description
        self.move_type = move_type
        self.element = element
        self.base_power = base_power

    def info(self):
        print("+|==|+ MOVE INFO +|==|+")
        print("NAME: ", self.name)
        print("DESCRIPTION: ", self.description)
        print("MOVE_TYPE: ", self.move_type)
        print("ELEMENT: ", self.element.name)
        print("BASE_POWER: ", self.base_power)
        print()

DEFAULT_MOVE = Move(
)

gust = Move(
    name = "gust",
    description = "target is stricken by ferocious, cutting winds",
    move_type = "special",
    element = elements["air"],
    base_power = 5,
)

swoop = Move(
    name = "swoop",
    description = "target is struck by piercing claws from above",
    move_type = "special",
    element = elements["air"],
    base_power = 5,
)

fire_ball = Move(
    name = "fire ball",
    description = "target is struck with a scorching orb of flame",
    move_type = "special",
    element = elements["fire"],
    base_power = 5,
)

fire_punch = Move(
    name = "fire punch",
    description = "target is struck by a scorching, fiery fist",
    move_type = "physical",
    element = elements["ice"],
    base_power = 5,
)

ice_ball = Move(
    name = "ice ball",
    description = "target is struck with a orb of bitter cold",
    move_type = "special",
    element = elements["ice"],
    base_power = 5,
)

ice_punch = Move(
    name = "ice punch",
    description = "target is struck by a bitter cold fist",
    move_type = "physical",
    element = elements["ice"],
    base_power = 5,
)

stalictite = Move(
    name = "stalictite",
    description = "target is struck by a pointed, falling rock",
    move_type = "special",
    element = elements["earth"],
    base_power = 5,
)

rock_punch = Move(
    name = "rock punch",
    description = "target is smacked by a punch of rock",
    move_type = "physical",
    element = elements["earth"],
    base_power = 5,
)

lightning_bolt = Move(
    name = "lightning bolt",
    description = "target is fried by a shocking bolt of lightning",
    move_type = "special",
    element = elements["electricity"],
    base_power = 5,
)

thunder_punch = Move(
    name = "thunder punch",
    description = "target is smacked by an electrified fist",
    move_type = "physical",
    element = elements["electricity"],
    base_power = 5,
)

back_stab = Move(
    name = "back stab",
    description = "target is underhandedly stabbed from behind",
    move_type = "physical",
    element = elements["evil"],
    base_power = 5,
)

shadow_ball = Move(
    name = "shadow ball",
    description = "target is struck by an orb of darkness",
    move_type = "special",
    element = elements["evil"],
    base_power = 5,
)

bullet = Move(
    name = "bullet",
    description = "target is shot with a fast, metal projectile",
    move_type = "special",
    element = elements["metal"],
    base_power = 5,
)

metal_punch = Move(
    name = "metal punch",
    description = "target is smacked by a steel fist",
    move_type = "physical",
    element = elements["metal"],
    base_power = 5,
)

slap = Move(
    name = "slap",
    description = "target is smacked upside the chops with a heavy, open hand",
    move_type = "physical",
    element = elements["normal"],
    base_power = 5,
)

sonic_boom = Move(
    name = "sonic boom",
    description = "target is struck by a boom of sound waves",
    move_type = "special",
    element = elements["normal"],
    base_power = 5,
)

vine_whip = Move(
    name = "vine whip",
    description = "target is whipped savagely with vines",
    move_type = "physical",
    element = elements["plant"],
    base_power = 5,
)

leaf_ball = Move(
    name = "leaf ball",
    description = "target is by a forceful orb of cutting leaves",
    move_type = "special",
    element = elements["plant"],
    base_power = 5,
)


poison_sting = Move(
    name = "poison sting",
    description = "target is stabbed by a poisonous barb",
    move_type = "physical",
    element = elements["poison"],
    base_power = 5,
)

acid_ball = Move(
    name = "acid ball",
    description = "target is struck by a ball of acid",
    move_type = "special",
    element = elements["poison"],
    base_power = 5,
)

atomic_blast = Move(
    name = "atomic blast",
    description = "target is struck by the splitting atoms",
    move_type = "special",
    element = elements["radiation"],
    base_power = 5,
)

atomic_punch = Move(
    name = "atomic blast",
    description = "target is smashed by an atom splitting punch",
    move_type = "physical",
    element = elements["radiation"],
    base_power = 5,
)

cannibalise = Move(
    name = "cannibalise",
    description = "target's flesh is eaten alive",
    move_type = "physical",
    element = elements["undead"],
    base_power = 5,
)

blood_ball = Move(
    name = "blood ball",
    description = "target is struck by an orb of sickly blood",
    move_type = "special",
    element = elements["undead"],
    base_power = 5,
)

water_ball= Move(
    name = "water ball",
    description = "target is struck by an forceful orb of water",
    move_type = "special",
    element = elements["water"],
    base_power = 5,
)

water_jet = Move(
    name = "water jet",
    description = "target is soaked by a high pressured water jet",
    move_type = "special",
    element = elements["water"],
    base_power = 5,
)

water_punch = Move(
    name = "water punch",
    description = "target is smacked by a watery punch",
    move_type = "physical",
    element = elements["water"],
    base_power = 5,
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
