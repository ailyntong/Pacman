#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>
#include "Position.h"
#include "Constants.h"

using Move = std::pair<int, int>;

class Entity {
public:
	Entity(Position pos = { 0, 0 }, uint32_t color = 0x000000FF);
	~Entity(); 

	void draw(sf::RenderWindow *window);

	inline Position get_pos() const { return pos; }
	inline sf::Color get_color() const { return color; }

protected:
	Position pos;
	sf::Color color;

	sf::RectangleShape sprite;
};

#endif