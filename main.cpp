#include <SFML/Graphics.hpp>
#include<iostream>
#include "playerclass.h"
#include "texture&sprite.h"
#include "Hut.h"
#include "Military.h"
#include"Menu.h"
#include<vector>
#include"Bullet.h"
#include "audio.h"

using namespace sf;
//using namespace std;
int main()
{
    // Create the main window
    RenderWindow window(VideoMode(1000, 700), "Mission_71");
    window.setKeyRepeatEnabled(false);
    window.setFramerateLimit(60);
    std::vector<Bullet>bullete;
    std::vector<Bullet>shoot;

    bool up =false,down=false,left = false, right = false,p=false,isFiring=false,rat=false;

    Texture ae;
    ae.loadFromFile("ee.jpg");
    Sprite s(ae);
    Menu menu(window.getSize().x,window.getSize().y);
    //////////////////////////Texture and  Sprite
    texture_sprite sprite;
    Audio audio;
    audio.menu_sound.setLoop(true);
    audio.menu_sound.play();

    Sprite blank;
    Hut home[12] = {Hut(3100,70 ,sprite.Hut,sprite.Jungle),
                    Hut(6600,70 ,sprite.Hut,sprite.Jungle),
                    Hut(9900+300,70 ,sprite.Hut,sprite.Jungle),
                    Hut(12000+1250,70 ,sprite.Hut,sprite.Jungle),
                    Hut(16000,70 ,sprite.Hut,sprite.Jungle),
                    Hut(20500,70 ,sprite.Hut,sprite.Jungle),
                    Hut(24500+200,70 ,sprite.Hut,sprite.Jungle),
                    Hut(29500,70 ,sprite.Hut,sprite.Jungle),
                    Hut(34500+300,70 ,sprite.Hut,sprite.Jungle),
                    Hut(39500+1100,70 ,sprite.Hut,sprite.Jungle),
                    Hut(42500,70 ,sprite.Hut,sprite.Jungle),
                    Hut(46500+900,70 ,sprite.Hut,sprite.Jungle)};

    playerclass play(sprite.player_sprite,sprite.Background,sprite.Player_2);
    platformclass pltform[260]={platformclass(0, 300,sprite.Plane,blank),platformclass(250, 300,sprite.Plane,sprite.Tree),platformclass(505, 300,sprite.Plane,sprite.Tree),platformclass(760, 300,sprite.Plane,sprite.Tree),platformclass(1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(1270, 300,sprite.Plane,sprite.Tree),platformclass(1525, 300,sprite.Plane,sprite.Tree),platformclass(1780, 300,sprite.Plane,sprite.Tree),platformclass(2035, 300,sprite.Plane,sprite.Tree),platformclass(6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(2530, 300,sprite.Plane,sprite.Tree),platformclass(2785, 300,sprite.Plane,sprite.Tree),platformclass(2290, 300,sprite.Plane,sprite.Tree), platformclass(3024, 300,sprite.Plane,sprite.Tree),platformclass(3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(3535, 300,sprite.Plane,sprite.Tree),platformclass(3790, 300,sprite.Plane,sprite.Tree),platformclass(4045, 300,sprite.Plane,sprite.Tree),platformclass(4300, 300,sprite.Plane,sprite.Tree),platformclass(4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(5050, 300,sprite.Line,blank),platformclass(5030, 357,sprite.Fire,blank),platformclass(4810, 300,sprite.B_rev,sprite.Tree),platformclass(5220, 300,sprite.A_rev,sprite.Tree),platformclass(5475, 300,sprite.Plane,sprite.Tree),
                               platformclass(5730, 300,sprite.Plane,sprite.Tree),platformclass(5985, 300,sprite.Plane,sprite.Tree),platformclass(6240, 300,sprite.Plane,sprite.Tree),platformclass(6495, 300,sprite.Plane,sprite.Tree),platformclass(7005,300,sprite.Plane,sprite.Tree),
                               platformclass(7260, 300,sprite.Plane,sprite.Tree),platformclass(7260+250, 300,sprite.Plane,sprite.Tree),platformclass(7260+505, 300,sprite.Plane,sprite.Tree),platformclass(7260+760, 300,sprite.Plane,sprite.Tree),platformclass(7260+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(7260+1270, 300,sprite.Plane,sprite.Tree),platformclass(7260+1525, 300,sprite.Plane,sprite.Tree),platformclass(7260+1780, 300,sprite.Plane,sprite.Tree),platformclass(7260+2035, 300,sprite.Plane,sprite.Tree),platformclass(7260+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(7260+2530, 300,sprite.Plane,sprite.Tree),platformclass(7260+2785, 300,sprite.Plane,sprite.Tree),platformclass(7260+2290, 300,sprite.Plane,sprite.Tree), platformclass(7260+3024, 300,sprite.Plane,sprite.Tree),platformclass(7260+3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(7260+3535, 300,sprite.Plane,sprite.Tree),platformclass(7260+3790, 300,sprite.Plane,sprite.Tree),platformclass(7260+4045, 300,sprite.Plane,sprite.Tree),platformclass(7260+4300, 300,sprite.Plane,sprite.Tree),platformclass(7260+4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(7260+5037, 300,sprite.Bridge,blank),platformclass(7260+5030, 357,sprite.Rev,blank),platformclass(7260+5285, 357,sprite.Rev,blank),platformclass(7260+4790, 300,sprite.B_rev,sprite.Tree),platformclass(7260+5497, 300,sprite.A_rev,sprite.Tree),
                               platformclass(7260+5730, 300,sprite.Plane,sprite.Tree),platformclass(7260+5985, 300,sprite.Plane,sprite.Tree),platformclass(7260+6240, 300,sprite.Plane,sprite.Tree),platformclass(7260+6495, 300,sprite.Plane,sprite.Tree),platformclass(7260+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(14015, 300,sprite.Plane,sprite.Tree),platformclass(14015+250, 300,sprite.Plane,sprite.Tree),platformclass(14015+505, 300,sprite.Plane,sprite.Tree),platformclass(14015+760, 300,sprite.Plane,sprite.Tree),platformclass(14015+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(14015+1270, 300,sprite.Plane,sprite.Tree),platformclass(14015+1525, 300,sprite.Plane,sprite.Tree),platformclass(14015+1780, 300,sprite.Plane,sprite.Tree),platformclass(14015+2035, 300,sprite.Plane,sprite.Tree),platformclass(14015+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(14015+2530, 300,sprite.Plane,sprite.Tree),platformclass(14015+2785, 300,sprite.Plane,sprite.Tree),platformclass(14015+2290, 300,sprite.Plane,sprite.Tree), platformclass(14015+3024, 300,sprite.Plane,sprite.Tree),platformclass(14015+3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(14015+3535, 300,sprite.Plane,sprite.Tree),platformclass(14015+3790, 300,sprite.Plane,sprite.Tree),platformclass(14015+4045, 300,sprite.Plane,sprite.Tree),platformclass(14015+4300, 300,sprite.Plane,sprite.Tree),platformclass(14015+4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(14015+5037, 300,sprite.Bridge,blank),platformclass(14015+5030, 357,sprite.Rev,blank),platformclass(14015+5285, 357,sprite.Rev,blank),platformclass(14015+4790, 300,sprite.B_rev,sprite.Tree),platformclass(14015+5497, 300,sprite.A_rev,sprite.Tree),
                               platformclass(14015+5730, 300,sprite.Plane,sprite.Tree),platformclass(14015+5985, 300,sprite.Plane,sprite.Tree),platformclass(14015+6240, 300,sprite.Plane,sprite.Tree),platformclass(14015+6495, 300,sprite.Plane,sprite.Tree),platformclass(14015+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(20770, 300,sprite.Plane,sprite.Tree),platformclass(20770+250, 300,sprite.Plane,sprite.Tree),platformclass(20770+505, 300,sprite.Plane,sprite.Tree),platformclass(20770+760, 300,sprite.Plane,sprite.Tree),platformclass(20770+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(20770+1270, 300,sprite.Plane,sprite.Tree),platformclass(20770+1525, 300,sprite.Plane,sprite.Tree),platformclass(20770+1780, 300,sprite.Plane,sprite.Tree),platformclass(20770+2035, 300,sprite.Plane,sprite.Tree),platformclass(20770+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(20770+2530, 300,sprite.Plane,sprite.Tree),platformclass(20770+2785, 300,sprite.Plane,sprite.Tree),platformclass(20770+2290, 300,sprite.Plane,sprite.Tree), platformclass(20770+3024, 300,sprite.Plane,sprite.Tree),platformclass(20770+3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(20770+3535, 300,sprite.Plane,sprite.Tree),platformclass(20770+3790, 300,sprite.Plane,sprite.Tree),platformclass(20770+4045, 300,sprite.Plane,sprite.Tree),platformclass(20770+4300, 300,sprite.Plane,sprite.Tree),platformclass(20770+4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(20770+5050, 300,sprite.Line,blank),platformclass(20770+5030, 357,sprite.Fire,blank),platformclass(20770+4810, 300,sprite.B_rev,sprite.Tree),platformclass(20770+5220, 300,sprite.A_rev,sprite.Tree),platformclass(20770+5475, 300,sprite.Plane,sprite.Tree),
                               platformclass(20770+5730, 300,sprite.Plane,sprite.Tree),platformclass(20770+5985, 300,sprite.Plane,sprite.Tree),platformclass(20770+6240, 300,sprite.Plane,sprite.Tree),platformclass(20770+6495, 300,sprite.Plane,sprite.Tree),platformclass(20770+7005,300,sprite.Plane,sprite.Tree),
                               platformclass(27780, 300,sprite.Plane,sprite.Tree),platformclass(27780+250, 300,sprite.Plane,sprite.Tree),platformclass(27780+505, 300,sprite.Plane,sprite.Tree),platformclass(27780+760, 300,sprite.Plane,sprite.Tree),platformclass(27780+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(27780+1270, 300,sprite.Plane,sprite.Tree),platformclass(27780+1525, 300,sprite.Plane,sprite.Tree),platformclass(27780+1780, 300,sprite.Plane,sprite.Tree),platformclass(27780+2035, 300,sprite.Plane,sprite.Tree),platformclass(27780+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(27780+2530, 300,sprite.Plane,sprite.Tree),platformclass(27780+2785, 300,sprite.Plane,sprite.Tree),platformclass(27780+2290, 300,sprite.Plane,sprite.Tree), platformclass(27780+3024, 300,sprite.Plane,sprite.Tree),platformclass(27780+3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(27780+3535, 300,sprite.Plane,sprite.Tree),platformclass(27780+3790, 300,sprite.Plane,sprite.Tree),platformclass(27780+4045, 300,sprite.Plane,sprite.Tree),platformclass(27780+4300, 300,sprite.Plane,sprite.Tree),platformclass(27780+4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(27780+5037, 300,sprite.Bridge,blank),platformclass(27780+5030, 357,sprite.Rev,blank),platformclass(27780+5285, 357,sprite.Rev,blank),platformclass(27780+4790, 300,sprite.B_rev,sprite.Tree),platformclass(27780+5497, 300,sprite.A_rev,sprite.Tree),
                               platformclass(27780+5730, 300,sprite.Plane,sprite.Tree),platformclass(27780+5985, 300,sprite.Plane,sprite.Tree),platformclass(27780+6240, 300,sprite.Plane,sprite.Tree),platformclass(27780+6495, 300,sprite.Plane,sprite.Tree),platformclass(27780+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(34535, 300,sprite.Plane,sprite.Tree),platformclass(34535+250, 300,sprite.Plane,sprite.Tree),platformclass(34535+505, 300,sprite.Plane,sprite.Tree),platformclass(34535+760, 300,sprite.Plane,sprite.Tree),platformclass(34535+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(34535+1270, 300,sprite.Plane,sprite.Tree),platformclass(34535+1525, 300,sprite.Plane,sprite.Tree),platformclass(34535+1780, 300,sprite.Plane,sprite.Tree),platformclass(34535+2035, 300,sprite.Plane,sprite.Tree),platformclass(34535+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(34535+2530, 300,sprite.Plane,sprite.Tree),platformclass(34535+2785, 300,sprite.Plane,sprite.Tree),platformclass(34535+2290, 300,sprite.Plane,sprite.Tree), platformclass(34535+3024, 300,sprite.Plane,sprite.Tree),platformclass(34535+3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(34535+3535, 300,sprite.Plane,sprite.Tree),platformclass(34535+3790, 300,sprite.Plane,sprite.Tree),platformclass(34535+4045, 300,sprite.Plane,sprite.Tree),platformclass(34535+4300, 300,sprite.Plane,sprite.Tree),platformclass(34535+4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(34535+5037, 300,sprite.Bridge,blank),platformclass(34535+5030, 357,sprite.Rev,blank),platformclass(34535+5285, 357,sprite.Rev,blank),platformclass(34535+4790, 300,sprite.B_rev,sprite.Tree),platformclass(34535+5497, 300,sprite.A_rev,sprite.Tree),
                               platformclass(34535+5730, 300,sprite.Plane,sprite.Tree),platformclass(34535+5985, 300,sprite.Plane,sprite.Tree),platformclass(34535+6240, 300,sprite.Plane,sprite.Tree),platformclass(34535+6495, 300,sprite.Plane,sprite.Tree),platformclass(34535+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(41290, 300,sprite.Plane,sprite.Tree),platformclass(41290+250, 300,sprite.Plane,sprite.Tree),platformclass(41290+505, 300,sprite.Plane,sprite.Tree),platformclass(41290+760, 300,sprite.Plane,sprite.Tree),platformclass(41290+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(41290+1270, 300,sprite.Plane,sprite.Tree),platformclass(41290+1525, 300,sprite.Plane,sprite.Tree),platformclass(41290+1780, 300,sprite.Plane,sprite.Tree),platformclass(41290+2035, 300,sprite.Plane,sprite.Tree),platformclass(41290+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(41290+2530, 300,sprite.Plane,sprite.Tree),platformclass(41290+2785, 300,sprite.Plane,sprite.Tree),platformclass(41290+2290, 300,sprite.Plane,sprite.Tree), platformclass(41290+3024, 300,sprite.Plane,sprite.Tree),platformclass(41290+3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(41290+3535, 300,sprite.Plane,sprite.Tree),platformclass(41290+3790, 300,sprite.Plane,sprite.Tree),platformclass(41290+4045, 300,sprite.Plane,sprite.Tree),platformclass(41290+4300, 300,sprite.Plane,sprite.Tree),platformclass(41290+4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(41290+5037, 300,sprite.Bridge,blank),platformclass(41290+5030, 357,sprite.Rev,blank),platformclass(41290+5285, 357,sprite.Rev,blank),platformclass(41290+4790, 300,sprite.B_rev,sprite.Tree),platformclass(41290+5497, 300,sprite.A_rev,sprite.Tree),
                               platformclass(41290+5730, 300,sprite.Plane,sprite.Tree),platformclass(41290+5985, 300,sprite.Plane,sprite.Tree),platformclass(41290+6240, 300,sprite.Plane,sprite.Tree),platformclass(41290+6495, 300,sprite.Plane,sprite.Tree),platformclass(41290+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(48045, 300,sprite.Plane,sprite.Tree),platformclass(48045+250, 300,sprite.Plane,sprite.Tree),platformclass(48045+505, 300,sprite.Plane,sprite.Tree),platformclass(48045+760, 300,sprite.Plane,sprite.Tree),platformclass(48045+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(48045+1270, 300,sprite.Plane,sprite.Tree),platformclass(48045+1525, 300,sprite.Plane,sprite.Tree),platformclass(48045+1780, 300,sprite.Plane,sprite.Tree),platformclass(48045+2035, 300,sprite.Plane,sprite.Tree),platformclass(48045+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(48045+2530, 300,sprite.Plane,sprite.Tree),platformclass(48045+2785, 300,sprite.Plane,sprite.Tree),platformclass(48045+2290, 300,sprite.Plane,sprite.Tree), platformclass(48045+3024, 300,sprite.Plane,sprite.Tree),platformclass(48045+3280, 300,sprite.Plane,sprite.Tree),
                               platformclass(48045+3535, 300,sprite.Plane,sprite.Tree),platformclass(48045+3790, 300,sprite.Plane,sprite.Tree),platformclass(48045+4045, 300,sprite.Plane,sprite.Tree),platformclass(48045+4300, 300,sprite.Plane,sprite.Tree),platformclass(48045+4555, 300,sprite.Plane,sprite.Tree),
                               platformclass(48045+5037, 300,sprite.Bridge,blank),platformclass(48045+5030, 357,sprite.Rev,blank),platformclass(48045+5285, 357,sprite.Rev,blank),platformclass(48045+4790, 300,sprite.B_rev,sprite.Tree),platformclass(48045+5497, 300,sprite.A_rev,sprite.Tree),
                               platformclass(48045+5730, 300,sprite.Plane,sprite.Tree),platformclass(48045+5985, 300,sprite.Plane,sprite.Tree),platformclass(48045+6240, 300,sprite.Plane,sprite.Tree),platformclass(48045+6495, 300,sprite.Plane,sprite.Tree),platformclass(48045+6750, 300,sprite.Plane,sprite.Tree),
                               platformclass(54800, 300,sprite.Plane,sprite.Tree),platformclass(54800+250, 300,sprite.Plane,sprite.Tree),platformclass(54800+505, 300,sprite.Plane,sprite.Tree),platformclass(54800+760, 300,sprite.Plane,sprite.Tree),platformclass(54800+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(54800+1270, 300,sprite.Plane,sprite.Tree),platformclass(54800+1525, 300,sprite.Plane,sprite.Tree),platformclass(54800+1780, 300,sprite.Plane,sprite.Tree),platformclass(54800+2035, 300,sprite.Plane,sprite.Tree),platformclass(54800+2290, 300,sprite.Plane,sprite.Tree),
                               platformclass(57095, 300,sprite.Plane,sprite.Tree),platformclass(57095+250, 300,sprite.Plane,sprite.Tree),platformclass(57095+505, 300,sprite.Plane,sprite.Tree),platformclass(57095+760, 300,sprite.Plane,sprite.Tree),platformclass(57095+1015, 300,sprite.Plane,sprite.Tree),
                               platformclass(57095+1270, 300,sprite.Plane,blank),platformclass(57095+1525, 300,sprite.Plane,blank),platformclass(57095+1780, 300,sprite.Plane,blank),platformclass(57095+2035, 300,sprite.Plane,blank),platformclass(57095+2290, 300,sprite.Plane,blank)};
    Military enemy[40]={Military(2000,200,sprite.Enemy),Military(4000,200,sprite.Enemy),Military(6000,200,sprite.Enemy),Military(8000,200,sprite.Enemy),Military(10350,200,sprite.Enemy),
                        Military(12820,200,sprite.Enemy),Military(14000,200,sprite.Enemy),Military(16000,200,sprite.Enemy),Military(18000,200,sprite.Enemy),Military(20000,200,sprite.Enemy),
                        Military(22000,200,sprite.Enemy),Military(24000,200,sprite.Enemy),Military(26000,200,sprite.Enemy),Military(28000,200,sprite.Enemy),Military(30000,200,sprite.Enemy),
                        Military(32000,200,sprite.Enemy),Military(34000,200,sprite.Enemy),Military(36000,200,sprite.Enemy),Military(38000,200,sprite.Enemy),Military(40000,200,sprite.Enemy),
                        Military(42000,200,sprite.Enemy),Military(44000,200,sprite.Enemy),Military(46000,200,sprite.Enemy),Military(48000,200,sprite.Enemy),Military(50000,200,sprite.Enemy),
                        Military(52000,200,sprite.Enemy),Military(54000,200,sprite.Enemy),Military(55000,200,sprite.Enemy),Military(56000,200,sprite.Enemy),Military(56700,200,sprite.Enemy),
                        Military(52500,200,sprite.Enemy),Military(53000,200,sprite.Enemy),Military(53500,200,sprite.Enemy),Military(54500,200,sprite.Enemy),Military(55500,200,sprite.Enemy),
                        Military(55800,200,sprite.Enemy),Military(56200,200,sprite.Enemy),Military(56500,200,sprite.Enemy),Military(48500,200,sprite.Enemy),Military(49000,200,sprite.Enemy)
                        };

    View view(Vector2f(0.0,0.0),Vector2f(800.0,600.0));
    bool game_over= false;

    bool BG= false;
	// Start the game loop
    while (window.isOpen())
    {

        // Process events
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::KeyReleased && event.key.code == Keyboard::Up){
                menu.MoveUp();
            }
            else if (event.type == Event::KeyReleased && event.key.code == Keyboard::Down){
                menu.MoveDown();
            }
            else if (event.type == Event::KeyReleased && event.key.code == Keyboard::Return){
                if (menu.GetPressedItem() == 0){
                         p=true;
                         BG=true;
                         audio.menu_sound.stop();
                }

                else if (menu.GetPressedItem() == 1){
                }
                else if (menu.GetPressedItem() == 2){
                    window.close();
                }
            }
            // Close window : exit
            else if (event.type == Event::Closed){
                window.close();
            }
        }
        if(BG==true)
        {
            audio.BG_sound.setLoop(true);
            audio.BG_sound.setVolume(15);
            audio.BG_sound.play();
            BG=false;
        }
        if(p)
        {
            //if(Keyboard::isKeyPressed(Keyboard::Up))up= true;
            if(Keyboard::isKeyPressed(Keyboard::Right))right = true;
            if(Keyboard::isKeyPressed(Keyboard::Left))left= true;
           // if(Keyboard::isKeyPressed(Keyboard::Down))down = true;

           if(!(Keyboard::isKeyPressed(Keyboard::Up)))up= false;
            if(!(Keyboard::isKeyPressed(Keyboard::Right)))right = false;
            if(!(Keyboard::isKeyPressed(Keyboard::Left)))left= false;
            if(!(Keyboard::isKeyPressed(Keyboard::Down)))down = false;
            if(Keyboard::isKeyPressed(Keyboard::Space))
            {
               isFiring=true;
            }
            if(Keyboard::isKeyPressed(Keyboard::Escape))
            {
                window.close();
            }
            if(isFiring==true)
           {
             Bullet newBullet(Vector2f(3,5));
               newBullet.setPos(Vector2f(play.xpos+70,play.ypos+70));
               bullete.push_back(newBullet);
               audio.Fire_sound.play();
              isFiring=false;
            }
        int i=0;
        play.update(up,down,right,left,pltform);
        view.setCenter(Vector2f(play.image.getPosition().x+play.image.getLocalBounds().width+200,play.image.getPosition().y+play.image.getLocalBounds().height-130));
        window.setView(view);
        // Clear screen
        window.clear(Color::White);

        // Draw


        window.draw(play.BG);
        for(int i=0;i<12;i++)
        {
             window.draw(home[i].Hut_1);
             window.draw(home[i].Jungle);
        }

        //Camp
        window.draw(sprite.Camp);
        //Flag
        window.draw(sprite.Flag_1);
        window.draw(sprite.Flag_2);
        //Tree
        for(int i=0;i<260;i++){
                if(i%3==0)
                  window.draw(pltform[i].Tree);

            window.draw(pltform[i].plat_image);
        }
        for(int i=0;i<40;i++)
            window.draw(enemy[i].military);

        window.draw(play.image);
        window.draw(play.image_2);
         for(i=0;i<bullete.size();i++)
             {
                 if(bullete[i].getLeft()>(play.xpos+540))
                    {
                        bullete[i].setPs();
                    }

                 bullete[i].draw(window);
                 bullete[i].fire(7);
             }
             for(int j=0;j<40;j++)
             {
                 if(enemy[j].getX()-play.xpos==350)
                 {
                     rat=true;
                 }
                 if(rat==true)
                 {
                     Bullet nbullet(Vector2f(3,5));
                     nbullet.setPos(Vector2f(enemy[j].getX(),enemy[j].getY()+70));
                     shoot.push_back(nbullet);
                     audio.Fire_sound.play();

                     rat=false;
                 }
             for(i=0;i<bullete.size();i++)
             {
                 int pp=enemy[j].checkColl(bullete[i]);
                if(pp==1){

                    pp=0;
                }
             }
             }
             for(int j=0;j<40;j++)
             {
              for(i=0;i<shoot.size();i++)
             {
                 if(shoot[i].getLeft()>(enemy[j].getX()+500))
                    {
                        shoot[i].setPs();
                    }

                 shoot[i].fire(-1);
                shoot[i].draw(window);
                if(shoot[i].getLeft()<play.image.getPosition().x)
                {
                    play.image.setPosition(58900,200);
                    game_over = true;
                }
             }
             }
        //level complete
        if(play.xpos>58900)
        {
                window.draw(sprite.Complete);
        }
        }
        if(!p)
        {
        window.clear(Color::White);
        window.draw(s);
        menu.draw(window);
        }
        if(game_over)
        {
            window.draw(sprite.G_over);
        }


        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
