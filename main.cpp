#include <SFML/Graphics.hpp>
#include <iostream>

#include "Constants.h"
#include "Board.h"

int main() {
	std::cout << "test" << std::endl;
	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * NUM_COLS, CELL_SIZE * NUM_ROWS), "Pacman");
	window.setFramerateLimit(30);

	Board board;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		board.draw(&window);

		window.display();
	}

	std::cin.ignore();
	return 0;
}