#include "Entity.h"

Entity::Entity(Position pos, uint32_t color) :
	pos(pos),
	color(color),
	sprite(sf::Vector2f(CELL_SIZE, CELL_SIZE))
{	
	sprite.setPosition(pos.x * CELL_SIZE, pos.y * CELL_SIZE);
	sprite.setFillColor(this->color);
}

Entity::~Entity() {}

void Entity::draw(sf::RenderWindow *window) {
	window->draw(sprite);
}