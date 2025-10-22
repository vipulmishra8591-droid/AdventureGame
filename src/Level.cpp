#include "Level.hpp"

Level::Level(int num) : levelNum(num), ground(sf::Vector2f(800, 600)) {
    ground.setFillColor(sf::Color(100, 200, 100));
}

void Level::update(sf::Time dt) {
    // Level logic, effects, etc.
}

void Level::render(sf::RenderWindow& window) {
    window.draw(ground);
    // Draw more level elements
}
