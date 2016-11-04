#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <SFML\Graphics.hpp>
#include <array>
#include <functional>
#include "Constants.h"
#include "Cell.h"
#include "Ghost.h"
#include "Pacman.h"

class Board {
public:
	Board();
	~Board();

	void update();
	void draw(sf::RenderWindow *window);

private:
	std::array<std::array<Cell, NUM_COLS>, NUM_ROWS> board;
	std::array<Ghost, 4> ghosts;
	Pacman pacman;
};

#endif