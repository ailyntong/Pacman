#include "Game.h"

Game::Game() :
	pacman(),
	ghosts{ Ghost(BLINKY_COLOR, "blinky"),
			Ghost(PINKY_COLOR, "pinky"),
			Ghost(INKY_COLOR, "inky"),
			Ghost(CLYDE_COLOR, "clyde") },
	board(&pacman, &ghosts)
{}

Game::~Game() {}

void Game::update(Move move) {
	//board.update(move);		//THIS IS VERY VERY BROKEN
	for (Ghost ghost : ghosts) {
		ghost.update();
	}
	pacman.update(move);
}

void Game::draw(sf::RenderWindow *window) {
	board.draw(window);
	for (Ghost ghost : ghosts) {
		ghost.draw(window);
	}
	pacman.draw(window);
}