/**
 * \file   Hero.h
 * \brief  Plik nag³ókowy klasy Hero
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
 * \brief Klasa Hero dziedzicz¹ca po Characters, tworzy obiekt, którym steruje gracz.
 */
class Hero : public Characters
{
	/** Prêdkoœæ poruszania siê Hero */
	float moveSpeed = 2;

public:
	/**
	 * \brief Funkcja poruszania siê Hero, po przez strza³ki.
	 * 
	 * \param map Odwo³anie do obiektu GameTiles
	 */
	void Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map);
	/**
	 * \brief Funkcja sprawdzaj¹ca spowlnienie powierzchni.
	 * 
	 * \param map Odwo³anie do obiektu GameTiles
	 * \return Zwraca spowolnienie - slow
	 */
	float checkSlow(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map);
	/**
	 * \brief Destruktor klasy Hero.
	 */
	~Hero();
};

#endif 