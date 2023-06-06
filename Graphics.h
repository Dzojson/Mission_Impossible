/**
 * \file   Graphics.h
 * \brief  Plik nag³ókowy klasy Graphics i G_Menu
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
	 * \brief Funkcja rysyuj¹ca prostok¹ty.
	 * 
	 * \param window Odwo³anie do obiektu window
	 * \param Int Wartoœæ R w przestrzeni barw RGB
	 * \param Int Wartoœæ G w przestrzeni barw RGB
	 * \param Int Wartoœæ B w przestrzeni barw RGB
	 * \param Float pozycja X w oknie
	 * \param Float pozycja Y w oknie
	 * \param Int szerokoœæ prostok¹tu
	 * \param Int wysokoœæ prostok¹tu
	 */
	void Draw(sf::RenderWindow& window, int, int, int, float, float, int, int);
};

/**
 * \brief Klasa G_Menu dziedzicz¹ca poublicznie po klasie Graphics i CreateText, rysuj¹ca widok okna z przyciskiem i tekstem.
 */
class G_Menu : public Graphics, public CreateText
{
public:
	/**
	 * \brief Funkcja rysuj¹ca Tekst i przycisk.
	 * 
	 * \param window Odwo³anie do obiektu window
	 */
	void Draw(sf::RenderWindow& window);
};

#endif
