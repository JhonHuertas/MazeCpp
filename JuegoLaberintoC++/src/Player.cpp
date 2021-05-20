#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}
 void Player::CallInput()
 {
     char UserImput = ' ';

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
     }
     cout << "Mi jugador esta en la coordenada: x = " << x <<" y = " << y << endl;
 }

