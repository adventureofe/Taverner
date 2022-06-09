# this class is to be used in species to give that species some base stats

class stats:
    def __init__(self, hp: int = 100, attack: int = 10, defence: int = 10, special_attack: int = 10, special_defence: int = 10, speed: int = 10):
        self.hp = hp
        self.attack = attack
        self.defence = defence
        self.special_attack = special_attack
        self.special_defence = special_defence
        self.speed = speed

    def info(self):
        print("+|==|+ STAT INFO +|==|+")
        print("HP:", self.hp)
        print("ATTACK:", self.attack)
        print("DEFENCE:", self.defence)
        print("SPECIAL_ATTACK:", self.special_attack)
        print("SPECIAL_DEFENCE:", self.special_defence)
        print("SPEED:", self.speed)
        print()


