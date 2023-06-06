/**
 * \file   Text.cpp
 * \brief  Plik �r�d�owy klasy Text
*/
#include "Text.h"

void CreateText::drawText(sf::RenderWindow& window, const sf::String& str, int posX, int posY, int size)
{
	font.loadFromFile("font.ttf");
	source.setFont(font);
	source.setString(str);
	source.setCharacterSize(size);
	source.setPosition(posX, posY);
	window.draw(source);
}
