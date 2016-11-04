#ifndef GHOST_H
#define GHOST_H

#include <functional>
#include <string>
#include "Entity.h"

#define GHOST_INIT_X 0
#define GHOST_INIT_Y 0

class Ghost : public Entity {
public:
	Ghost(uint32_t color, std::string name);

	void set_ai(std::string name);
	void update();

	inline std::string get_name() const { return name; }
private:
	std::string name;
	
	std::function<void()> ai = []() {};
	void blinky_ai();
	void pinky_ai();
	void inky_ai();
	void clyde_ai();
	void run_ai();
};

#endif