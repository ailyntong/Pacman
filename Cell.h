#ifndef CELL_H
#define CELL_H

#include "Point.h"

class Cell {
public:
	enum State { EMPTY, WALL } state;
	enum Item { NONE, FOOD, ENERGIZER } item;
	
	Cell(const Point pos = { 0, 0 });
	~Cell();

	void set_pos(const Point pos);
	
private:
	Point pos;
};

#endif