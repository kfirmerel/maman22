mainmat: mainmat.c mymat.o
	gcc -ansi -Wall -pedantic mainmat.c mymat.o -o mainmat

mymat.o: mymat.c mymat.h
	gcc -c -ansi -Wall -pedantic mymat.c -o mymat.o
clean:
	rm -f *mainmat
	rm -f *mymat.o
