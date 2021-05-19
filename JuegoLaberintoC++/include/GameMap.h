#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "MapCell.h"

class GameMap
{
    public:
        GameMap();

        MapCell cells[15][10];

        void Draw();

        //Funcion que recibe las coordenadas de Player y actualiza el mapa
        void setPlayerCell(int PlayerX, int PlayerY);

    protected:

    private:
};

#endif // GAMEMAP_H
