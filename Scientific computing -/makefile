

all: mylib.o
	gcc -o main.out main.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out timecomplex.c mylib.o
	./main.out
space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o spacecomplexrecursive.out spacecomplexrecursive.c mylib.o
	gcc -o spacecomplexiterative.out spacecomplexiterative.c mylib.o
clear:
	rm -rf *.out 
	
	rm -rf *.o
