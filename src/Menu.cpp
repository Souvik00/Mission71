#include "Menu.h"
using namespace sf;
Menu::Menu(float w,float h)
{
    if(!font.loadFromFile("abc.ttf"))
    {

    }
    menu[0].setFont(font);
    menu[0].setColor(Color::Red);
    menu[0].setString("Play");
    menu[0].setPosition(Vector2f(w/2,h/(MAX_NUMBER_OF_ITEMS+1)*1));

    menu[1].setFont(font);
    menu[1].setColor(Color::Green);
    menu[1].setString("Option");
    menu[1].setPosition(Vector2f(w/2,h/(MAX_NUMBER_OF_ITEMS+1)*2));

    menu[2].setFont(font);
    menu[2].setColor(Color::White);
    menu[2].setString("Exit");
    menu[2].setPosition(Vector2f(w/2,h/(MAX_NUMBER_OF_ITEMS+1)*3));

    si=0;
}

Menu::~Menu()
{
    //dtor
}
void Menu::draw(RenderWindow &window)
{
    for(int i=0;i<MAX_NUMBER_OF_ITEMS;i++)
    {
        window.draw(menu[i]);
    }
}
void Menu::MoveUp()
{
    if(si-1>=0)
    {
        menu[si].setColor(Color::Green);
        si--;
        menu[si].setColor(Color::Red);
    }
}
void Menu::MoveDown()
{
    if(si+1<MAX_NUMBER_OF_ITEMS)
    {
        menu[si].setColor(Color::Green);
        si++;
        menu[si].setColor(Color::Red);
    }
}
