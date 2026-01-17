#include "Player.hpp"
Player::Player() : currentPlayerHealth(3), maxPlayerHealth(3), playerGold(0), playerPieces(), playerPerks() {
}

Player::Player(const int &playerHealth, const int &maxPlayerHealth, const int &playerGold, const std::vector<Piece *> &playerPieces, const std::vector<Perk *> &playerPerks) : maxPlayerHealth(maxPlayerHealth), playerGold(playerGold), playerPieces(playerPieces), playerPerks(playerPerks) {
    currentPlayerHealth = std::min(playerHealth, maxPlayerHealth);
}

void Player::setPlayerHealth(const int &playerHealth_) {
    currentPlayerHealth = playerHealth_;
}

void Player::setMaxPlayerHealth(const int &maxPlayerHealth_) {
    maxPlayerHealth = maxPlayerHealth_;
}

void Player::setPlayerGold(const int &playerGold_) {
    playerGold += playerGold_;
}

bool Player::addPlayerPiece(Piece *piece, const int &position) {
    if (position >= playerPieces.size() || position < 0 || playerPieces[position]) {
        return false;
    }

    playerPieces[position] = piece;
    return true;
}

void Player::addPlayerPerk(Perk *perk) {
    playerPerks.push_back(perk);
}

bool Player::replacePiece(Piece *piece, const int &position) {
    if (position >= playerPieces.size() || position < 0) {
        return false;
    }

    delete playerPieces[position];
    playerPieces[position] = piece;
    return true;
}

int Player::getCurrentPlayerHealth() const {
    return currentPlayerHealth;
}

int Player::getMaxPlayerHealth() const {
    return maxPlayerHealth;
}

int Player::getPlayerGold() const {
    return playerGold;
}

std::vector<Piece *> Player::getPlayerPieces() const {
    return playerPieces;
}

std::vector<Perk *> Player::getPlayerPerks() const {
    return playerPerks;
}

void Player::displayPlayerStats() const { //WIP
    std::cout << "  Health: ";
    for (int i = 0; i < getCurrentPlayerHealth() + 1; ++i) {
        std::cout << "♥ ";
    }
    std::cout << std::endl;
    std::cout << "  Gold: " << getPlayerGold() << std::endl;
    std::cout << "  Perks: " << std::endl;
    std::cout << "-------------------------------" << std::endl;
}

Player::~Player() {
}