#ifndef CELL_H
#define CELL_H

#include <SFML/Graphics.hpp>
#include "Point.h"
#include "Constants.h"

class Cell {
public:
	enum State { EMPTY, WALL } state;
	enum Item { NONE, FOOD, ENERGIZER } item;
	
	Cell(const Point pos = { 0, 0 });
	~Cell();

	void draw(sf::RenderWindow *window);

	inline Point pos() const { return _pos; }
	inline void set_pos(const Point pos) { 
		this->_pos = pos; 
		_shape.setPosition(sf::Vector2f(pos.y * CELL_SIZE, pos.x * CELL_SIZE));
	}
	inline void set_state(const State state) {
		this->state = state;
		_color = (state == EMPTY) ? sf::Color::Black : sf::Color::Blue;
		_shape.setFillColor(_color);
	}

private:
	sf::Color _color;
	sf::RectangleShape _shape;

	Point _pos;
};

#endif