#pragma once
#include <SFML/Graphics.hpp>

class Bullet {
public:
    Bullet(sf::Vector2f (size)) {
        bullet.setSize(size);
        bullet.setFillColor(sf::Color::Red);
    }

    void fire(int speed) {
        bullet.move(speed, 0);
    }
    void setPs()
    {
        bullet.setPosition(sf::Vector2f(4234432, 4234423));
    }

    int getRight() {
        return bullet.getPosition().x + bullet.getSize().y;
    }

    int getLeft() {
        return bullet.getPosition().x;
    }

    int getTop() {
        return bullet.getPosition().y;
    }

    int getBottom() {
        return bullet.getPosition().y + bullet.getSize().y;
    }

    void draw(sf::RenderWindow &window) {
        window.draw(bullet);
    }

    void setPos(sf::Vector2f newPos) {
        bullet.setPosition(newPos);
    }

private:
    sf::RectangleShape bullet;
};
