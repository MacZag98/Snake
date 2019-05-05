#ifndef GAME_H
#define GAME_H

#include <vector>

#include "Board.h"

struct Coordinates
{
	Coordinates(int num1, int num2)
	{
		x = num1;
		y = num2;
	}
	int x;
	int y;
};

class Game
{
public:
	Game()
	{
		Snake.push_back(Coordinates(BOARD_SIZE/2, BOARD_SIZE/2));
		move_snake (Coordinates(BOARD_SIZE/2, BOARD_SIZE/2+1));
		move_snake (Coordinates(BOARD_SIZE/2, BOARD_SIZE/2+2));
	}

	void move_snake(Coordinates next_field)
	{
		Snake.push_back(next_field);
		if (Snake.size()>3)
			Snake.erase (Snake.begin());
	}
private:
	Board game_board;
	std::vector<Coordinates> Snake;
};

#endif