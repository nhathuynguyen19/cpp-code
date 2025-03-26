all: compile link

compile:
	g++ -ISFML-2.6.1/include -c main.cpp
link:
	g++ main.o -o main -LSFML-2.6.1/lib -lsfml-graphics -lsfml-window -lsfml-system