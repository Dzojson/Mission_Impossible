/**
 * \file   Window.h
 * \brief  Plik nag��wkowy klasy Window
*/

#ifndef WINDOW_H
#define WINDOW_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include "Global.h"

/**
 * \brief Klasa Window s�u��ca do tworzenia okna.
 */
class Window :public sf::RenderWindow
{
	/** Wysoko�� i szeroko�� okna */
	int width, height;
	/** Nazwa okna */
	std::string nazwaOkna;
public:
	/**
	 * \brief Konstruktor klasy Window tworz�cy okno.
	 * 
	 * \param Stirng Nazwa okna
	 * \param Int Wysoko�� okna
	 * \param Int Szeroko�� okna
	 */
	Window(std::string, int, int);
};

#endif