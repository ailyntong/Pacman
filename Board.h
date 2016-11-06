#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <SFML\Graphics.hpp>
#include <array>
#include <functional>
#include "Constants.h"
#include "Cell.h"
#include "Pacman.h"
#include "Ghost.h"

using Move = std::pair<int, int>;

class Board {
public:
	Board(Pacman *pacman, std::array<Ghost, 4> *ghosts);
	~Board();

	bool update(Move move);
	void draw(sf::RenderWindow *window);

	std::vector<Move> get_moves(Cell origin);

	inline int get_score() { return score; }

private:
	std::array<std::array<Cell, NUM_COLS>, NUM_ROWS> board;
	int score;

	Pacman *pacman;
	std::array<Ghost, 4> *ghosts;

	void init_board();
};

#endif