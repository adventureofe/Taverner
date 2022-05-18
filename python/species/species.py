from species.species_quality import species_qualities

class Species:
    def __init__(self, name: str = "DEFAULT_SPECIES_NAME", qualities = [], can_tavern: bool = False):
        self.name = name

        if len(qualities) > 0:
            self.qualities = [species_qualities[q] for q in qualities]
        else:
            self.qualities = [species_qualities["DEFAULT_QUALITY"]]

        self.can_tavern = can_tavern

    def info(self):
        print("SPECIES INFO")
        print("NAME: ", self.name)

        print("QUALITIES: ", end="")
        for i in self.qualities:
            print(i.name + ", ", end ="")
        print()
        print("CAN TAVERN?: ", self.can_tavern)
        print()

aardvark = Species(
    name = "aardvark",
    qualities = ["burrower", "insect eater", "predator", "vermin", "runner"],
    can_tavern = True,
)

aardwolf = Species(
    name = "aardwolf",
    qualities = ["burrower", "canine", "insect eater", "predator", "vermin", "runner"],
    can_tavern = False,
)

albatross = Species(
    name = "albatross",
    qualities = ["bird", "bird of prey", "fish eater", "flyer", "predator", "wanderer"],
    can_tavern = False,
)

alligator = Species(
    name = "alligator",
    qualities = [ "man eater","meat eater", "monster", "predator", "reptile", "swimmer"],
    can_tavern = False,
)

anchovy = Species(
    name = "anchovy",
    qualities = ["finned", "fish", "swimmer"],
    can_tavern = False,
)

angel = Species(
    name = "angel",
    qualities = ["bipedal", "flyer", "spirit"],
    can_tavern = False,
)

ant = Species(
    name = "ant",
    qualities = ["bug"],
    can_tavern = False,
)

anteater = Species(
    name = "anteater",
    qualities = ["burrower", "insect eater", "predator", "monster", "vermin", "runner"],
    can_tavern = True,
)

demon = Species(
    name = "demon",
    qualities = ["bipedal", "flyer", "monster", "predator", "soul eater"],
    can_tavern = False,
)

dwarf = Species(
    name = "dwarf",
    qualities = ["ape", "bipedal", "burrower", "humanoid", "meat eater", "plant eater", "primate", "runner"],
    can_tavern = True,
)

human = Species(
    name = "human",
    qualities = ["ape", "bipedal", "fish eater", "humanoid", "meat eater", "plant eater", "predator", "primate", "runner", "wanderer"],
    can_tavern = True,
)

orc = Species(
    name = "orc",
    qualities = ["ape", "bipedal", "fish eater", "humanoid", "man eater", "meat eater", "orcish", "predator", "primate", "runner"],
    can_tavern = True,
)

species = {
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
