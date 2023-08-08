#ifndef MENU_H
#define MENU_H
#pragma once
#include "SFML/Graphics.hpp"
#define MAX_NUMBER_OF_ITEMS 3
using namespace sf;
class Menu
{
    public:
        Menu(float w,float h);
        virtual ~Menu();
        void draw(RenderWindow &window);
        void MoveUp();
        void MoveDown();
        int GetPressedItem()
        {
            return si;
        }

    private:
        int si;
        Font font;
        Text menu[MAX_NUMBER_OF_ITEMS];
};

#endif // MENU_H
