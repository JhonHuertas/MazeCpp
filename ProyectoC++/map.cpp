#include <iostream>
#include <fstream>

using namespace std;


void SaveLocation(int HeroPosX, int HeroPosY)
{
    ofstream MyFile("GameData.txt");
    string location = "";
    if (MyFile.is_open())
    {
        MyFile << "Ubicacion actual: " << endl;
        for (int i = HeroPosX; i > 0; i--)
        {
            MyFile << "r" << endl;
        }
        for (int i = HeroPosY; i > 0; i--)
        {
            MyFile << "c" << endl;
        }
    }
    MyFile.close();
}

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
        SaveLocation(HeroPosX, HeroPosY);
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

    ifstream MyFileRead("GameData.txt");
    string line;
    string NombreDelHeroe = "";
    int renglon = 0;

    if (MyFileRead.is_open())
    {
        while (getline(MyFileRead, line))
        {
            renglon = renglon + 1;
            if (renglon > 1)
            {
                if (line == "r")
                    HeroPosX = HeroPosX + 1;
                if (line == "c")
                    HeroPosY = HeroPosY + 1;
            }
        }    
    }
    else
    {
        cout << "No logre abrir mi archivo, checar el antivirus!!" << endl;
    }

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
            if (Input == 'r')
            {
                HeroPosX = 0;
                HeroPosY = 0;
            }
            else
                isGameOver = true;
            break;
        }
        DrawMap(HeroPosX, HeroPosY, GameMap);
        cout << endl;
    }
}
