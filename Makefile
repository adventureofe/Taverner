CC = clang++
CFLAGS = -std=c++20 -Wall -Wextra -pedantic
EXEC = taverner

output: main.o element.o species.o creature.o
	$(CC) $(CFLAGS) main.o element.o species.o creature.o -o $(EXEC)

main.o: main.cpp species.o
	$(CC) -c $(CFLAGS) main.cpp

element.o: src/element.cpp headers/element.hpp
	$(CC) -c $(CFLAGS) ./src/element.cpp

species.o: src/species.cpp headers/species.hpp
	$(CC) -c $(CFLAGS) ./src/species.cpp

creature.o: src/creature.cpp headers/creature.hpp
	$(CC) -c $(CFLAGS) ./src/creature.cpp

clean:
	rm *.o taverner
