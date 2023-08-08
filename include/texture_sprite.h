#pragma once
#include "platformclass.h"
using namespace sf;

class texture_sprite
{
    public:
        //player
        Texture player_1;
        Sprite player_sprite;

        //BackGround
        Texture background;
        Sprite Background;

        //////////platform
        //plane
        Texture plane;
        Sprite Plane;
        //before Rever
        Texture b_rev;
        Sprite B_rev;
        //Rever
        Texture rev;
        Sprite Rev;
        //after rever
        Texture a_rev;
        Sprite A_rev;
        //Bridge
        Texture bridge;
        Sprite Bridge;
        //Fire
        Texture fire;
        Sprite Fire;
        //line
        Texture line;
        Sprite Line;

        //Tree
        Texture tree;
        Sprite Tree;
        //Hut
        Texture hut;
        Sprite Hut;
        //Jungle
        Texture jungle;
        Sprite Jungle;
        //enemy
        Texture enemy;
        Sprite Enemy;
        //Delivary
        Texture player_2;
        Sprite Player_2;
        //Camp
        Texture camp;
        Sprite Camp;
        //Flag
        Texture flag;
        Sprite Flag_1;
        Sprite Flag_2;

        //level complete
        Texture complete;
        Sprite Complete;

        //Gameover
        Texture g_over;
        Sprite G_over;

        texture_sprite();
};
