from weather.weather import weather
from terrain.terrain import terrain

class Battle:
    def __init__(self, player, enemy, terrain = terrain["DEFAULT_TERRAIN"], weather = ["DEFAULT_WEATHER"]):
        self.player = player
        self.enemy = enemy

        self.player_creature = self.player.creatures[0]
        self.enemy_creature = self.enemy.creatures[0]

        self.terrain = terrain
        self.weather = weather
        self.turn = 1
        self.rotation = 1

    def battle_start(self):
        print("A battle starts betwween", self.player.name, "and", self.enemy.name)
        self.info()
        print(self.player.name, "sends in", self.player.creatures[0].title())
        print(self.enemy.name, "sends in", self.enemy.creatures[0].title())
        print()

    def info(self):
        print("+|==|+ BATTLE INFO +|==|+")
        print("TURN:", self.turn)
        print("ROTATION:", self.rotation)
        print("TERRAIN:", self.terrain.name)
        print("WEATHER:", self.weather.name)
        print()

    def battle_menu(self):
        print("BATTLE MENU: Choose command")
        print("1. Attack")
        print("2. Switch")
        print("3. Info")
        print("4. Speak")
        print("0. Terminate Program")
        answer = int(input(": "))
        print()
        return answer

    def info_menu(self):
        print("INFO MENU: Choose command")
        print("1.", self.player_creature.title())
        print("2.", self.enemy_creature.title())
        print("3. battlefield")
        answer = int(input(": "))
        print()
        return answer

    def creature_menu(self):
        print("CREATURE MENU: Choose command")
        print("1. general info")
        print("2. stats")
        answer =  int(input(": "))
        print()
        return answer


    def battle(self):
        self.battle_start()
        self.info()

        while True:
            command_battle = self.battle_menu()

            if command_battle == 1:
                print("attack")
            elif command_battle == 2:
                print("switch")
            elif command_battle == 3:
                command_info = self.info_menu()

                if command_info == 1:
                    command_creature = self.creature_menu()
                    if command_creature == 1:
                        self.player_creature.info()
                    elif command_creature == 2:
                        self.player_creature.current_stats.info()
                    else:
                        print("invalid command")

                elif command_info  == 2:
                    command_creature = self.creature_menu()

                    if command_creature == 1:
                        self.enemy_creature.info()
                    elif command_creature == 2:
                        self.enemy_creature.current_stats.info()
                    else:
                        print("invalid command")

                elif command_info == 3:
                    self.info()
                else:
                    print("invalid command")

            elif command_battle == 4:
                print("speak")
            elif command_battle == 0:
                return 0
            else:
                print("Invalid command")

