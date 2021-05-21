#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player::SaveLocation()
{
    ofstream MyFile("GameMapPos.txt");
    string location = "";
    if (MyFile.is_open())
    {
        MyFile << "Ubicacion actual: " << endl;
        for (int i = x; i > 0; i--)
        {
            MyFile << "r" << endl;
        }
        for (int i = y; i > 0; i--)
        {
            MyFile << "c" << endl;
        }
    }
    MyFile.close();
}

 void Player::CallInput()
 {
     char UserImput;

     lastX = x;
     lastY = y;

     cin >> UserImput;

     switch(UserImput)
     {
        case 'w':
                y -= 1;
            break;
        case 's':
                y += 1;
            break;
        case 'd':
                x += 1;
            break;
        case 'a':
                x -= 1;
            break;
        case 'r':
            {
                x = 1;
                y = 1;
            }
            break;
     }
     cout << "Mi jugador esta en la coordenada: x = " << x <<" y = " << y << endl;

     void SaveLocation();
 }

void Player::ResetTosafePosition()
{
    x = lastX;
    y = lastY;
}
