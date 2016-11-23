#include <iostream>

#include "Constants.h"
#include "Point.h"
#include "Cell.h"
#include "Board.h"
#include "PacmanUI.h"

int main() {
	float SCREEN_Y = 640;
	float SCREEN_X = SCREEN_Y*(1/ASPECT_RATIO);
	Board board;
	PacmanUI ui(&board, SCREEN_X, SCREEN_Y);

	sf::RenderWindow window(sf::VideoMode(SCREEN_X, SCREEN_Y), "Pacman");
	window.setFramerateLimit(60);

	while(window.isOpen()) {

		sf::Event event;
		while(window.pollEvent(event)) {
			if(event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::Blue);
		window.draw(ui);
		window.display();
	}

	return 0;
}