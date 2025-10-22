#include "Animation.hpp"

Animation::Animation() : elapsed(0.f) {}

void Animation::update(sf::Time dt) {
    elapsed += dt.asSeconds();
}

void Animation::applyToShape(sf::RectangleShape& shape) {
    // Simple pulsing effect for demo
    float scale = 1.f + 0.1f * std::sin(elapsed * 4);
    shape.setScale(scale, scale);
}
