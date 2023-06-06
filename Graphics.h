/**
 * \file   Graphics.h
 * \brief  Plik nag��kowy klasy Graphics i G_Menu
*/

#ifndef GRAPHICS_H
#define GRAPHICS_H
#include "Global.h"
#include "Text.h"
#include <SFML/Graphics.hpp>

/**
 * \brief Klasa Graphics odpowiedzialna za tworzenie grafiki w oknie.
 */
class Graphics
{
public:
	/**
	 * \brief Funkcja rysyuj�ca prostok�ty.
	 * 
	 * \param window Odwo�anie do obiektu window
	 * \param Int Warto�� R w przestrzeni barw RGB
	 * \param Int Warto�� G w przestrzeni barw RGB
	 * \param Int Warto�� B w przestrzeni barw RGB
	 * \param Float pozycja X w oknie
	 * \param Float pozycja Y w oknie
	 * \param Int szeroko�� prostok�tu
	 * \param Int wysoko�� prostok�tu
	 */
	void Draw(sf::RenderWindow& window, int, int, int, float, float, int, int);
};

/**
 * \brief Klasa G_Menu dziedzicz�ca poublicznie po klasie Graphics i CreateText, rysuj�ca widok okna z przyciskiem i tekstem.
 */
class G_Menu : public Graphics, public CreateText
{
public:
	/**
	 * \brief Funkcja rysuj�ca Tekst i przycisk.
	 * 
	 * \param window Odwo�anie do obiektu window
	 */
	void Draw(sf::RenderWindow& window);
};

#endif
