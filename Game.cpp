/**
 * \file   Game.cpp
 * \brief  Plik Ÿród³owy klasy Game
*/
#include "Game.h"

std::string Game::getScore()
{
	std::string scoreSTR;
	scoreSTR = std::to_string(score);
	return scoreSTR;
}

void Game::restartClock()
{
	clock.restart();
}

void Game::changeScore()
{
	sf::Time courentTime = clock.getElapsedTime();
	if ((courentTime.asSeconds()) > 1)
	{
		score++;
		Game::restartClock();
	}
}

bool Game::chceckStartGame()
{
	return startGame;
}

bool Game::mouseClick(sf::RenderWindow& window)
{
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
	{
		mousePos = sf::Mouse::getPosition(window);
		return true;
	}
	return false;
}

void Game::checkWhereIsClick()
{
	if (mousePos.x > 125 && mousePos.x < 275 && mousePos.y > 175 && mousePos.y < 220)
		startGame = true;
}

void Game::gameOver(float posXHero, float posYHero, float posXAgent, float posYAgent)
{
	if (posXHero == posXAgent && posYHero == posYAgent)
		isGameOver = true;
}

bool Game::checkIsGameOver()
{
	return isGameOver;
}
