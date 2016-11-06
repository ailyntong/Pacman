#ifndef PACMAN_H
#define PACMAN_H

#include "Entity.h"
#include <iostream>

#define PACMAN_INIT_X 13
#define PACMAN_INIT_Y 26

class Pacman : public Entity {
public:
	enum State {
		NORMAL,
		CHASE
	} state;

	Pacman();

	void update(Move move);

private:
	inline bool key(sf::Keyboard::Key key) { return sf::Keyboard::isKeyPressed(key); }
};

#endif