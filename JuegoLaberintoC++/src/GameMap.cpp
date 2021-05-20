#include "GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap::GameMap()
{
    PlayerCell = NULL;
    LoadMapFromFile();
}
void GameMap ::Draw()
{
    for(int i = 0; i < 15; i++)
    {
        for(int p = 0; p < 10; p++)
        {
            cout << cells[i][p].id;
        }
        cout << endl;
    }

}

void GameMap::setPlayerCell(int PlayerY, int PlayerX)
{
    if(PlayerCell != NULL)
    {
        PlayerCell->id = 0;
    }
    PlayerCell = &cells[PlayerX][PlayerY];
    PlayerCell->id = 3;
}

void GameMap::LoadMapFromFile()
{
    ofstream FileCreated("Map.txt");
    if (FileCreated.is_open())
    {

    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE CREATED" << endl;
    }

    string line;
    ifstream MyFile("Map.txt");
    if (MyFile.is_open())
    {

    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED" << endl;
    }
}
