/**
 * \file   Characters.h
 * \brief  Plik nag��wkowy klasy Characters
*/

#ifndef CHARACTERS_H
#define CHARACTERS_H

#include "Global.h"
#include "Tiles.h"
#include "MapSurface.h"

#include <array>
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

/**
 * \brief Klasa Characters dziedzicz�ca publicznie po klasie Tiles, jest klas� abstrakcyjn�.
 */
class Characters : public Tiles
{

public:
    /**
     * \brief Funkcja utsawiaj�ca Characters na wybranym polu w oknie.
     * 
     * \param x Pozycja X
     * \param y Pozycja Y
     */
    void SetPosition(float x, float y); 
    /**
     * \brief Funkcja wirtualna odpowiedzialna za ruch.
     * 
     * \param map Mapa, na kt�rej obiekty poruszaj� si�.
     */
    virtual void Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map) = 0;
    /**
     * \brief Funkcja sprawdzaj�ca czy obiekty mog� wej�c na TIles na Mapie.
     * 
     * \param x pozycja X
     * \param y pozycja Y
     * \param GameTiles Mapa
     * \return bool Czy mo�na wej�� na Tiles
     */
    bool checkCollisionWithMap(float, float, std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& GameTiles);
    /**
     * \brief Getter zwracaj�cy pozycje X.
     * 
     * \return positionX
     */
    float GivePosX();
    /**
     * \brief Getter zwracaj�cy pozycje Y.
     * 
     * \return positionY
     */
    float GivePosY();
    /**
     * \brief Destruktor klasy Characters.
     */
    virtual ~Characters();
protected:
    /** Kierunek ruchu */
    unsigned char moveDirection;
    /** Pr�dko�� ruchu */
    float moveSpeed;

};

#endif // CHARACTERS_H

