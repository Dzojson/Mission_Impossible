/**
 * \file   Tiles.h
 * \brief  Plik nag³ókowy klasy Tiles
*/
#ifndef TILES_H
#define TILES_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <string>
#include "Graphics.h"
#include "Global.h"

/**
 * \brief Klasa Tiles, tworz¹ca ka¿y kwadracik na mapie.
 */
class Tiles
{
    friend class Map;
    /**  Grafika */
    Graphics graphics;
public:
    /**
     * \brief Getter zwracj¹cy czy po danym Tiles da sie chodziæ.
     * 
     * \return bool isWalkable
     */
    bool getWalkable();
protected:
    /**  Pozycja X i Y na mapie */
    float positionX, positionY;
    /** Zmienna, od której zale¿y czy po danym tTiles da siê chodziæ */
    bool isWalkable = true;
    /**  Wartoœæ R, G i B w przestrzeni barw RGB */
    int colorR, colorG, colorB;
    /** nazwa obiektu */
    std::string nazwa;
    /** spowlnie Hero */
    float slow = 0;
};

#endif
