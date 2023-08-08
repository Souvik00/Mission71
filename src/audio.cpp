#include "audio.h"

Audio::Audio()
{
    //Menu sound
    menu_sound.openFromFile("Data/menu_sound.ogg");
    BG_sound.openFromFile("Data/bg.ogg");
    //fire sound
    fire_sound.loadFromFile("Data/fire.wav");
    Fire_sound.setBuffer(fire_sound);

}

