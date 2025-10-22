#pragma once
#include <SFML/Graphics.hpp>
#include "Player.hpp"
#include "Level.hpp"
#include "NetworkManager.hpp"
#include "Effects.hpp"

class Game {
public:
    Game();
    void run();
private:
    sf::RenderWindow window;
    Player player1, player2;
    Level currentLevel;
    NetworkManager network;
    void processEvents();
    void update(sf::Time dt);
    void render();
};
