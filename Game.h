/**
 * \file   Game.h
 * \brief  Plik nag��kowy klasy Game
*/

#ifndef GAME_H
#define GAME_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>
#include <iostream>

/**
 * \brief Klasa Gra odpowidzialna za rozpocz�cie i zako�czenie gry oraz zlicznie wyniku.
 */
class Game
{
	/** Liczy up�yw czas */
	sf::Clock clock;
	/** Wynik */
	int score = 0;
	/** bool strtuje gre */
	bool startGame = false;
	/** bool ko�czy gre */
	bool isGameOver = false;
	/** Vector przechowywuj�cy pozycje X i Y myszki */
	sf::Vector2i mousePos;
public:
	/**
	 * \brief Getter zwracaj�cy wynik w postaci stringa.
	 * 
	 * \return scoreSTR
	 */
	std::string getScore();
	/**
	 * \brief funkcaj restartuj�ca licznik czasu.
	 */
	void restartClock();
	/**
	 * Funkcja zmieniaj�ca wynik na podstawie up�ywu czasu.
	 */
	void changeScore();
	/**
	 * \brief Getter zwracaj�cy czy gra si� rozpcz�a.
	 * \return startGame
	 */
	bool chceckStartGame();
	/**
	 * \brief Getter zwracaj�cy czy gra si� sko�czy�a.
	 * \return isGameOver
	 */
	bool checkIsGameOver();
	/**
	 * \brief Funkcja zwracaj�ca czy myszka zosta�a klikni�ta.
	 * \return bool
	 */
	bool mouseClick(sf::RenderWindow& window);
	/**
	 * \brief Funkcja sprawdzaj�ca gdzie jest klikni�cie myszki.
	 */
	void checkWhereIsClick();
	/**
	 * \brief Funkcja, kt�ra posaiada warunek ko�ca gry.
	 */
	void gameOver(float, float, float, float);
};

#endif

