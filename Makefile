CFLAGS = -Wall  -Wall -g -ggdb
LIBS = -pthread

mytarget: soccer_game.o
	g++ -std=c++0x soccer_game.o $(LIBS) -o soccer_game

soccer_game.o: soccer_game.cpp soccer_game.h
	g++ -std=c++0x -c soccer_game.cpp $(CFLAGS) -o soccer_game.o

clean:
	rm soccer_game soccer_game.o
