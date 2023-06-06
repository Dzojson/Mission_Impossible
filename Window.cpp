/**
 * \file   Window.cpp
 * \brief  Plik Ÿród³owy klasy Window
*/
#include "Window.h"

Window::Window(std::string name = "Mission Impossible", int w = TILE_SIZE * WINDOW_HEIGHT, int h = TILE_SIZE * WINDOW_HEIGHT)
    :sf::RenderWindow(sf::VideoMode(w, h), name)
{
    nazwaOkna = name;
    width = w;
    height = h;
}
