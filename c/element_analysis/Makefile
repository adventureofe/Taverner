CC = clang
CFLAGS = -Wall -Wextra -pedantic -ljson-c
EXEC = element_analysis

output: main.o
	$(CC) $(CFLAGS) main.o -o $(EXEC)

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

clean:
	rm *.o element_analysis
