/**
 * \file   Agent.h
 * \brief  Plik nag³ókowy klasy Agent
*/
#ifndef AGENT_H
#define AGENT_H
#include "Characters.h"
#include "Hero.h"
#include <iostream>
#include <math.h>

/**
 * \brief Klasa Agentd dziedzicz¹ca po klasie Characters, tworzy obiekty Agentów goni¹cych Hero.
 */
class Agent : public Characters 
{
    /**  Zasiêg widzenia */
    int RangeOfView;
    /**  Prêdkoœæ ruchu */
    float moveSpeed = 1;
    /**  Pozycje X i Y, fo których zmierzaj¹ */
    float goToX, goToY;
    /**  Pozycje starowe X i Y */
    float startX, startY;
    /** Pozycja X i Y  bohatera */
    float HeroPosX, HeroPosY;
    /** Zmienna przechowywuj¹ca czy obiekt wie gdzie jest Hero */
    bool knowWhereHero = false;
public:
    /**
     * \brief Funkcja poruszaj¹ca autonomicznie Agentem.
     * \param map Odwo³anie do GameTiles
     */
    void Move(std::array <std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& map); 
    /**
     * \brief Setter ustalaj¹cu goToX i goToY.
     * 
     */
    void setAgentDirection();
    /**
     * \brief Setter ustalaj¹cy startowe pozycje.
     * 
     * \param x startX - pozycja startowa X
     * \param y startY - pozycja startowa Y
     */
    void setStartPos(float,float);
    /**
     * \brief Funkcja sprawdzaj¹ca gdzie jest bohater, je¿eli Agent jest w odleg³oœci 3 kratek ustawia knowWhereIsHero na True.
     * 
     * \param hero Odwo³anie do obiektu Hero
     */
    void checkWhereIsHero(Hero& hero);
    /**
     * \brief Destruktor klasy Agent.
     */
    ~Agent();
};
#endif