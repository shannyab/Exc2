.PHONY = all clean 

all: connections

connections: main.o my_mat.o
	gcc -Wall -g main.o my_mat.o -o connections

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c

clean:
	rm -f *.o *.a connections