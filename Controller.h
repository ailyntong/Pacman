#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Mob.h"

class Controller {
public:
	Controller(Mob *mob = 0);
	~Controller();

	virtual void update() = 0;

private:
	Mob *_mob;
};

#endif