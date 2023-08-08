#include "Hut.h"

Hut::Hut(float x, float y, Sprite hut , Sprite jungle)
{
    Hut_1 = hut;
    Jungle = jungle;
    Hut_1.setPosition(x,y);
    Jungle.setPosition(x-300,245);
}
