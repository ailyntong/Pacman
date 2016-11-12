#ifndef MOB_H
#define MOB_H

#include <SFML/Graphics.hpp>
#include "Point.h"
#include "Constants.h"

class Mob {
public:
	enum State { CHASE, SCATTER, FRIGHTENED } _state;
	
	Mob(sf::Color default_color, Point grid_pos = Point{ 0, 0 }, float speed = 0);
	~Mob();

	void update();
	void draw(sf::RenderWindow *window);

	inline Point real_pos() const { return _real_pos; }
	inline Point grid_pos() const { return _grid_pos; }

private:
	Point _real_pos, _grid_pos;
	float _speed;

	sf::RectangleShape _shape;
	sf::Color _color;
};

#endif