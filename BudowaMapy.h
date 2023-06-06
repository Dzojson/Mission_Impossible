/**
 * \file   BudowaMapy.h
 * \brief  Plik nag³ókowy klasy BudowaMapy
*/
#ifndef BUDOWAMAPY_H
#define BUDOWAMAPY_H
#include "Tiles.h"

/**
 * \brief Klasa BudowaMapy dziedzicz¹ca po Tiles, tworz¹ca œciany.
 */
class BudowaMapy : public Tiles
{
public:
	/**
	 * \brief Konstruktor tworz¹cy obiekt.
	 * 
	 * \param posX pozycja X na mapie
	 * \param posY pozycja Y na mapie
	 * \param R Wartoœæ R w przestrzeni barw RGB
	 * \param G Wartoœæ G w przestrzeni barw RGB
	 * \param B Wartoœæ B w przestrzeni barw RGB
	 * \param isWalkable warunek czy po kafelku da siê chodziæ
	 * \param n nazwa kafelka
	 */
	BudowaMapy(float, float, int, int, int, bool, std::string);
};
#endif