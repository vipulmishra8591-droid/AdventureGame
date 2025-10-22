#include "Effects.hpp"

void Effects::playExplosion(sf::RenderWindow& window, sf::Vector2f position) {
    sf::CircleShape explosion(30);
    explosion.setFillColor(sf::Color::Yellow);
    explosion.setPosition(position);
    window.draw(explosion);
}
