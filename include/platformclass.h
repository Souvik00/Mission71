#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include "texture&sprite.h"
using namespace sf;


class platformclass
{
    public:
        float Xpos=0;
        float Ypos=0;
        float Xvel=0;
        float Yvel=0;
        Sprite plat_image;
        Sprite Tree;

        platformclass(float intXpos, float intYpos,Sprite plat_sprite,Sprite tree);

};
