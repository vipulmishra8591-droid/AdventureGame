#include "NetworkManager.hpp"

NetworkManager::NetworkManager() {}

void NetworkManager::connectToServer(const std::string& ip, unsigned short port) {
    socket.connect(ip, port);
}

void NetworkManager::sendPlayerState() {
    // Serialize and send player state
}

void NetworkManager::receiveUpdates() {
    // Receive and apply updates from server
}
