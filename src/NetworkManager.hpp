#pragma once
#include <SFML/Network.hpp>
#include <string>

class NetworkManager {
public:
    NetworkManager();
    void connectToServer(const std::string& ip, unsigned short port);
    void sendPlayerState();
    void receiveUpdates();
private:
    sf::TcpSocket socket;
    // Add more network logic as needed
};
