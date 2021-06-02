a : P2.o fibonacci.o
	gcc P2.o fibonacci.o
main.o : P2.c header.h
	gcc -c P2.c
f.o : fibonacci.c f.h