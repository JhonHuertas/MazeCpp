#include <iostream>

using namespace std;

void DrawMap(int HeroPosX, int HeroPosY, char GameMap[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int p = 0; p < 5; p++)
        {
            if (i == HeroPosX & p == HeroPosY)
            {
                cout << 'H';
            }
            else
                cout << GameMap[i][p];
        }
        cout << endl;
    }
}

int main()
{
    int HeroPosX = 0;
    int HeroPosY = 0;
    bool isGameOver = false;
    char Input = ' ';
    char GameMap[5][5] = 
    {
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '1', '1', '1', '1'}
    };    

    DrawMap(HeroPosX, HeroPosY, GameMap);

    while (isGameOver == false)
    {
        cin >> Input;

        switch (Input)
        {
        case 'd':
            if (HeroPosY < 4)
                HeroPosY = HeroPosY +1;   
            break;
        case 'a':
            if (HeroPosY > 0)
                HeroPosY = HeroPosY -1;
            break;
        case 'w':
            if (HeroPosX > 0)
                HeroPosX = HeroPosX -1;
            break;
        case 's':
            if (HeroPosX < 4)
                HeroPosX = HeroPosX +1;
            break;
        default:
            isGameOver = true;
            break;
        }
        DrawMap(HeroPosX, HeroPosY, GameMap);
        cout << endl;
    }
}