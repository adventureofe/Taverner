class Terrain:
    def __init__(self, name: str = "DEFAULT_TERRAIN"):
        self.name = name

    def info(self):
        print("+|==|+ BIOME INFO +|==|+")
        print("NAME:", self.name)

DEFAULT_TERRAIN = Terrain(
)

sand = Terrain(
    name = "sand",
)

grass = Terrain(
    name = "grass",
)

marsh = Terrain(
    name = "marsh",
)

bushland = Terrain(
    name = "bushland",
)

dirt = Terrain(
    name = "dirt",
)

mud = Terrain(
    name = "mud",
)

floor = Terrain(
    name = "floor",
)

stone = Terrain(
    name = "stone",
)

scorched_earth = Terrain(
    name = "scorched earth",
)

forest = Terrain(
    name = "forest",
)

rainforest = Terrain(
    name = "rainforest",
)

river = Terrain(
    name = "river",
)

deep_water = Terrain(
    name = "deep water",
)

floor = Terrain(
    name = "floor",
)

terrain = {
    "DEFAULT_TERRAIN": DEFAULT_TERRAIN,
    "sand": sand,
    "grass": grass,
    "marsh": marsh,
    "bushland": bushland,
    "forest": forest,
    "rainforest": rainforest,
    "dirt": dirt,
    "mud": mud,
    "floor": floor,
    "stone": stone,
    "scorched earth": scorched_earth,
    "river": river,
    "deep water": deep_water,
    "floor": floor,
}
