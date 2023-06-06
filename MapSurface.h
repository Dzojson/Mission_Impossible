/**
 * \file   MapSurface.h
 * \brief  Plik nag��kowy klasy Map Surface
*/
#ifndef MAPSURFACE_H
#define MAPSURFACE_H
#include "Tiles.h"

/**
 * \brief Klasa MapSurface dziedzicz�ca po Tiles, tworzy powierzchnie mapy.
 */
class MapSurface : public Tiles
{
	friend class Tiles;
public:
	/**
	 * \brief Konstruktor tworz�cy powierzchnie mapy.
	 * 
	 * \param posX Pozycja X
	 * \param posY Pozycja Y
	 * \param R Warto�� R w przestrzeni barw RGB
	 * \param G Warto�� G w przestrzeni barw RGB
	 * \param B Warto�� B w przestrzeni barw RGB
	 * \param n nazwa obiektu
	 * \param s slow 
	 */
	MapSurface(float, float, int, int, int, std::string, float);
	/**
	 * \brief Getter zwracaj�cy warto�� slow.
	 * 
	 * \return slow
	 */
	float getSlow();
};

#endif


