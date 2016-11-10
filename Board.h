#ifndef BOARD_H
#define BOARD_H

#include <array>
#include "Constants.h"
#include "Cell.h"
#include "Pacman.h"
#include "Ghost.h"

class Board {
public:
	Board();
	~Board();

	void draw(sf::RenderWindow *window);

private:
	std::array<std::array<Cell, NUM_COLS>, NUM_ROWS> grid;
	Pacman pacman;
	std::vector<Ghost> ghosts;

	void init_grid();
	
};

#endif