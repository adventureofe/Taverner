CC = clang++
CFLAGS = -std=c++20 -Wall -Wextra -pedantic
LFLAGS = -lSDL2
EXEC = taverner

output: main.o element.o subtype.o species.o creature.o
	$(CC) $(CFLAGS) $(LFLAGS) main.o element.o subtype.o species.o creature.o -o $(EXEC)

main.o: main.cpp species.o
	$(CC) -c $(CFLAGS) main.cpp

element.o: src/element.cpp headers/element.hpp
	$(CC) -c $(CFLAGS) ./src/element.cpp

species.o: src/species.cpp headers/species.hpp
	$(CC) -c $(CFLAGS) ./src/species.cpp

subtype.o: src/subtype.cpp headers/subtype.hpp
	$(CC) -c $(CFLAGS) ./src/subtype.cpp

creature.o: src/creature.cpp headers/creature.hpp
	$(CC) -c $(CFLAGS) ./src/creature.cpp

clean:
	rm *.o taverner
