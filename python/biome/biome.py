class Biome:
    def __init__(self, name: str = "DEFAULT_BIOME", temperature: str = "DEFAULT_TEMPERATURE"):
        self.name = name
        self.temperature = temperature

    def info(self):
        print("+|==|+ BIOME INFO +|==|+")
        print("NAME:", self.name)
        print("TEMPERATURE:", self.temperature)

DEFAULT_BIOME = Biome(
)

plains = Biome(
    name = "plains",
    temperature = "temperate"
)

hills = Biome(
    name = "hills",
    temperature = "cold"
)

mountains = Biome(
    name = "mountains",
    temperature = "very cold"
)

jungle = Biome(
    name = "jungle",
    temperature = "hot"
)

desert = Biome(
    name = "desert",
    temperature = "very hot",
)

tundra = Biome(
    name = "tundra",
    temperature = "very cold",
)

ice_sheet = Biome(
    name = "ice sheet",
    temperature = "very cold",
)

savannah = Biome(
    name = "savannah",
    temperature = "hot"
)

beach = Biome(
    name = "beach",
    temperature = "hot",
)

volcano = Biome(
    name = "volcano",
    temperature = "very hot"
)

swamp = Biome(
    name = "swamp",
    temperature = "hot",
)

bog = Biome(
    name = "bog",
    temperature = "cold",
)

wasteland = Biome(
    name = "wasteland",
    temperature = "very cold",
)

ocean = Biome(
    name = "ocean",
    temperature = "cold"
)

river = Biome(
    name = "river",
    temperature = "temperate"
)

biomes = {
    "DEFAULT_BIOME": DEFAULT_BIOME,
    "plains": plains,
    "hills": hills,
    "mountains": mountains,
    "jungle": jungle,
    "desert": desert,
    "tundra": tundra,
    "ice sheet": ice_sheet,
    "savannah": savannah,
    "beach": beach,
    "volcano": volcano,
    "swamp": swamp,
    "bog": bog,
    "wasteland": wasteland,
    "ocean": ocean,
    "river": river,
}
