/**
 * \file   Map.cpp
 * \brief  Plik Ÿród³owy klasy Map
*/
#include "Map.h"


void Map::createMap( Hero& bohater, std::array<Agent, 4>& agents)
{
    std::array <std::array<Tiles, MAP_WIDTH>, MAP_HEIGHT> mapTiles;

    std::ifstream openfile("Mapa.txt");
    if (openfile.is_open())
    {
        std::string line;
        unsigned char lineCount = 0;
        while (std::getline(openfile, line))
        {
            for (unsigned char column = 0; column < line.length(); column++)
            {
                switch (line[column])
                {
                    case '#':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 86, 200, 70, "Grass", 0);
                        mapTiles[column][lineCount] = tile;
                        break;
                    }
                    case 'W':
                    {

                        BudowaMapy tile(column * TILE_SIZE, lineCount * TILE_SIZE, 43, 29, 20, false, "Wall");
                        mapTiles[column][lineCount] = tile;
                        break;
                    }
                    case 'B':
                    {
                        BudowaMapy tile(column * TILE_SIZE, lineCount * TILE_SIZE, 9, 105, 80, false, "Bush");
                        mapTiles[column][lineCount] = tile;
                        break;
                    }
                    case 'S':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 205, 170, 109, "Sand", -1);
                        mapTiles[column][lineCount] = tile;
                        break;
                    }
                    case 'P':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 64, 64, 64, "Pave", 1);
                        mapTiles[column][lineCount] = tile;
                        break;
                    }
                    case '1':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 86, 200, 70, "Grass", 0);
                        mapTiles[column][lineCount] = tile;
                        agents[0].SetPosition(column * TILE_SIZE, lineCount * TILE_SIZE);
                        agents[0].setStartPos(column * TILE_SIZE, lineCount * TILE_SIZE);
                        break;
                    }
                    case '2':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 86, 200, 70, "Grass", 0);
                        mapTiles[column][lineCount] = tile;
                        agents[1].SetPosition(column * TILE_SIZE, lineCount * TILE_SIZE);
                        agents[1].setStartPos(column * TILE_SIZE, lineCount * TILE_SIZE);
                        break;
                    }
                    case '3':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 86, 200, 70, "Grass",0);
                        mapTiles[column][lineCount] = tile;
                        agents[2].SetPosition(column * TILE_SIZE, lineCount * TILE_SIZE);
                        agents[2].setStartPos(column * TILE_SIZE, lineCount * TILE_SIZE);
                        break;
                    }
                    case '4':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 86, 200, 70, "Grass",0);
                        mapTiles[column][lineCount] = tile;
                        agents[3].SetPosition(column * TILE_SIZE, lineCount * TILE_SIZE);
                        agents[3].setStartPos(column * TILE_SIZE, lineCount * TILE_SIZE);
                        break;
                    }
                    case 'H':
                    {
                        MapSurface tile(column * TILE_SIZE, lineCount * TILE_SIZE, 86, 200, 70, "Grass",0);
                        mapTiles[column][lineCount] = tile;
                        bohater.SetPosition(column * TILE_SIZE, lineCount * TILE_SIZE);
                    }
                }
            }
            lineCount++;
        }
    }
    else {
        std::cout << "blad otwarcia pliku\n";
    }
    GameTiles = mapTiles;
}


void Map::drawMap(sf::RenderWindow& window)
{
    char tmp;
    for (unsigned char a = 0; a < MAP_WIDTH; a++)
    {
        for (unsigned char b = 0; b < MAP_HEIGHT; b++)
        {   
            GameTiles[a][b].graphics.Draw(window, GameTiles[a][b].colorR, GameTiles[a][b].colorG, GameTiles[a][b].colorB, a * TILE_SIZE, b * TILE_SIZE, TILE_SIZE, TILE_SIZE);
        }
    }
}

std::array<std::array<Tiles, MAP_HEIGHT>, MAP_WIDTH>& Map::getMap()
{
    return GameTiles;
}
