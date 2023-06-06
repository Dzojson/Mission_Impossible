/**
 * \file   Characters.h
 * \brief  Plik nag³ówkowy klasy Characters
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
 * \brief Klasa Characters dziedzicz¹ca publicznie po klasie Tiles, jest klas¹ abstrakcyjn¹.
 */
class Characters : public Tiles
{

public:
    /**
     * \brief Funkcja utsawiaj¹ca Characters na wybranym polu w oknie.
     * 
     * \param x Pozycja X
     * \param y Pozycja Y
     */
    void SetPosition(float x, float y); 
    /**
     * \brief Funkcja wirtualna odpowiedzialna za ruch.
     * 
     * \param map Mapa, na której obiekty poruszaj¹ siê.
     */
    virtual void Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map) = 0;
    /**
     * \brief Funkcja sprawdzaj¹ca czy obiekty mog¹ wejœc na TIles na Mapie.
     * 
     * \param x pozycja X
     * \param y pozycja Y
     * \param GameTiles Mapa
     * \return bool Czy mo¿na wejœæ na Tiles
     */
    bool checkCollisionWithMap(float, float, std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& GameTiles);
    /**
     * \brief Getter zwracaj¹cy pozycje X.
     * 
     * \return positionX
     */
    float GivePosX();
    /**
     * \brief Getter zwracaj¹cy pozycje Y.
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
    /** Prêdkoœæ ruchu */
    float moveSpeed;

};

#endif // CHARACTERS_H

