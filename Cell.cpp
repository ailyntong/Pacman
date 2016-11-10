#include "Cell.h"

Cell::Cell(const Point pos) :
	pos(pos)
{}

Cell::~Cell() {}

void Cell::set_pos(const Point pos) {
	this->pos = pos;
}