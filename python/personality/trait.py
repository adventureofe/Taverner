class Trait:
    def __init__(self, name: str = "DEFAULT_TRAIT_NAME"):
        self.name = name

    def info(self):
        print("+|==|+ TRAIT INFO +|==|+")
        print("NAME:", self.name)

DEFAULT_TRAIT = Trait(
)
