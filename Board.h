#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include <array>
#include "Constants.h"
#include "Cell.h"
#include "Mob.h"
#include "Controller.h"

class Board {
public:
	Board();
	~Board();

	void draw(sf::RenderWindow *window);

private:
	std::array<std::array<Cell, NUM_COLS>, NUM_ROWS> _grid;
	std::vector<Mob> mobs;	//0 is pacman, rest are ghosts
	std::vector<Controller> controllers;	//0 is pacman, rest are ghosts

	void init_grid();
	
};

#endif