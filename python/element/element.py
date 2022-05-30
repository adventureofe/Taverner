class Element:
    def __init__(self, name: str = "DEFAULT_ELEMENT_NAME", element_type: str = "DEFAULT_ELEMENT_TYPE"):
        self.name = name
        self.element_type = element_type

    def info(self):
        print("ELEMENT INFO")
        print("NAME: ", self.name)

        print("ELEMENT_TYPE: ", self.element_type)
        print()

DEFAULT_ELEMENT = Element(
)

alien = Element(
    name = "alien",
    element_type = "physical"
)

air = Element(
    name = "air",
    element_type = "special"
)

chaos = Element(
    name = "chaos",
    element_type = "physical"
)


earth = Element(
    name = "earth",
    element_type = "physical"
)

electricity = Element(
    name = "electricity",
    element_type = "special"
)

evil = Element(
    name = "evil",
    element_type = "physical"
)

fire = Element(
    name = "fire",
    element_type = "special"
)

holiness = Element(
    name = "holiness",
    element_type = "physical"
)

ice = Element(
    name = "ice",
    element_type = "special"
)

metal = Element(
    name = "metal",
    element_type = "physical"
)

mutation = Element(
    name = "mutation",
    element_type = "physical"
)

normal = Element(
    name = "normal",
    element_type = "physical"
)

plant = Element(
    name = "plant",
    element_type = "special"
)

poison = Element(
    name = "poison",
    element_type = "physical"
)

radiation = Element(
    name = "radiation",
    element_type = "special"
)

undead = Element(
    name = "undead",
    element_type = "physical"
)

water = Element(
    name = "water",
    element_type = "special"
)

elements = {
    "DEFAULT_ELEMENT": DEFAULT_ELEMENT,
    "alien": alien,
    "air": air,
    "chaos": chaos,
    "earth": earth,
    "electricity": electricity,
    "evil": evil,
    "fire": fire,
    "holiness": holiness,
    "ice": ice,
    "metal": metal,
    "mutation": mutation,
    "normal": normal,
    "plant": plant,
    "poison": poison,
    "radiation": radiation,
    "undead": undead,
    "water": water
}
