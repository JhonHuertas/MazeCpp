#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();

        MapCell* PlayerCell;
        MapCell cells[15][10];

        void DrawIntro();
        void DrawVictory();
        void Draw();

        //Funcion que recibe las coordenadas de Player y actualiza el mapa
        bool setPlayerCell(int PlayerY, int PlayerX);

        bool isGameOver = false;

    protected:
        void LoadMapFromFile();

    private:
};

#endif // GAMEMAP_H
