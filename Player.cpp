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

void Player::setPlayerPieces(const std::vector<Piece *> &playerPieces_) {
    playerPieces = playerPieces_;
}

void Player::setPlayerPerks(const std::vector<Perk *> &playerPerks_) {
    playerPerks = playerPerks_;
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

Player::~Player(){
    
}