#pragma once
#include "platformclass.h"
#include"Bullet.h"
using namespace sf;
class Military
{
    public:
        Sprite military;
        Military(float x, float y, Sprite enemy);
        void setpos(Vector2f newpos);
        int checkColl(Bullet bullet);
        int getX();
        int getY();

};
