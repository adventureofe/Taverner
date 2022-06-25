class Ability:
    def __init__(self, name: str = "DEFAULT_ABILITY_NAME", description: str = "DFEAULT_ABILITY_DESCRIPTION"):
        self.name = name
        self.description = description

        def info(self):
            print("+|==|+ ABILITY INFO +|==|+")
            print("NAME: ", self.name)
            print("DESCRIPTION", self.description)

DEFAULT_ABILITY = Ability(
)

blaze = Ability(
    name = "blaze",
    description = "boosts fire type moves by 50% if user has less than 1/3 of it's maximum hp",
)

photosynthesis = Ability(
    name = "photosynthesis",
    description = "user regenerates 1/16th maximum hp in hot biomes",
)

chicanery = Ability(
    name = "chicanery",
    description = "boosts evil type moves by 50% if opponent has a charitable personality trait",
)

abilities = {
    "DEFAULT_ABILITY": DEFAULT_ABILITY,
    "blaze": blaze,
    "photosynthesis": photosynthesis,
    "chicanery": chicanery,
}
