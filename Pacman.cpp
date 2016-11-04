#include "Pacman.h"

Pacman::Pacman() :
	Entity({ PACMAN_INIT_X, PACMAN_INIT_Y }, PACMAN_COLOR)
{}

void Pacman::update() {
	//move, death, etc
	if (key(sf::Keyboard::Up))
		move(0, -1);
	else if (key(sf::Keyboard::Down))
		move(0, 1);
	else if (key(sf::Keyboard::Left))
		move(-1, 0);
	else if (key(sf::Keyboard::Right))
		move(1, 0);

	sprite.setPosition(sf::Vector2f(pos.x * CELL_SIZE, pos.y * CELL_SIZE));
}

void Pacman::move(int dx, int dy) {
	int newX = pos.x + dx;
	int newY = pos.y + dy;

	if (newX < 0 || newX > NUM_COLS -1 ||
		newY < 0 || newY > NUM_ROWS -1) {
		return;
	}
	else {
		pos.x = newX;
		pos.y = newY;
	}
}