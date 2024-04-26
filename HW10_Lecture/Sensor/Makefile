all: sensor.exe

sensor.exe: main.o sensor.o
	gcc -o prog   main.o sensor.o

main.o: main.c 
	gcc -c --std=c99 -o main.o main.c

sensor.o: sensor.c 
	gcc -c --std=c99 -o sensor.o sensor.c

clean:
	del  *.o
	del  sensor.exe