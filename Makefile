CC = clang++
CFLAGS = -std=c++20 -Wall -Wextra -pedantic
EXEC = taverner

output: main.o species.o
	$(CC) $(CFLAGS) main.o species.o -o $(EXEC)

main.o: main.cpp species.o
	$(CC) -c $(CFLAGS) main.cpp

species.o: src/species.cpp headers/species.hpp
	$(CC) -c $(CFLAGS) ./src/species.cpp

clean:
	rm *.o taverner
