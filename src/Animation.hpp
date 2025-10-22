#pragma once
#include <SFML/Graphics.hpp>

class Animation {
public:
    Animation();
    void update(sf::Time dt);
    void applyToShape(sf::RectangleShape& shape);
private:
    float elapsed;
};
