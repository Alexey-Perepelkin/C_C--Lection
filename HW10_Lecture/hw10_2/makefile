all: find_max.exe

find_max.exe: main.o func.o
	gcc -o prog main.o func.o

main.o: main.c 
	gcc -c --std=c99 -o main.o main.c

func.o: func.c
	gcc -c --std=c99 -o func.o func.c

clean:
	del  *.o
	del  find_max.exe