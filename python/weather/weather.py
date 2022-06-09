class Weather:
    def __init__(self, name: str = "DEFAULT_WEATHER", description: str = "DEFAULT_WAETHER_DESCRIPTION"):
        self.name = name
        self.description = description

        def info(self):
            print("+|==|+ ABILITY INFO +|==|+")
            print("NAME: ", self.name)
            print("DESCRIPTION", self.description)

DEFAULT_WEATHER = Weather(
)

sunny = Weather(
    name = "sunny",
    description = "A pleasent heat radiates from the sun",
)

cold = Weather(
    name = "cold",
    description = "the air is bitterly cold",
)

rain = Weather(
    name = "rain",
    description = "raindrops are gently falling from above",
)

downpour = Weather(
    name = "downpour",
    description = "rain batters the ground below"
)

fog = Weather(
    name = "fog",
    description = "thick fog comes rolling in",
)

sweltering_heat = Weather(
    name = "sweltering heat",
    description = "The harsh sun relentlessly beams down",
)

snow = Weather(
    name = "snow",
    description = "snowflakes are gently falling from the sky",
)

hail = Weather(
    name = "hail",
    description = "ice shards rain down from above",
)

blizzard = Weather(
    name = "snow",
    description = "a storm of snow and hail rages",
)

storm = Weather(
    name = "storm",
    description = "a storm of rain and wind hurls",
)

wind = Weather(
    name = "wind",
    description = "gusts of wind blow",
)

thunderstorm = Weather(
    name = "thunderstorm",
    description = "strong winds, heavy rain and lightning",
)

hurricane = Weather(
    name = "hurricane",
    description = "a massive wind vortex spirals overhead",
)

sandstorm = Weather(
    name = "sandstorm",
    description = "sands are lifted and thrown by the winds",
)

clear_sky = Weather(
    name = "clear sky",
    description = "no remarkable weather conditions are taking place",
)

cloudy = Weather(
    name = "cloudy",
    description = "the sky is shadowed by thick clouds",
)

acid_rain = Weather(
    name = "acid rain",
    description = "drops of corrosive acid rain from the sky",
)

indoors = Weather(
    name = "indoors",
    description = "room temperature",
)

weather = {
    "DEFAULT_WEATHER": DEFAULT_WEATHER,
    "sunny": sunny,
    "cold": cold,
    "rain": rain,
    "downpour": downpour,
    "fog": fog,
    "sweltering heat": sweltering_heat,
    "snow": snow,
    "hail": hail,
    "blizzard": blizzard,
    "storm": storm,
    "wind": wind,
    "hurricane": hurricane,
    "sandstorm": sandstorm,
    "clear sky": clear_sky,
    "cloudy": cloudy,
    "acid rain": acid_rain,
    "indoors": indoors,
}
