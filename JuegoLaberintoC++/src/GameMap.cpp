#include "GameMap.h"
#include <iostream>

using namespace std;

GameMap::GameMap()
{
    //ctor
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
