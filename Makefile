all:
	gcc -o main.out main.c mylib.o
	./main.out
clear:
	rm *.out
	rm *.o
