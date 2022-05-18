class Element:
    def __init__(self, name: str = "DEFAULT_ELEMENT_NAME", nouns = ["DEFAULT_ELEMENT_NOUN"], adjectives = ["DEFAULT_ELEMENT_ADJECTIVE"]):
        self.name = name
        self.nouns = nouns
        self.adjectives = adjectives

alien = Element(
    name = "alien",
)

air = Element(
    name = "air",
)

chaos = Element(
    name = "chaos",
)


earth = Element(
    name = "earth",
)

electricity = Element(
    name = "electricity",
)

evil = Element(
    name = "evil",
)

fire = Element(
    name = "fire",
)

holiness = Element(
    name = "holiness",
)

ice = Element(
    name = "ice"
)

metal = Element(
    name = "metal"
)

mutation = Element(
    name = "mutation"
)

normal = Element(
    name = "normal"
)

plant = Element(
    name = "plant"
)

poison = Element(
    name = "poison"
)

radiation = Element(
    name = "radiation"
)

undead = Element(
    name = "undead"
)

water = Element(
    name = "water"
)

elements = {
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
