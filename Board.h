#ifndef BOARD_H
#define BOARD_H

#include <array>
#include "Constants.h"
#include "Cell.h"

class Board {
public:
	Board();
	~Board();

private:
	std::array<std::array<Cell, NUM_COLS>, NUM_ROWS> grid;
	
};

#endif