#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main()
{
    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    while(isGameOver == false)
    {
        //loop del juego
        Map.Draw();
        Hero.CallInput();
    }

    return 0;
}
