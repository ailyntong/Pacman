#include "Board.h"

Board::Board() :
	pacman(),
	ghosts{ Ghost(BLINKY_COLOR, "blinky"),
			Ghost(PINKY_COLOR, "pinky"),
			Ghost(INKY_COLOR, "inky"),
			Ghost(CLYDE_COLOR, "clyde") }
{
	//initialize empty cells
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int k = 0; k < NUM_COLS; k++) {
			board[i][k];
		}
	}

	//initialize wall cells

	//initialize food cells

	//initialize energizer cells
}

Board::~Board() {

}

void Board::update() {
	pacman.update();
}

void Board::draw(sf::RenderWindow *window) {
	pacman.draw(window);
}