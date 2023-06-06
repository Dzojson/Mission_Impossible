/**
 * \file   BudowaMapy.cpp
 * \brief  Plik Ÿród³owy klasy BudowaMapy
*/
#include "BudowaMapy.h"


BudowaMapy::BudowaMapy(float posX, float posY, int R, int G, int B, bool walkable, std::string n)
{
	positionX = posX;
	positionY = posY;
	colorR = R;
	colorG = G;
	colorB = B;
	nazwa = n;
	isWalkable = walkable;
}
