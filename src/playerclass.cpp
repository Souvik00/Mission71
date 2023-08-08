#include "playerclass.h"

playerclass::playerclass(Sprite sprite , Sprite bg , Sprite player_2)
{
    image = sprite;
    BG = bg;
    image_2 = player_2;

            xpos=120;
            ypos=200;
            xvel=0;
            yvel=0;
}
void playerclass::update(bool up, bool down, bool right, bool left, platformclass pltform[])
{
                if(up)yvel=-0;
                if(down)yvel=0;
                if(right)xvel=5;
                if(left)xvel=-5;

                if(!(right || left))
                    xvel=0;
                if(!(up || down))
                    yvel=0;
                if(xpos>58900)
                {
                    xvel=0;yvel=0;
                }
                xpos+=xvel;
                ypos+=yvel;
                xvel;
                yvel;
                if(!col){
                    image.setPosition(xpos,ypos);
                    BG.setPosition(-100,-250);
                    image_2.setPosition(xpos-100,210);
                    col = true;
                }
                image.move(xvel,yvel);
                image_2.move(xvel,yvel);
                BG.move(xvel,yvel);
                //del_man.move(xvel,yvel);
                for(int i=0;i<260;i++)
                if(image.getGlobalBounds().intersects(pltform[i].plat_image.getGlobalBounds())==true){
                   image.move(-xvel,-yvel);
                   BG.move(-xvel,-yvel);
                  image_2.move(-xvel,-yvel);
                }
                if(xpos<120)
                {
                    xpos= 120;
                    image.setPosition(xpos,ypos);
                    image_2.setPosition(xpos-100,210);
                    BG.move(-xvel,-yvel);
                }

}
