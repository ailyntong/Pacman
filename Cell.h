#ifndef CELL_H
#define CELL_H

#include <SFML/Graphics.hpp>
#include "Constants.h"
#include "Entity.h"

class Cell {
public:
	enum State {
		EMPTY,
		WALL,
		FOOD,
		ENERGIZER
	} state;

	Cell(State state = EMPTY);
	~Cell();

	void set_state(State state);
	void draw(sf::RenderWindow *window);

	inline Position get_pos() const { return pos; }
	inline Entity get_occupant() const { return *occupant; }
	
	inline void set_pos(Position pos) { 
		this->pos = pos; 
		cell.setPosition(sf::Vector2f(pos.y * CELL_SIZE, pos.x * CELL_SIZE));
	}

private:
	Position pos = { 0, 0 };
	Entity *occupant;

	sf::Color color = sf::Color::Black;
	sf::RectangleShape cell;

};

#endif