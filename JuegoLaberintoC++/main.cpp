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

    Map.DrawIntro();
    Map.Draw();

    while(isGameOver == false)
    {
        //loop del juego
        Hero.CallInput();
        //Actualizando mapa con coordenadas del heroe
        if (Map.setPlayerCell(Hero.x, Hero.y))
        {
            //Aqui dibujamos el mapa
            Map.Draw();
        }
        else
        {
            Hero.ResetTosafePosition();
            Map.Draw();
        }
    }

    return 0;
}
