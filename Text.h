/**
 * \file   Text.h
 * \brief  Plik nag��wkowy klast Text
*/
#ifndef TEXT_H
#define TEXT_H
#include <SFML/Graphics.hpp>

/**
 * \brief Klasa Create Text s�u��ca do wypisywania tekstu w oknie.
 */
class CreateText
{
	/** Zmienna graficzna tekstu, kt�r� mo�na narysow�� w oknie */
	sf::Text source;
	/** Zmienna do �adowania czcionki */
	sf::Font font;
public:
	/**
	 * \brief Funkcja s�u��ca wypisuj�ca tekst w oknie.
	 * 
	 * \param window Okno, w kt�rym b�dzie wypisywany tekst.
	 * \param str Tekst do wypisania.
	 * \param Int Poszycja X w oknie.
	 * \param Int POzycja Y w oknie.
	 * \param Int Rozmiar czcionki
	 */
	void drawText(sf::RenderWindow& window, const sf::String& str, int, int, int);
};

#endif

