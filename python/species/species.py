from species.species_quality import species_qualities
from stats import stats
from personality.trait import traits
import random

class Species:
    def __init__(self, name: str = "DEFAULT_SPECIES_NAME", base_stats = stats(), qualities: list = [], common_traits: list = [], can_tavern: bool = False):
        self.name = name

        self.base_stats = base_stats

        if len(qualities) > 0:
            self.qualities = [species_qualities[q] for q in qualities]
        else:
            self.qualities = [species_qualities["DEFAULT_QUALITY"]]

        if len(common_traits) > 0:
            self.common_traits = [traits[t] for t in common_traits]
        else:
            self.common_traits = [traits["DEFAULT_TRAIT"]]

        self.can_tavern = can_tavern

    def info(self):
        print("+|==|+ SPECIES INFO +|==|+")
        print("NAME: ", self.name)

        print("QUALITIES: ", end="")
        for i in self.qualities:
            print(i.name + ", ", end ="")
        print()

        print("BASE_STATS")
        self.base_stats.info()

        print("COMMON_TRAITS: ", end="")
        for i in self.common_traits:
            print(i.name + ", ", end="")
        print()

        print("CAN TAVERN?: ", self.can_tavern)
        print()

    def randomise_can_tavern(self, percentage):
        selector = random.randrange(0, 100)

        if selector + 1 <= percentage:
            self.can_tavern = True
        else:
            self.can_tavern = False

    def randomise_species_qualities(self, percentage):
        self.qualities = []

        for x in species_qualities.values():
            selector = random.randrange(1, 100)
            if selector + 1 <= percentage:
                self.qualities.append(x)

DEFAULT_SPECIES = Species(
)

aardvark = Species(
    name = "aardvark",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["burrower", "insect eater", "predator", "vermin", "runner"],
    common_traits = ["bashful", "glum"],
    can_tavern = True,
)

aardwolf = Species(
    name = "aardwolf",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["burrower", "canine", "insect eater", "predator", "vermin", "runner"],
    common_traits = ["adventurous", "egotistical"],
    can_tavern = False,
)

albatross = Species(
    name = "albatross",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bird", "bird of prey", "fish eater", "flyer", "predator", "wanderer"],
    common_traits = ["gallant", "egotistical"],
    can_tavern = False,
)

alligator = Species(
    name = "alligator",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = [ "man eater","meat eater", "monster", "predator", "reptile", "swimmer"],
    common_traits = ["surly", "selfish"],
    can_tavern = False,
)

anchovy = Species(
    name = "anchovy",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["finned", "fish", "swimmer"],
    common_traits = ["bashful", "charitable"],
    can_tavern = False,
)

angel = Species(
    name = "angel",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bipedal", "flyer", "spirit"],
    common_traits = ["gallant", "gregarious"],
    can_tavern = False,
)

ant = Species(
    name = "ant",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bug"],
    common_traits = ["adventurous"],
    can_tavern = False,
)

anteater = Species(
    name = "anteater",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["burrower", "insect eater", "predator", "monster", "vermin", "runner"],
    common_traits = ["bashful", "surly"],
    can_tavern = True,
)

demon = Species(
    name = "demon",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bipedal", "flyer", "monster", "predator", "soul eater"],
    common_traits = ["surly", "egotistical"],
    can_tavern = False,
)

dwarf = Species(
    name = "dwarf",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["ape", "bipedal", "burrower", "humanoid", "meat eater", "plant eater", "primate", "runner"],
    common_traits = ["adventurous", "eccentric"],
    can_tavern = True,
)

human = Species(
    name = "human",
 base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["ape", "bipedal", "fish eater", "humanoid", "meat eater", "plant eater", "predator", "primate", "runner", "wanderer"],
    common_traits = ["adventurous", "egotistical"],
    can_tavern = True,
)

orc = Species(
    name = "orc",
    base_stats = stats(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["ape", "bipedal", "fish eater", "humanoid", "man eater", "meat eater", "orcish", "predator", "primate", "runner"],
    common_traits = ["surly", "adventurous"],
    can_tavern = True,
)

species = {
    "DEFAULT_SPECIES": DEFAULT_SPECIES,
    "aardvark": aardvark,
    "aardwolf": aardwolf,
    "albatross": albatross,
    "alligator": alligator,
    "anchovy": anchovy,
    "angel": angel,
    "ant": ant,
    "anteater": anteater,
    "demon": demon,
    "dwarf": dwarf,
    "human": human,
    "orc": orc,
}
