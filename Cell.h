#ifndef CELL_H
#define CELL_H

#include <SFML/Graphics.hpp>
#include "Constants.h"
#include "Entity.h"

class Cell {
public:
	enum State {
		EMPTY,
		WALL,
		FOOD,
		ENERGIZER
	} state;

	Cell(State state = EMPTY);
	~Cell();

	inline Entity get_occupant() const { return *occupant; }

private:
	Entity *occupant;

};

#endif