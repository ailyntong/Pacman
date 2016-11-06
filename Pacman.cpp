#include "Pacman.h"

Pacman::Pacman() :
	Entity({ PACMAN_INIT_X, PACMAN_INIT_Y }, PACMAN_COLOR),
	state(NORMAL)
{}

void Pacman::update(Move move) {
	int newX = pos.x + move.first;
	int newY = pos.y + move.second;

	if (newX < 0 || newX > NUM_COLS - 1 ||
		newY < 0 || newY > NUM_ROWS - 1) {
		return;
	}
	else {
		pos.x = newX;
		pos.y = newY;
	}

	sprite.setPosition(sf::Vector2f(pos.x * CELL_SIZE, pos.y * CELL_SIZE));
}