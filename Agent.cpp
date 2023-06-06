/**
 * \file   Agent.cpp
 * \brief  Plik Ÿród³owy klasy Agent
*/
#include "Agent.h"

void Agent::Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map)
{
	std::vector<bool> walls;
	walls.push_back(this->checkCollisionWithMap(positionX + this->moveSpeed, positionY, map));
	walls.push_back(this->checkCollisionWithMap(positionX - this->moveSpeed, positionY, map));
	walls.push_back(this->checkCollisionWithMap(positionX, positionY - this->moveSpeed, map));
	walls.push_back(this->checkCollisionWithMap(positionX, positionY + this->moveSpeed, map));

	if (goToX > positionX && walls[0] == false)
		moveDirection = 0;
	else if (goToX > positionX && walls[0] == true && goToY < positionY && walls[1] == true)
		moveDirection = 2;
	if (goToX < positionX && walls[1] == false)
		moveDirection = 1;

	if (walls[moveDirection] == false)
	{
		switch (moveDirection)
		{
			case 0:
			{
				positionX += moveSpeed;
				break;
			}
			case 1:
			{
				positionX -= moveSpeed;
			}
		}
	}

	if (goToY < positionY && walls[2] == false)
		moveDirection = 2;
	else if (goToY > positionY && walls[3] == false)
		moveDirection = 3;

	if (walls[moveDirection] == false) {
		switch (moveDirection)
		{

			case 2:
			{
				positionY -= moveSpeed;
				break;
			}
			case 3:
			{
				positionY += moveSpeed;
			}
		}
	}
}


void Agent::setAgentDirection()
{
	if (knowWhereHero == false)
	{
		if (positionX == startX && positionY == startY)
		{
			goToX = MAP_WIDTH * TILE_SIZE - startX;
			goToY = MAP_HEIGHT * TILE_SIZE - startY;
		}
		if(positionX == goToX && positionY == goToY)
		{
			goToX = MAP_WIDTH * TILE_SIZE - startX;
			goToY = MAP_HEIGHT * TILE_SIZE - startY;
		}
		
	}
	else if (knowWhereHero == true)
	{
		goToX = HeroPosX;
		goToY = HeroPosY;
	}
}

void Agent::checkWhereIsHero(Hero& hero)
{
	float x, y;
	x = hero.GivePosX();
	y = hero.GivePosY();
	

	if ((3*TILE_SIZE) > sqrt(pow((x - positionX), 2) + pow((y - positionY), 2)))
	{
		knowWhereHero = true;
		HeroPosX = x;
		HeroPosY = y;

	}
	else
	{
		knowWhereHero = false;
	}
	
}

Agent::~Agent()
{
}

void Agent::setStartPos(float x, float y)
{
	startX = x;
	startY = y;
}
