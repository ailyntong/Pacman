#include "Cell.h"

Cell::Cell(Point pos, State state, Item item) :
	_pos{pos.x, pos.y},
	_state{state},
	_item{item} {
}