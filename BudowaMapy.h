/**
 * \file   BudowaMapy.h
 * \brief  Plik nag��kowy klasy BudowaMapy
*/
#ifndef BUDOWAMAPY_H
#define BUDOWAMAPY_H
#include "Tiles.h"

/**
 * \brief Klasa BudowaMapy dziedzicz�ca po Tiles, tworz�ca �ciany.
 */
class BudowaMapy : public Tiles
{
public:
	/**
	 * \brief Konstruktor tworz�cy obiekt.
	 * 
	 * \param posX pozycja X na mapie
	 * \param posY pozycja Y na mapie
	 * \param R Warto�� R w przestrzeni barw RGB
	 * \param G Warto�� G w przestrzeni barw RGB
	 * \param B Warto�� B w przestrzeni barw RGB
	 * \param isWalkable warunek czy po kafelku da si� chodzi�
	 * \param n nazwa kafelka
	 */
	BudowaMapy(float, float, int, int, int, bool, std::string);
};
#endif