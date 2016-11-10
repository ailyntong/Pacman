#ifndef PACMAN_H
#define PACMAN_H

#include "Point.h"

class Pacman {
public:
	Pacman();
	~Pacman();

	inline Point get_real_pos() const { return real_pos; }
	inline Point get_grid_pos() const { return grid_pos; }

private:
	Point real_pos, grid_pos;
	float speed;
};

#endif