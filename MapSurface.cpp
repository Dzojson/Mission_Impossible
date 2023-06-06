/**
 * \file   MapSurface.cpp
 * \brief  Plik Ÿród³owy klasy MapSurface
*/
#include "MapSurface.h"

MapSurface::MapSurface(float posX, float posY, int R, int G, int B, std::string n, float s)
{
	positionX = posX;
	positionY = posY;
	colorR = R;
	colorG = G;
	colorB = B;
	nazwa = n;
	slow = s;
}

float MapSurface::getSlow()
{
	return slow;
}
