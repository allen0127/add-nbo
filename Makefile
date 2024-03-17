all: add_nbo

add_nbo: main.o
	g++ -o add_nbo main.o

main.o: main.c
	g++ -g -c -o main.o main.c

clean:
	rm -f add_nbo *.o
