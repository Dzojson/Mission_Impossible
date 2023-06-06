/**
 * \file   MissionImposible1.cpp
 * \brief  Plik źródłowy main programu Mission Imposible.
 * 
 * \author Jan Gawroński
 * \date   Czerwiec 2022
*/

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "Map.h"
#include "Game.h"
#include "Global.h"
#include "Tiles.h"
#include "Characters.h"
#include "Window.h"
#include "Hero.h"
#include "Agent.h"
#include "Graphics.h"
#include "Text.h"

 /**
 *\mainpage
 *\par Mission Impossible
 * Gra Mission Impossible polegająca na uciekaniu bohaterem przed agentami. Sterowanie bohaterem odbywa się za pomocą strzałek na klawiaturze.
 * Celem gracza jest zdobycie jak najwięszego wyniku. Wynik jest zwięszany o 1 punkt za każdą przeżytą sekunde przez gracza.
 * \author Jan Gawroński
 * \date Czerwiec 2022
 * \version 1.0
 */


int main()
{
	Game game;
	Map map;
	Window window("Mission Impossible", TILE_SIZE * WINDOW_WIDTH, TILE_SIZE * WINDOW_HEIGHT);
	Hero bohater;
	std::array<Agent, 4> agents;
	Characters* wsk;
	Graphics graphics;
	G_Menu g_menu;
	CreateText text;

	window.setFramerateLimit(60);
	window.setVerticalSyncEnabled(true);

	map.createMap(bohater, agents);
	std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH> GameMap;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear();
		if (game.chceckStartGame() == false)
		{
			g_menu.Draw(window);
			if (game.mouseClick(window) == true)
			{
				game.checkWhereIsClick();
				game.restartClock();
			}
		}
		else if (game.chceckStartGame() == true && game.checkIsGameOver() == false)
		{
			wsk = &bohater;
			map.drawMap(window);

			GameMap = map.getMap();

			wsk->Move(map.getMap());
			graphics.Draw(window, 255, 255, 0, bohater.GivePosX(), bohater.GivePosY(), TILE_SIZE, TILE_SIZE);
			for (unsigned char i = 0; i < 4; i++)
			{
				wsk = &agents[i];
				agents[i].setAgentDirection();
				wsk->Move(map.getMap());
				graphics.Draw(window, 0, 0, 0, agents[i].GivePosX(), agents[i].GivePosY(), TILE_SIZE, TILE_SIZE);
				agents[i].checkWhereIsHero(bohater);
				game.gameOver(bohater.GivePosX(), bohater.GivePosY(), agents[i].GivePosX(), agents[i].GivePosY());
			}
			game.changeScore();
			text.drawText(window, "Score " + game.getScore(), 160, 420, 24);
		}
		if (game.checkIsGameOver() == true)
		{
			text.drawText(window, "You    lost", 130, 210, 40);
			text.drawText(window, "Your    score   " + game.getScore(), 135, 245, 24);
		}
		window.display();
	}

	return 0;
}
