from species.species_quality import species_qualities
from species.base_stat import Base_stat
from biome.biome import biomes
import random

class Species:
    def __init__(self, name: str = "DEFAULT_SPECIES_NAME", base_stats: Base_stat = Base_stat(), qualities: list = [], preferred_biomes: list = [], can_tavern: bool = False):
        self.name = name

        self.base_stats = base_stats

        if len(qualities) > 0:
            self.qualities = [species_qualities[q] for q in qualities]
        else:
            self.qualities = [species_qualities["DEFAULT_QUALITY"]]

        if len(preferred_biomes) > 0:
            self.preferred_biomes = [biomes[b] for b in preferred_biomes]
        else:
            self.preferred_biomes = [biomes["DEFAULT_BIOME"]]

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

        print("PREFERRED BIOMES: ", end="")
        for i in self.preferred_biomes:
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
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["burrower", "insect eater", "predator", "vermin", "runner"],
    preferred_biomes = ["desert", "savannah"],
    can_tavern = True,
)

aardwolf = Species(
    name = "aardwolf",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["burrower", "canine", "insect eater", "predator", "vermin", "runner"],
    preferred_biomes = ["savannah"],
    can_tavern = False,
)

albatross = Species(
    name = "albatross",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bird", "bird of prey", "fish eater", "flyer", "predator", "wanderer"],
    preferred_biomes = ["ocean"],
    can_tavern = False,
)

alligator = Species(
    name = "alligator",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = [ "man eater","meat eater", "monster", "predator", "reptile", "swimmer"],
    preferred_biomes = ["swamp", "river"],
    can_tavern = False,
)

anchovy = Species(
    name = "anchovy",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["finned", "fish", "swimmer"],
    preferred_biomes = ["ocean"],
    can_tavern = False,
)

angel = Species(
    name = "angel",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bipedal", "flyer", "spirit"],
    preferred_biomes = ["plains", "mountains"],
    can_tavern = False,
)

ant = Species(
    name = "ant",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bug"],
    preferred_biomes = ["hills", "plains"],
    can_tavern = False,
)

anteater = Species(
    name = "anteater",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["burrower", "insect eater", "predator", "monster", "vermin", "runner"],
    preferred_biomes = ["jungle"],
    can_tavern = True,
)

demon = Species(
    name = "demon",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["bipedal", "flyer", "monster", "predator", "soul eater"],
    preferred_biomes = ["volcano", "swamp", "bog"],
    can_tavern = False,
)

dwarf = Species(
    name = "dwarf",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["ape", "bipedal", "burrower", "humanoid", "meat eater", "plant eater", "primate", "runner"],
    preferred_biomes = ["mountains", "hills", "volcano"],
    can_tavern = True,
)

human = Species(
    name = "human",
 base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["ape", "bipedal", "fish eater", "humanoid", "meat eater", "plant eater", "predator", "primate", "runner", "wanderer"],
    preferred_biomes = ["plains"],
    can_tavern = True,
)

orc = Species(
    name = "orc",
    base_stats = Base_stat(
        hp = 123,
        attack = 25,
        defence = 25,
        special_attack = 25,
        special_defence = 25,
        speed = 25,
    ),
    qualities = ["ape", "bipedal", "fish eater", "humanoid", "man eater", "meat eater", "orcish", "predator", "primate", "runner"],
    preferred_biomes = ["mountains", "bog", "wasteland"],
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
