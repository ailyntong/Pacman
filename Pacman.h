#ifndef PACMAN_H
#define PACMAN_H

#include "Entity.h"
#include <iostream>

#define PACMAN_INIT_X 0
#define PACMAN_INIT_Y 0

class Pacman : public Entity {
public:
	Pacman();

	void update();

private:
	inline bool key(sf::Keyboard::Key key) { return sf::Keyboard::isKeyPressed(key); }
	void move(int dx, int dy);
};

#endif