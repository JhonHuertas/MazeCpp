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
                x -= 1;
                cout << "El jugador se mueve arriba" << endl;
            break;
        case 's':
                x += 1;
                cout << "El jugador se mueve abajo" << endl;
            break;
        case 'd':
                y += 1;
                cout << "El jugador se mueve derecha" << endl;
            break;
        case 'a':
                y -= 1;
                cout << "El jugador se mueve izquierda" << endl;
            break;
     }
     cout << "Mi jugador esta en la coordenada: x = " << x <<" y = " << y << endl;
 }

