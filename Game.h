/**
 * \file   Game.h
 * \brief  Plik nag³ókowy klasy Game
*/

#ifndef GAME_H
#define GAME_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>
#include <iostream>

/**
 * \brief Klasa Gra odpowidzialna za rozpoczêcie i zakoñczenie gry oraz zlicznie wyniku.
 */
class Game
{
	/** Liczy up³yw czas */
	sf::Clock clock;
	/** Wynik */
	int score = 0;
	/** bool strtuje gre */
	bool startGame = false;
	/** bool koñczy gre */
	bool isGameOver = false;
	/** Vector przechowywuj¹cy pozycje X i Y myszki */
	sf::Vector2i mousePos;
public:
	/**
	 * \brief Getter zwracaj¹cy wynik w postaci stringa.
	 * 
	 * \return scoreSTR
	 */
	std::string getScore();
	/**
	 * \brief funkcaj restartuj¹ca licznik czasu.
	 */
	void restartClock();
	/**
	 * Funkcja zmieniaj¹ca wynik na podstawie up³ywu czasu.
	 */
	void changeScore();
	/**
	 * \brief Getter zwracaj¹cy czy gra siê rozpczê³a.
	 * \return startGame
	 */
	bool chceckStartGame();
	/**
	 * \brief Getter zwracaj¹cy czy gra siê skoñczy³a.
	 * \return isGameOver
	 */
	bool checkIsGameOver();
	/**
	 * \brief Funkcja zwracaj¹ca czy myszka zosta³a klikniêta.
	 * \return bool
	 */
	bool mouseClick(sf::RenderWindow& window);
	/**
	 * \brief Funkcja sprawdzaj¹ca gdzie jest klikniêcie myszki.
	 */
	void checkWhereIsClick();
	/**
	 * \brief Funkcja, która posaiada warunek koñca gry.
	 */
	void gameOver(float, float, float, float);
};

#endif

