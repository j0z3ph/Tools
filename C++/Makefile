run: main.exe
	./main.exe

main.exe: main.cpp tools.hpp tools.o
	g++ main.cpp tools.o -o main.exe

tools.o: tools.cpp
	g++ -c tools.cpp -o tools.o