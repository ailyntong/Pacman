#include <iostream>
#include <SFML/Graphics.hpp>
#include <functional>

#include "Constants.h"
#include "Game.h"

bool key(sf::Keyboard::Key key) { 
	return sf::Keyboard::isKeyPressed(key); 
}

int main() {

	sf::RenderWindow window(sf::VideoMode(CELL_SIZE * NUM_COLS, CELL_SIZE * NUM_ROWS), "Pacman");
	window.setFramerateLimit(FRAMERATE_LIMIT);

	Game game;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		int dx = 0, dy = 0;

		if (key(sf::Keyboard::Up)) dy = -1;
		else if (key(sf::Keyboard::Down)) dy = 1;
		else if (key(sf::Keyboard::Left)) dx = -1;
		else if (key(sf::Keyboard::Right)) dx = 1;

		window.clear();

		game.update({ dx, dy });
		game.draw(&window);

		window.display();
	}

	std::cin.ignore();
	return 0;
}