#include "Player.hpp"

Player::Player(sf::Color color, sf::Vector2f startPos)
    : shape(sf::Vector2f(40, 40)), velocity(0.f, 0.f), animation()
{
    shape.setFillColor(color);
    shape.setPosition(startPos);
}

void Player::handleInput(const sf::Event& event) {
    // Simple WASD or arrow key movement for demo
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::W) velocity.y = -120.f;
        if (event.key.code == sf::Keyboard::S) velocity.y = 120.f;
        if (event.key.code == sf::Keyboard::A) velocity.x = -120.f;
        if (event.key.code == sf::Keyboard::D) velocity.x = 120.f;
    }
    if (event.type == sf::Event::KeyReleased) {
        if (event.key.code == sf::Keyboard::W || event.key.code == sf::Keyboard::S) velocity.y = 0.f;
        if (event.key.code == sf::Keyboard::A || event.key.code == sf::Keyboard::D) velocity.x = 0.f;
    }
}

void Player::update(sf::Time dt) {
    shape.move(velocity * dt.asSeconds());
    animation.update(dt);
    animation.applyToShape(shape);
}

void Player::render(sf::RenderWindow& window) {
    window.draw(shape);
}
