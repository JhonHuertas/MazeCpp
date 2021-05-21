#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        void CallInput();


        void ResetTosafePosition();

        int x, y;

        int lastX, lastY;

    protected:
        void SaveLocation();

    private:
};

#endif // PLAYER_H
