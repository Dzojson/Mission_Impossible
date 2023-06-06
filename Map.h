/**
 * \file   Map.h
 * \brief  Plik nag��kowy klasy Map
*/
#ifndef MAP_H
#define MAP_H

#include "Agent.h"
#include "Hero.h"
#include "BudowaMapy.h"
#include "MapSurface.h"

#include <fstream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
#include <array>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

/**
 * \brief Klasa Map tworz�ca mape.
 */
class Map
{
	/** Dwuwymiarowy array przechowywuj�cy Tiles */
	std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH> GameTiles;
public:
	/**
	 * \brief Funkcja s�u��ca do wczytania z pliku mapy.
	 * 
	 * \param bohater Odwo�anie do obiektu bohater
	 * \param agents Odwo�anie do tablicy obiekt�w agent
	 */
	void createMap(Hero& bohater, std::array<Agent ,4>& agents);
	/**
	 * \brief Funkcja tworz�ca mape.
	 * 
	 * \param window Odwo�anie do obiektu window
	 */
	void drawMap(sf::RenderWindow& window);
	/**
	 * \brief Getter zwracaj�cy argument GameTiles.
	 * 
	 * \return GameTiles
	 */
	std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& getMap();
};

#endif