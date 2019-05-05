#ifndef BOARD_H
#define BOARD_H

#define BOARD_SIZE 10

#include <iostream>

struct Field
{
	bool is_wall = true;
	bool is_snake = false;
	bool is_snake_head = false;
	bool is_hen = false;
};

class Board
{
public:

	Board() {}

	void display()
	{
		for (int i = 0; i < BOARD_SIZE; ++i)
		{
			for (int j = 0; j < BOARD_SIZE; ++j)
			{
				if (game_board[i][j].is_wall)
					std::cout << "$";
				else if (game_board[i][j].is_hen)
					std::cout << "&";
				else if (game_board[i][j].is_snake)
					std::cout << "o";
				else if (game_board[i][j].is_snake_head)
					std::cout << "#";
				else
					std::cout << " ";
			}
			std::cout << "\n";
		}
	}

private:

	Field game_board[BOARD_SIZE][BOARD_SIZE];

};

#endif