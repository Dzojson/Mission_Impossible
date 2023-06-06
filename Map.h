/**
 * \file   Map.h
 * \brief  Plik nag³ókowy klasy Map
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
 * \brief Klasa Map tworz¹ca mape.
 */
class Map
{
	/** Dwuwymiarowy array przechowywuj¹cy Tiles */
	std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH> GameTiles;
public:
	/**
	 * \brief Funkcja s³u¿¹ca do wczytania z pliku mapy.
	 * 
	 * \param bohater Odwo³anie do obiektu bohater
	 * \param agents Odwo³anie do tablicy obiektów agent
	 */
	void createMap(Hero& bohater, std::array<Agent ,4>& agents);
	/**
	 * \brief Funkcja tworz¹ca mape.
	 * 
	 * \param window Odwo³anie do obiektu window
	 */
	void drawMap(sf::RenderWindow& window);
	/**
	 * \brief Getter zwracaj¹cy argument GameTiles.
	 * 
	 * \return GameTiles
	 */
	std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& getMap();
};

#endif