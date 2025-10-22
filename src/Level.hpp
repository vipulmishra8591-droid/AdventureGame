#pragma once
#include <SFML/Graphics.hpp>

class Level {
public:
    Level(int num);
    void update(sf::Time dt);
    void render(sf::RenderWindow& window);
private:
    int levelNum;
    sf::RectangleShape ground;
};
