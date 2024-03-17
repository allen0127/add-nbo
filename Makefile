all: add_nbo

main.o: main.c
	g++ -g -c -o main.o main.c

add_ndo: main.o
	g++ -o add_nbo main.o

clean:
	rm -f add_nbo *.o
