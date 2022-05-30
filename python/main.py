from element.element import elements
from move.move import moves
from species.species import species
from species.species_quality import species_qualities
import random

def choose_random_word(words_list):
    selector = random.randrange(0, len(words_list))
    return words_list[selector]

def print_all_info(input_map):
    for x in input_map.values():
        x.info()

def main():
    print("hello world")
    print_all_info(species)
    moves["fire ball"].info()

if __name__ == "__main__":
    main()




