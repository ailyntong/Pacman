#ifndef POSITION_H
#define POSITION_H

struct Position {
	uint16_t x, y;

	Position(int x, int y) :
		x(x),
		y(y)
	{}
};

#endif