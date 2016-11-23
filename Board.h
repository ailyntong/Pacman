#ifndef BOARD_H
#define BOARD_H

#include <array>
#include <vector>
#include "Constants.h"
#include "Cell.h"
#include "Pacman.h"
#include "Ghost.h"

class Board {
public:
	Board();

	std::array<std::array<Cell, NUM_ROWS>, NUM_COLS> grid() const { return _grid; };
private:
	std::array<std::array<Cell, NUM_ROWS>, NUM_COLS> _grid;
	Pacman _pacman;
	std::vector<Ghost> _ghosts;
};

#endif