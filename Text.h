/**
 * \file   Text.h
 * \brief  Plik nag³ówkowy klast Text
*/
#ifndef TEXT_H
#define TEXT_H
#include <SFML/Graphics.hpp>

/**
 * \brief Klasa Create Text s³u¿¹ca do wypisywania tekstu w oknie.
 */
class CreateText
{
	/** Zmienna graficzna tekstu, któr¹ mo¿na narysow¹æ w oknie */
	sf::Text source;
	/** Zmienna do ³adowania czcionki */
	sf::Font font;
public:
	/**
	 * \brief Funkcja s³u¿¹ca wypisuj¹ca tekst w oknie.
	 * 
	 * \param window Okno, w którym bêdzie wypisywany tekst.
	 * \param str Tekst do wypisania.
	 * \param Int Poszycja X w oknie.
	 * \param Int POzycja Y w oknie.
	 * \param Int Rozmiar czcionki
	 */
	void drawText(sf::RenderWindow& window, const sf::String& str, int, int, int);
};

#endif

