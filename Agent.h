/**
 * \file   Agent.h
 * \brief  Plik nag��kowy klasy Agent
*/
#ifndef AGENT_H
#define AGENT_H
#include "Characters.h"
#include "Hero.h"
#include <iostream>
#include <math.h>

/**
 * \brief Klasa Agentd dziedzicz�ca po klasie Characters, tworzy obiekty Agent�w goni�cych Hero.
 */
class Agent : public Characters 
{
    /**  Zasi�g widzenia */
    int RangeOfView;
    /**  Pr�dko�� ruchu */
    float moveSpeed = 1;
    /**  Pozycje X i Y, fo kt�rych zmierzaj� */
    float goToX, goToY;
    /**  Pozycje starowe X i Y */
    float startX, startY;
    /** Pozycja X i Y  bohatera */
    float HeroPosX, HeroPosY;
    /** Zmienna przechowywuj�ca czy obiekt wie gdzie jest Hero */
    bool knowWhereHero = false;
public:
    /**
     * \brief Funkcja poruszaj�ca autonomicznie Agentem.
     * \param map Odwo�anie do GameTiles
     */
    void Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map); 
    /**
     * \brief Setter ustalaj�cu goToX i goToY.
     * 
     */
    void setAgentDirection();
    /**
     * \brief Setter ustalaj�cy startowe pozycje.
     * 
     * \param x startX - pozycja startowa X
     * \param y startY - pozycja startowa Y
     */
    void setStartPos(float,float);
    /**
     * \brief Funkcja sprawdzaj�ca gdzie jest bohater, je�eli Agent jest w odleg�o�ci 3 kratek ustawia knowWhereIsHero na True.
     * 
     * \param hero Odwo�anie do obiektu Hero
     */
    void checkWhereIsHero(Hero& hero);
    /**
     * \brief Destruktor klasy Agent.
     */
    ~Agent();
};
#endif