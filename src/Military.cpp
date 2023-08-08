#include "Military.h"
#include "platformclass.h"
#include"Bullet.h"
using namespace sf;
Military::Military(float x, float y , Sprite enemy)
{
    military = enemy;
    military.setPosition(x,y);
}
void Military::setpos(Vector2f newpos)
{
    military.setPosition(newpos);
}
int Military::checkColl(Bullet bullet)
{
    if(bullet.getRight()>military.getPosition().x&&bullet.getTop()<military.getPosition().y+100&&bullet.getBottom()>military.getPosition().y)
    {
        military.setPosition(Vector2f(4234432,4234423));
        return 1;
    }
}
int Military::getX()
{
    return military.getPosition().x;
}
int Military::getY()
{
    return military.getPosition().y;
}
