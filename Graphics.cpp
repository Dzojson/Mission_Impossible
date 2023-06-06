/**
 * \file   Graphics.cpp
 * \brief  Plik Ÿród³owy klasy Graphics i G_Menu
*/
#include "Graphics.h"


void Graphics::Draw(sf::RenderWindow& window, int R, int G, int B, float posX, float posY, int sizeX, int sizeY)
{
	sf::RectangleShape TileShape(sf::Vector2f(sizeX, sizeY));
	TileShape.setFillColor(sf::Color(R, G, B));
	TileShape.setPosition(posX, posY);

	window.draw(TileShape);
}


void G_Menu::Draw(sf::RenderWindow& window)
{
	CreateText::drawText(window, "Mission   Imposible", 80, 140, 24);
	Graphics::Draw(window, 255, 255, 255, 125, 175, 150, 45);
	Graphics::Draw(window, 0, 0, 0, 130, 180, 140, 35);
	CreateText::drawText(window, "start", 165, 180, 24);
}
