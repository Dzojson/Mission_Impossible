/**
 * \file   Hero.cpp
 * \brief  Plik Ÿród³owy klasy Hero
*/
#include "Hero.h"

float Hero::checkSlow(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& GameMap)
{
	float cell_x = positionX / TILE_SIZE;
	float cell_y = positionY / TILE_SIZE;
	for (unsigned char a = 0; a < 4; a++)
	{
		short x = 0;
		short y = 0;

		switch (a)
		{
			case 0:
			{
				x = floor(cell_x);
				y = floor(cell_y);

				break;
			}
			case 1:
			{
				x = ceil(cell_x);
				y = floor(cell_y);

				break;
			}
			case 2:
			{
				x = floor(cell_x);
				y = ceil(cell_y);

				break;
			}
			case 3:
			{
				x = ceil(cell_x);
				y = ceil(cell_y);
			}
		}
		if (0 <= x && 0 <= y && MAP_HEIGHT > y && MAP_WIDTH > x)
		{
			Tiles* wskT = &GameMap[x][y];
			MapSurface* wskM = static_cast<MapSurface*>(wskT);
			return wskM->getSlow();
		}
	}
}

void Hero::Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map)
{
	float moveSpeedTmp = this->moveSpeed + this->checkSlow(map);
	int tmp = 0;
	std::vector<bool> walls;
	walls.push_back(this->checkCollisionWithMap(positionX + moveSpeedTmp, positionY, map));
	walls.push_back(this->checkCollisionWithMap(positionX, positionY - moveSpeedTmp, map));
	walls.push_back(this->checkCollisionWithMap(positionX - moveSpeedTmp, positionY, map));
	walls.push_back(this->checkCollisionWithMap(positionX, positionY + moveSpeedTmp, map));


	if (1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && false == walls[0] && positionX < MAP_WIDTH * TILE_SIZE - TILE_SIZE)
	{
		moveDirection = 0;
		tmp = 0;
	}

	else if (1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && false == walls[1] && positionY >= 0)
	{
		moveDirection = 1;
		tmp = 1;
	}

	else if (1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && false == walls[2] && positionX >= 0)
	{
		moveDirection = 2;
		tmp = 2;
	}

	else if (1 == sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && false == walls[3] && positionY < MAP_HEIGHT * TILE_SIZE - TILE_SIZE)
	{
		moveDirection = 3;
		tmp = 3;
	}
	else
	{
		moveDirection = 4;
	}
	if (false == walls[tmp]) {
		switch (moveDirection)
			{
			case 0:
			{
				positionX += moveSpeedTmp;
				break;
			}
			case 1:
			{
				positionY -= moveSpeedTmp;
				break;
			}
			case 2:
			{
				positionX -= moveSpeedTmp;
				break;
			}
			case 3:
			{
				positionY += moveSpeedTmp;
				break;
			}
			case 4:
			{
				positionY += 0;
				positionX += 0;
			}
		}
	}
}

Hero::~Hero()
{
}

