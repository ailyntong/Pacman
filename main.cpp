#include <iostream>
#include <SFML/Graphics.hpp>
#include <functional>

#include "Constants.h"
#include "Board.h"
#include "Pacman.h"

int main() {

	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * NUM_COLS, CELL_SIZE * NUM_ROWS), "Pacman");
	window.setFramerateLimit(FRAMERATE_LIMIT);

	Board board;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		board.update();
		board.draw(&window);

		window.display();
	}

	std::cin.ignore();
	return 0;
}