#pragma once
#include <SFML/Graphics.hpp>
#include "Animation.hpp"

class Player {
public:
    Player(sf::Color color, sf::Vector2f startPos);
    void update(sf::Time dt);
    void render(sf::RenderWindow& window);
    void handleInput(const sf::Event& event);
private:
    sf::RectangleShape shape;
    Animation animation;
    sf::Vector2f velocity;
};
