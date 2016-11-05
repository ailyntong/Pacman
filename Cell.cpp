#include "Cell.h"

Cell::Cell(State state) :
	state(state),
	cell(sf::Vector2f(CELL_SIZE, CELL_SIZE))
{
	occupant = NULL;
	set_state(state);

	cell.setFillColor(color);
	cell.setPosition(sf::Vector2f(pos.y * CELL_SIZE, pos.x * CELL_SIZE));
}

Cell::~Cell() {

}

void Cell::set_state(State state) {
	this->state = state;

	switch (this->state) {
	case (EMPTY):
		color = sf::Color::Color(EMPTY_COLOR);
		break;
	case (WALL):
		color = sf::Color::Color(WALL_COLOR);
		break;
	case (FOOD):
		color = sf::Color::Color(FOOD_COLOR);
		break;
	case (ENERGIZER):
		color = sf::Color::Color(ENERGIZER_COLOR);
		break;
	default:
		color = sf::Color::Color(EMPTY_COLOR);
		break;
	}

	cell.setFillColor(color);
}

void Cell::draw(sf::RenderWindow *window) {
	if (state == FOOD) {
		sf::RectangleShape temp{ cell };
		temp.scale({ .25f, .25f });
		temp.setPosition({ (float)(cell.getPosition().x + CELL_SIZE * 3.0 / 8.0), (float)(cell.getPosition().y + CELL_SIZE * 3.0 / 8.0) });
		window->draw(temp);
	}
	else {
		window->draw(cell);
	}
}