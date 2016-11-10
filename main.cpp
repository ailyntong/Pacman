#include <SFML/Graphics.hpp>
#include <iostream>

#include "Constants.h"

int main() {

	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * NUM_COLS, CELL_SIZE * NUM_ROWS), "Pacman");
	window.setFramerateLimit(30);

	sf::CircleShape circle(100.f);
	circle.setFillColor(sf::Color::Green);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(circle);

		window.display();
	}

	std::cin.ignore();
	return 0;
}