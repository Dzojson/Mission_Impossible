/**
 * \file   Characters.cpp
 * \brief  Plik Ÿród³owy klasy Characters
*/
#include "Characters.h"


void Characters::SetPosition(float x, float y)
{
	positionX = x;
	positionY = y;
}

bool Characters::checkCollisionWithMap(float x, float y, std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& GameTiles)
{
	float cell_x = x / TILE_SIZE;
	float cell_y = y / TILE_SIZE;
	//Postaæ mo¿e znajdowaæ siê na 4 komórkach na raz
	for (unsigned char a = 0; a < 4; a++)
	{
		short x = 0;
		short y = 0;

		switch (a)
		{
		case 0: //lewy górny kwadrat
		{
			x = floor(cell_x);
			y = floor(cell_y);

			break;
		}
		case 1: //prawy górny kwadrat
		{
			x = ceil(cell_x);
			y = floor(cell_y);

			break;
		}
		case 2: //lewy dolny kwadrat
		{
			x = floor(cell_x);
			y = ceil(cell_y);

			break;
		}
		case 3: //prawy dolny kwadrat
		{
			x = ceil(cell_x);
			y = ceil(cell_y);
		}
		}
		if (0 <= x && 0 <= y && MAP_HEIGHT > y && MAP_WIDTH > x)
		{
			if (GameTiles[x][y].getWalkable() == false)
			{
				
				return true;
			}
		}
	}
	return false;
}

float Characters::GivePosX()
{
	return positionX;
}

float Characters::GivePosY()
{
	return positionY;
}

Characters::~Characters()
{
}
