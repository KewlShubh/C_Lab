a : 3.o unique.o
	gcc 3.o unique.o
main.o : 3.c header.h
	gcc -c 3.c
f.o : unique.c f.h