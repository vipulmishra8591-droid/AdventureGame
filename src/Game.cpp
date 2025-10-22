#include "Game.hpp"

Game::Game()
    : window(sf::VideoMode(800, 600), "Multiplayer Adventure Game"),
      player1(sf::Color::Blue, {100, 100}),
      player2(sf::Color::Red, {200, 100}),
      currentLevel(1) {}

void Game::run() {
    sf::Clock clock;
    while (window.isOpen()) {
        processEvents();
        sf::Time dt = clock.restart();
        update(dt);
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
        player1.handleInput(event);
        player2.handleInput(event);
    }
}

void Game::update(sf::Time dt) {
    player1.update(dt);
    player2.update(dt);
    currentLevel.update(dt);
    // Effects, networking, etc.
}

void Game::render() {
    window.clear();
    currentLevel.render(window);
    player1.render(window);
    player2.render(window);
    window.display();
}
