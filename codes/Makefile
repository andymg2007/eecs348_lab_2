main: main.o isOdd.o
	gcc main.o isOdd.o -o main

main.o: main.c isOdd.h
	gcc -c main.c

isOdd.o: isOdd.c isOdd.h
	gcc -c isOdd.c

clean:
	rm -f main *.o