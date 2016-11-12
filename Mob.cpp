#include "Mob.h"

Mob::Mob(sf::Color default_color, Point grid_pos, float speed) :
	_state(CHASE),
	_grid_pos(grid_pos),
	_speed(speed),
	_real_pos(grid_pos * CELL_SIZE),
	_color(default_color),
	_shape(sf::Vector2f(CELL_SIZE, CELL_SIZE))
{
	_shape.setFillColor(_color);
	_shape.setPosition(sf::Vector2f(_real_pos.x, _real_pos.y));
}

Mob::~Mob() {}

void Mob::update() {

}

void Mob::draw(sf::RenderWindow *window) {
	window->draw(_shape);
}