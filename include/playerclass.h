#pragma once
#include "platformclass.h"

class playerclass
{
    public:
        float xpos;
        float ypos;
        float xvel;
        float yvel;
        Sprite image;
        Sprite BG;
        Sprite image_2;
        bool col =false;
        playerclass(Sprite sprite , Sprite bg ,Sprite player_2);
        void update(bool up, bool down, bool right, bool left, platformclass pltform[]);
};
