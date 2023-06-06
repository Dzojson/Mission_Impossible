/**
 * \file   Hero.h
 * \brief  Plik nag��kowy klasy Hero
*/
#ifndef HERO_H
#define HERO_H
#include "Characters.h"
#include "Global.h"
#include "MapSurface.h"

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <array>

/**
 * \brief Klasa Hero dziedzicz�ca po Characters, tworzy obiekt, kt�rym steruje gracz.
 */
class Hero : public Characters
{
	/** Pr�dko�� poruszania si� Hero */
	float moveSpeed = 2;

public:
	/**
	 * \brief Funkcja poruszania si� Hero, po przez strza�ki.
	 * 
	 * \param map Odwo�anie do obiektu GameTiles
	 */
	void Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map);
	/**
	 * \brief Funkcja sprawdzaj�ca spowlnienie powierzchni.
	 * 
	 * \param map Odwo�anie do obiektu GameTiles
	 * \return Zwraca spowolnienie - slow
	 */
	float checkSlow(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map);
	/**
	 * \brief Destruktor klasy Hero.
	 */
	~Hero();
};

#endif 