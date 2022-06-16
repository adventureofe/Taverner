class Element:
    def __init__(self, name: str = "DEFAULT_ELEMENT_NAME", element_type: str = "DEFAULT_ELEMENT_TYPE", weak = [], strong = []):
        self.name = name
        self.element_type = element_type

    def info(self):
        print("+|==|+ ELEMENT INFO +|==|+")
        print("NAME:", self.name)
        print("ELEMENT_TYPE:", self.element_type)
        print()

DEFAULT_ELEMENT = Element(
)

alien = Element(
    name = "alien",
    element_type = "physical",
    weak = ["alien", "nuclear", "poison", "undead", "water"],
    strong = ["air", "earth", "electric", "fire", "normal", "shadow"],
)

air = Element(
    name = "air",
    element_type = "special",
    weak = ["alien", "air", "evil", "nuclear", "plant"],
    strong = ["electric", "fire", "ice", "mutant"],
)

chaos = Element(
    name = "chaos",
    element_type = "physical",
    weak = ["air", "earth", "fire", "plant"],
    strong = ["alien", "chaos", "magic", "mutant", "nuclear", "shadow", "toon", "undead", "water"],
)


earth = Element(
    name = "earth",
    element_type = "physical",
    weak = ["earth", "metal", "plant", "water"],
    strong = ["evil", "fire", "magic", "undead"],
)

electricity = Element(
    name = "electricity",
    element_type = "special",
    weak = ["alien", "air", "earth", "electric", "plant"],
    strong = ["holy", "magic", "metal", "toon", "water"],
)

evil = Element(
    name = "evil",
    element_type = "physical",
    weak = ["evil", "nuclear", "shadow", "toon", "undead"],
    strong = ["holy", "normal", "plant"],
)

fire = Element(
    name = "fire",
    element_type = "special",
    weak = ["air", "evil", "fire", "shadow", "water"],
    strong = ["alien", "chaos", "ice", "metal", "plant", "undead"]
)

holiness = Element(
    name = "holiness",
    element_type = "physical",
    weak = ["alien", "chaos", "holy", "toon"],
    strong = ["earth", "evil", "fire", "ice", "magic", "mutant", "nuclear", "poison", "shadow", "undead"],
)

ice = Element(
    name = "ice",
    element_type = "special",
    weak = ["chaos", "fire", "ice", "magic"],
    strong = ["alien", "earth", "holy", "mutant", "plant", "undead", "water"]
)

metal = Element(
    name = "metal",
    element_type = "physical",
    weak = ["metal", "water"],
    strong = ["air", "plant", "poison"],
)

mutation = Element(
    name = "mutation",
    element_type = "physical",
    weak = ["holy", "ice", "mutant", "water"],
    strong = ["alien", "chaos", "evil", "nuclear", "plant"],
)

normal = Element(
    name = "normal",
    element_type = "physical",
    weak = ["alien", "chaos", "undead"],
    strong = ["earth", "evil", "mutant", "toon"]
)

plant = Element(
    name = "plant",
    element_type = "special",
    weak = ["chaos", "evil", "fire", "ice", "nuclear", "plant"],
    strong = ["alien", "air", "earth", "holy", "water"],
)

poison = Element(
    name = "poison",
    element_type = "physical",
    weak = ["metal", "mutant", "nuclear", "poison", "shadow", "toon", "undead"],
    strong = ["alien", "chaos", "holy", "magic", "plant", "water"],
)

radiation = Element(
    name = "radiation",
    element_type = "special",
    weak = ["electric", "fire", "magic", "shadow", "toon"],
    strong = ["alien", "chaos", "nuclear", "plant", "undead"],
)

undead = Element(
    name = "undead",
    element_type = "physical",
    weak = ["air", "earth", "fire", "metal", "undead", "water"],
    strong = ["alien", "chaos", "electric", "holy", "ice", "magic", "mutant", "normal", "poison", "shadow"]
)

water = Element(
    name = "water",
    element_type = "special",
    weak = ["chaos", "electric", "ice", "mutant", "nuclear", "plant", "poison", "water"],
    strong = ["alien", "evil", "fire", "magic", "metal"]
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
