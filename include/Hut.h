#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include "texture&sprite.h"
using namespace sf;

class Hut
{
    public:
        Sprite Hut_1;
        Sprite Jungle;
        Hut(float x, float y, Sprite hut,Sprite jungle);
};
