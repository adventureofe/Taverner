class Battle:
    def __init__(self, terrain, weather):
        self.terrain = terrain
        self.weather = weather
        self.turn = 1
        self.rotation = 1

    def info(self):
        print("+|==|+ BATTLE INFO +|==|+")
        print("TERRAIN:", self.terrain.name)
        print("WEATHER:", self.weather)
        print("TURN:", self.turn)
        print("ROTATION:", self.rotation)


    def battle(Player, Opponent):
        print("BATTLE")
        print("1. Attack")
        print("2. Show Info")
