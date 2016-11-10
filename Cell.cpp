#include "Cell.h"

Cell::Cell(const Point pos) :
	state(EMPTY),
	item(NONE),
	color(sf::Color::Black),
	shape(sf::Vector2f(CELL_SIZE, CELL_SIZE)),
	pos(pos)
{
	shape.setFillColor(color);
	shape.setPosition(sf::Vector2f(pos.y * CELL_SIZE, pos.x * CELL_SIZE));
}

Cell::~Cell() {}

void Cell::draw(sf::RenderWindow *window) {
	window->draw(shape);
}