#ifndef CELL_H
#define CELL_H

#include "Point.h"

class Cell {
public:
	enum class State {
		INVALID = 0b001,
		OPEN = 0b010,
		WALL = 0b100
	};
	enum class Item {
		INVALID = 0b0001,
		NONE = 0b0010,
		FOOD = 0b0100,
		ENERGIZER = 0b1000
	};
	Cell(Point pos = {-1, -1}, State state = State::INVALID, Item item = Item::INVALID);
	Point pos() const { return _pos; }
	State state() const { return _state; }
	Item item() const { return _item; }
private:
	Point _pos;
	State _state;
	Item _item;
	friend class Board;
};
#endif