/**
 * \file   Window.h
 * \brief  Plik nag³ówkowy klasy Window
*/

#ifndef WINDOW_H
#define WINDOW_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include "Global.h"

/**
 * \brief Klasa Window s³u¿¹ca do tworzenia okna.
 */
class Window :public sf::RenderWindow
{
	/** Wysokoœæ i szerokoœæ okna */
	int width, height;
	/** Nazwa okna */
	std::string nazwaOkna;
public:
	/**
	 * \brief Konstruktor klasy Window tworz¹cy okno.
	 * 
	 * \param Stirng Nazwa okna
	 * \param Int Wysokoœæ okna
	 * \param Int Szerokoœæ okna
	 */
	Window(std::string, int, int);
};

#endif