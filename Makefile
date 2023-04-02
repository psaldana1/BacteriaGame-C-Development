all: compile link

compile:
	g++ -I<scr/Include -c main.cpp

link:
	g++ main.o -o main -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system