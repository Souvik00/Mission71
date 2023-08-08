#include "texture&sprite.h"

texture_sprite::texture_sprite()
{
    //Player Sprite & Texture
     player_1.loadFromFile("Data/player.png");
     player_sprite.setTexture(player_1);

     //Back_Ground
     background.loadFromFile("Data/BG/BG.png");
     Background.setTexture(background);

     //////////platform
     //plane
     plane.loadFromFile("Data/Tiles/2.png");
     Plane.setTexture(plane);
     //Before Rever
     b_rev.loadFromFile("Data/Tiles/3.png");
     B_rev.setTexture(b_rev);
     //Rever
     rev.loadFromFile("Data/Tiles/18.png");
     Rev.setTexture(rev);
     //after rever
     a_rev.loadFromFile("Data/Tiles/1.png");
     A_rev.setTexture(a_rev);
     //Bridge
     bridge.loadFromFile("Data/Bri_1.png");
     Bridge.setTexture(bridge);
     //Fire
     fire.loadFromFile("Data/Fire.png");
     Fire.setTexture(fire);
     //line
     line.loadFromFile("Data/p_line.png");
     Line.setTexture(line);
     //Tree planting
     tree.loadFromFile("Data/Object/Tree_2.png");
     Tree.setTexture(tree);
     //Hut_1
     hut.loadFromFile("Data/Hut.png");
     Hut.setTexture(hut);
     //Jungle
     jungle.loadFromFile("Data/Object/Bush.png");
     Jungle.setTexture(jungle);
     //Enemy
     enemy.loadFromFile("Data/military.png");
     Enemy.setTexture(enemy);

     //Camp
     camp.loadFromFile("Data/Camp.png");
     Camp.setTexture(camp);
     Camp.setPosition(58850,-100);
     //Flag_1
     flag.loadFromFile("Data/flag.png");
     Flag_1.setTexture(flag);
     Flag_2.setTexture(flag);
     Flag_1.setPosition(58650,-8);
     Flag_2.setPosition(59380,-8);

     //player_2
     player_2.loadFromFile("Data/player_2.png");
     Player_2.setTexture(player_2);
     //Complete
     complete.loadFromFile("Data/l_complete.png");
     Complete.setTexture(complete);
     Complete.setPosition(58665,-100);

     //G_over
     g_over.loadFromFile("Data/g_over.png");
     G_over.setTexture(g_over);
     G_over.setPosition(58783,-40);
}
