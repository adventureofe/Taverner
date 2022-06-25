class Trait:
    def __init__(self, name: str = "DEFAULT_TRAIT_NAME", description = "DEFAULT_TRAIT_DESCRIPTION"):
        self.name = name
        self.description = description

    def info(self):
        print("+|==|+ TRAIT INFO +|==|+")
        print("NAME:", self.name)
        print("DESCRIPTION:", self.description)

DEFAULT_TRAIT = Trait(
)

egotistical = Trait(
    name = "egotistical",
    description = "target has a very high opinion of themselves"
)

gallant = Trait(
    name = "gallant",
    description = "target is courageous in the face of danger"
)

bashful = Trait(
    name = "bashful",
    description = "target is reluctant to draw attention to themselves"
)

gregarious = Trait(
    name = "extroverted",
    description = "target is responsive and fond of company"
)

surly = Trait(
    name = "surly",
    description = "target is bad-tempered and unfriendly"
)

adventurous = Trait(
    name = "adventurous",
    description = "target is willing to take tasks and try new things"
)

selfish = Trait(
    name = "selfish",
    description = "target has little consideration for others"
)

eccentric = Trait(
    name = "eccentric",
    description = "target exhibits odd and unconventional behaviour"
)

charitable = Trait(
    name = "charitable",
    description = "target is eager to help those in great need"
)

glum = Trait(
    name = "glum",
    description = "target has a gloomy and downtrodden demeanor"
)

traits = {
    "DEFAULT_TRAIT": DEFAULT_TRAIT,
    "egotistical": egotistical,
    "gallant": gallant,
    "bashful": bashful,
    "gregarious": gregarious,
    "surly": surly,
    "adventurous": adventurous,
    "selfish": selfish,
    "eccentric": eccentric,
    "charitable": charitable,
    "glum": glum
}
