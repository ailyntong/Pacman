#include "PacmanUI.h"

#include <iostream>

PacmanUI::PacmanUI(const Board *_ptr, float _screen_x, float _screen_y) :
	_board{_ptr},
	SCREEN_X(_screen_x),
	SCREEN_Y{_screen_y},
	cell_side_x{SCREEN_X / NUM_COLS},
	cell_side_y{SCREEN_Y / NUM_ROWS} {
}

void PacmanUI::draw(sf::RenderTarget &target, sf::RenderStates states) const {
	draw_cells(target, states);
	draw_ghosts(target, states);
	draw_pacman(target, states);
}

void PacmanUI::draw_cells(sf::RenderTarget &target, sf::RenderStates states) const {
	for(int y = 0; y < NUM_ROWS; ++y) {
		for(int x = 0; x < NUM_COLS; ++x) {
			draw_cell_background(target, states, _board->grid()[x][y]);
			draw_cell_items(target, states, _board->grid()[x][y]);
		}
	}

}

void PacmanUI::draw_cell_background(sf::RenderTarget &target, sf::RenderStates states, const Cell &cell) const {
	sf::RectangleShape rect{{cell_side_x, cell_side_y}};
	rect.setPosition({cell.pos().x*cell_side_x, cell.pos().y*cell_side_y});
	switch(cell.state()) {
		case Cell::State::INVALID:
			std::cerr << "Invalid Cell" << std::endl;
			std::cin.ignore();
			break;
		case Cell::State::OPEN:
			rect.setFillColor(sf::Color{0xDEE2CEFF});
			break;
		case Cell::State::WALL:
			rect.setFillColor(sf::Color{0x13131BFF});
			break;
	}
	target.draw(rect);
}

void PacmanUI::draw_cell_items(sf::RenderTarget &target, sf::RenderStates states, const Cell &cell) const {

}

void PacmanUI::draw_pacman(sf::RenderTarget &target, sf::RenderStates states) const {

}

void PacmanUI::draw_ghosts(sf::RenderTarget &target, sf::RenderStates states) const {

}
