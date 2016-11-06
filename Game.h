#ifndef GAME_H
#define GAME_H

#include <array>
#include "Board.h"
#include "Ghost.h"
#include "Pacman.h"

using Move = std::pair<int, int>;

class Game {
public:
	Game();
	~Game();

	void update(Move move);
	void draw(sf::RenderWindow *window);

private:
	Pacman pacman;
	std::array<Ghost, 4> ghosts;
	Board board;
};

#endif