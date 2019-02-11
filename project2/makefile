all: main.o
	gcc main.o cipher.o -o project2

main.o: cipher.o main.c
	gcc -c main.c

cipher.o: cipher.c
	gcc -c cipher.c

clean:
	rm -f *.o project2
