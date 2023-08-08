#include "platformclass.h"
#include "texture&sprite.h"

platformclass::platformclass(float intXpos, float intYpos,Sprite plat_sprite,Sprite tree)
{
            plat_image = plat_sprite;
            Tree = tree;
            plat_image.setPosition(intXpos,intYpos);
            Tree.setPosition(intXpos+20,0);
            Tree.scale(1,1);
            plat_image.scale(2,1.5);
}
