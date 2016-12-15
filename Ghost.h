#ifndef GHOST_H
#define GHOST_H

class Ghost {
public:

	enum class State {
		ERROR      = 0b000,
		CHASE      = 0b001,
		SCATTER    = 0b010,
		FRIGHTENED = 0b100
	};

	State state() const { return _state; }
	void set_target(Point new_target) { _target = new_target; }
	inline Point real_pos() const { return _real_pos; }
	inline Point grid_pos() const { return _grid_pos; }
private:
	State _state;
	Point _target;
	Point _real_pos, _grid_pos;
	Point _scatter_cell;
	float _speed;
};

#endif