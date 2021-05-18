#include <iostream>

using namespace std;

void DrawMap(int HeroPosX, int HeroPosY, char GameMap[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int p = 0; p < 5; p++)
        {
            if (i != HeroPosX)
            {
                cout << GameMap[i][p];
            }
            else
            {
                if (p != HeroPosY)
                {
                    cout << GameMap[i][p];
                }
                else
                {
                    cout << 'H';
                }
            }
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

        if (Input == 'd')
        {
            HeroPosY = HeroPosY +1;
        }
        else if (Input == 'a')
        {
            HeroPosY = HeroPosY - 1;
        }
        else if (Input == 'p')
        {
            isGameOver = true;
        }

        DrawMap(HeroPosX, HeroPosY, GameMap);
    }
}