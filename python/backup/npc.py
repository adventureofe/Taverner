class Npc:
    def __init__(self, name: str = "DEFAULT_NPC_NAME"):
        self.name = name

anthony = Npc(
    name = "anthony",
)

boris = Npc(
    name = "boris",
)

frank = Npc(
    name = "frank",
)

npcs = {
    "boris": boris,
    "frank": frank,
}
