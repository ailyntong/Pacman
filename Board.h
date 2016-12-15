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

	Grid<Cell> grid() const { return _grid; };
private:
	Grid<Cell> _grid;
	Pacman _pacman;
	std::vector<Ghost> _ghosts;
	//std::array<Point, 30> _intersections = {}; // Locations where have to make decisions
};

#endif