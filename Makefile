CC = clang++
CFLAGS = -std=c++20 -Wall -Wextra -pedantic
LFLAGS = -lSDL2
EXEC = taverner

output: main.o element.o subtype.o species.o move.o creature.o
	$(CC) $(CFLAGS) main.o element.o subtype.o species.o move.o creature.o -o $(EXEC)

main.o: main.cpp
	$(CC) -c $(CFLAGS) main.cpp

element.o: src/element.cpp headers/element.hpp
	$(CC) -c $(CFLAGS) ./src/element.cpp

subtype.o: src/subtype.cpp headers/subtype.hpp
	$(CC) -c $(CFLAGS) ./src/subtype.cpp

species.o: src/species.cpp headers/species.hpp
	$(CC) -c $(CFLAGS)  ./src/species.cpp

move.o: src/move.cpp headers/move.hpp
	$(CC) -c $(CFLAGS) ./src/move.cpp

creature.o: src/creature.cpp headers/creature.hpp
	$(CC) -c $(CFLAGS) ./src/creature.cpp

clean:
	rm *.o taverner
