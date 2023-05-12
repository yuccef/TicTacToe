all :  TicTacToe board.o figures.o sound.o game.o

board.o : ./board/board.hpp ./board/board.cpp
	g++ -c ./board/board.cpp -lsfml-graphics -lsfml-window -lsfml-system

figures.o : ./figures/figures.hpp  ./figures/figures.cpp
	g++ -c ./figures/figures.cpp -lsfml-graphics -lsfml-window -lsfml-system

sound.o : ./sound/sound.hpp ./sound/sound.cpp
	g++ -c ./sound/sound.cpp -lsfml-audio

game.o : ./game/game.hpp ./game/game.cpp
	g++ -c ./game/game.cpp



TicTacToe : TicTacToe.cpp ./board/board.cpp ./figures/figures.cpp ./sound/sound.cpp ./game/game.cpp ./board/board.hpp ./figures/figures.hpp ./sound/sound.hpp ./game/game.hpp
	g++ -o TicTacToe TicTacToe.cpp ./board/board.cpp ./figures/figures.cpp ./sound/sound.cpp ./game/game.cpp  -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system