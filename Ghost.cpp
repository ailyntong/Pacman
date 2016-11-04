#include "Ghost.h"

Ghost::Ghost(uint32_t color, std::string name) :
	Entity({ GHOST_INIT_X, GHOST_INIT_Y }, color),
	name(name)
{
	set_ai(name);
}

void Ghost::set_ai(std::string name) {
	this->name = name;

	if (name == "blinky")
		ai = std::bind(&Ghost::blinky_ai, this);
	else if (name == "pinky")
		ai = std::bind(&Ghost::pinky_ai, this);
	else if (name == "inky")
		ai = std::bind(&Ghost::inky_ai, this);
	else if (name == "clyde")
		ai = std::bind(&Ghost::clyde_ai, this);
	else
		ai = std::bind(&Ghost::run_ai, this);
}

void Ghost::update() {
	//run appropriate ai
}

void Ghost::blinky_ai() {

}

void Ghost::pinky_ai() {

}

void Ghost::inky_ai() {

}

void Ghost::clyde_ai() {

}

void Ghost::run_ai() {

}