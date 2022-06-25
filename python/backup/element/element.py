class Element:
    def __init__(self, name: str = "DEFAULT_ELEMENT_NAME", element_type: str = "DEFAULT_ELEMENT_TYPE", weak = [], strong = []):
        self.name = name
        self.element_type = element_type
        self.weak = weak
        self.strong = strong

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
    weak = ["alien", "radiation", "undead", "water"],
    strong = ["air", "chaos", "earth", "electricity", "fire", "normal"],
)

air = Element(
    name = "air",
    element_type = "special",
    weak = ["alien", "air", "earth", "evil", "radiation", "plant"],
    strong = ["electricity", "fire", "ice", "mutation"],
)

chaos = Element(
    name = "chaos",
    element_type = "physical",
    weak = ["air", "earth", "fire", "plant"],
    strong = ["alien", "chaos", "mutation", "radiation", "undead", "water"],
)


earth = Element(
    name = "earth",
    element_type = "physical",
    weak = ["earth", "metal", "plant", "water"],
    strong = ["evil", "fire", "undead"],
)

electricity = Element(
    name = "electricity",
    element_type = "special",
    weak = ["alien", "air", "earth", "electricity", "plant"],
    strong = ["holiness", "metal", "water", "undead"],
)

evil = Element(
    name = "evil",
    element_type = "physical",
    weak = ["earth", "evil", "radiation", "undead"],
    strong = ["holiness", "normal", "plant", "ice"],
)

fire = Element(
    name = "fire",
    element_type = "special",
    weak = ["air", "earth", "evil", "fire", "water"],
    strong = ["alien", "ice", "metal", "plant", "undead"]
)

holiness = Element(
    name = "holiness",
    element_type = "physical",
    weak = ["alien", "chaos", "holiness"],
    strong = ["earth", "evil", "fire", "ice", "mutation", "radiation", "poison", "undead"],
)

ice = Element(
    name = "ice",
    element_type = "special",
    weak = ["chaos", "fire", "ice"],
    strong = ["earth", "holiness", "plant", "undead", "water"]
)

metal = Element(
    name = "metal",
    element_type = "physical",
    weak = ["metal", "water"],
    strong = ["air", "poison"],
)

mutation = Element(
    name = "mutation",
    element_type = "physical",
    weak = ["holiness", "ice", "mutation", "water"],
    strong = ["alien", "chaos", "evil", "radiation", "plant"],
)

normal = Element(
    name = "normal",
    element_type = "physical",
    weak = ["alien", "chaos", "undead"],
    strong = ["chaos", "earth", "evil", "mutation"]
)

plant = Element(
    name = "plant",
    element_type = "special",
    weak = ["chaos", "evil", "fire", "ice", "radiation", "plant"],
    strong = ["alien", "air", "earth", "holiness", "water"],
)

poison = Element(
    name = "poison",
    element_type = "physical",
    weak = ["metal", "mutation", "radiation", "poison", "undead"],
    strong = ["alien", "chaos", "holiness", "plant", "water"],
)

radiation = Element(
    name = "radiation",
    element_type = "special",
    weak = ["electricity", "fire", "undead"],
    strong = ["alien", "chaos", "radiation", "plant"],
)

undead = Element(
    name = "undead",
    element_type = "physical",
    weak = ["air", "earth", "fire", "metal", "undead", "water"],
    strong = ["alien", "chaos", "electricity", "holiness", "ice", "normal", "poison"]
)

water = Element(
    name = "water",
    element_type = "special",
    weak = ["chaos", "electricity", "ice", "mututation", "plant", "poison", "water"],
    strong = ["alien", "evil", "fire", "metal", "radiation"]
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
