exe:	Personas.o main.o
	g++ Personas.o main.o -o exe
main.o:	main.cpp Personas.h
	g++ -c main.cpp

Personas.o:	Personas.h
	g++ -c Personas.cpp
