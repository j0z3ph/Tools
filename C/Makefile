run: main.exe
	./main.exe

main.exe: main.c tools.h tools.o
	gcc main.c tools.o -o main.exe

tools.o: tools.c
	gcc -c tools.c -o tools.o