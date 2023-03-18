all :  TicTacToe board.o figures.o sound.o game.o

board.o : board.hpp board.cpp
	g++ -c board.cpp -lsfml-graphics -lsfml-window -lsfml-system

figures.o : figures.hpp figures.cpp
	g++ -c figures.cpp -lsfml-graphics -lsfml-window -lsfml-system

sound.o : sound.hpp sound.cpp
	g++ -c sound.cpp -lsfml-audio

game.o : game.hpp game.cpp
	g++ -c game.cpp



TicTacToe : TicTacToe.cpp board.cpp figures.cpp sound.cpp game.cpp board.hpp figures.hpp sound.hpp game.hpp
	g++ -o TicTacToe TicTacToe.cpp board.cpp figures.cpp sound.cpp game.cpp -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system