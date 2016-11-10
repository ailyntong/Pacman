#include "Cell.h"

Cell::Cell(const Point pos) :
	state(EMPTY),
	item(NONE),
	_color(sf::Color::Black),
	_shape(sf::Vector2f(CELL_SIZE, CELL_SIZE)),
	_pos(pos)
{
	_shape.setFillColor(_color);
	_shape.setPosition(sf::Vector2f(pos.y * CELL_SIZE, pos.x * CELL_SIZE));
}

Cell::~Cell() {}

void Cell::draw(sf::RenderWindow *window) {
	window->draw(_shape);
}