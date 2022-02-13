CC = clang++
CFLAGS = -Wall -Wextra -pedantic
EXEC = taverner

output: main.o species.o
	$(CC) $(CFLAGS) main.o species.o -o $(EXEC)

main.o: main.cpp species.o
	$(CC) -c main.cpp

species.o: src/species.cpp headers/species.hpp
	$(CC) -c ./src/species.cpp

clean:
	rm *.o taverner
