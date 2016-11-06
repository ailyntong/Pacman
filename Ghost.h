#ifndef GHOST_H
#define GHOST_H

#include <functional>
#include <string>
#include "Cell.h"
#include "Entity.h"
#include "Pacman.h"

#define GHOST_INIT_X 0
#define GHOST_INIT_Y 0

class Ghost : public Entity {
public:
	enum State {
		CHASE,
		SCATTER,
		FRIGHTENED
	} state;
	
	Ghost(uint32_t color, std::string name);

	void update();

	void set_ai(std::string name);
	inline std::string get_name() const { return name; }

private:
	std::string name;
	Cell *target;	//target cell to move to

	std::function<void()> ai = []() {};
	void blinky_ai();
	void pinky_ai();
	void inky_ai();
	void clyde_ai();
};

#endif