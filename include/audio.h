#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include<SFML/Audio.hpp>
using namespace sf;

class Audio
{
    public:
        //menu sound
        Music menu_sound;
        //fire sound
        SoundBuffer fire_sound;
        Sound Fire_sound;
        //BG music
        Music BG_sound;
        Audio();

};

