#include "Cell.h"

Cell::Cell(State state) :
	state(state)
{
	occupant = NULL;
}

Cell::~Cell() {

}