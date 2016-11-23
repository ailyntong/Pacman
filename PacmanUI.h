#ifndef PACMAN_UI
#define PACMAN_UI

#include <SFML\Graphics.hpp>
#include "Constants.h"
#include "Board.h"

class PacmanUI : public sf::Drawable {
public:
	PacmanUI(const Board *_ptr, float _screen_x, float _screen_y);
private:
	const Board *_board;
	float SCREEN_X;
	float SCREEN_Y;
	float cell_side_x;
	float cell_side_y;

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const final override;

	void draw_cells(sf::RenderTarget &target, sf::RenderStates states) const;
	void draw_cell_background(sf::RenderTarget &target, sf::RenderStates states, const Cell &cell) const;
	void draw_cell_items(sf::RenderTarget &target, sf::RenderStates states, const Cell &cell) const;

	void draw_pacman(sf::RenderTarget &target, sf::RenderStates states) const;

	void draw_ghosts(sf::RenderTarget &target, sf::RenderStates states) const;

};

#endif