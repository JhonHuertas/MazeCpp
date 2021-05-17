#include <iostream>

using namespace std;

void DrawMap(int HeroPos, char GameMap[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (i != HeroPos)
        {
            cout << GameMap[i];
        }
        else
        {
            cout << 'H';
        }
    }
}

int main()
{
    int HeroPos = 0;

    char GameMap[5] = {'1', '1', '1', '1', '1'};    
    
    DrawMap(HeroPos, GameMap);
}