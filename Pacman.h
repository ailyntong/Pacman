#ifndef PACMAN_H
#define PACMAN_H

#include "Point.h"

class Pacman {
public:
	Pacman();
	~Pacman();

	inline Point real_pos() const { return _real_pos; }
	inline Point grid_pos() const { return _grid_pos; }

private:
	Point _real_pos, _grid_pos;
	float _speed;
};

#endif