CC=gcc:
CFLAGS=-Wall -Wextra -pedantic -std=c11

.PHONY: all clean

all: program

program: main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o program


