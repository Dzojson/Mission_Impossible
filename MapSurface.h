/**
 * \file   MapSurface.h
 * \brief  Plik nag³ókowy klasy Map Surface
*/
#ifndef MAPSURFACE_H
#define MAPSURFACE_H
#include "Tiles.h"

/**
 * \brief Klasa MapSurface dziedzicz¹ca po Tiles, tworzy powierzchnie mapy.
 */
class MapSurface : public Tiles
{
	friend class Tiles;
public:
	/**
	 * \brief Konstruktor tworz¹cy powierzchnie mapy.
	 * 
	 * \param posX Pozycja X
	 * \param posY Pozycja Y
	 * \param R Wartoœæ R w przestrzeni barw RGB
	 * \param G Wartoœæ G w przestrzeni barw RGB
	 * \param B Wartoœæ B w przestrzeni barw RGB
	 * \param n nazwa obiektu
	 * \param s slow 
	 */
	MapSurface(float, float, int, int, int, std::string, float);
	/**
	 * \brief Getter zwracaj¹cy wartoœæ slow.
	 * 
	 * \return slow
	 */
	float getSlow();
};

#endif


