#ifndef Player_hpp
#define Player_hpp
#include "Perk.hpp"
#include "Piece.hpp"

class Player {
public:
    Player();
    Player(const int &playerHealth, const int &maxPlayerHealth, const int &playerGold, const std::vector<Piece *> &playerPieces, const std::vector<Perk *> &playerPerks);
    void setPlayerHealth(const int &playerHealth_);
    void setMaxPlayerHealth(const int &maxPlayerHealth_);
    void setPlayerGold(const int &playerGold_);
    void setPlayerPieces(const std::vector<Piece *> &playerPieces_);
    void setPlayerPerks(const std::vector<Perk *> &playerPerks_);

    int getCurrentPlayerHealth() const;
    int getMaxPlayerHealth() const;
    int getPlayerGold() const;
    std::vector<Piece *> getPlayerPieces() const;
    std::vector<Perk *> getPlayerPerks() const;

    ~Player();

private:
    int currentPlayerHealth;
    int maxPlayerHealth;
    int playerGold;
    std::vector<Piece *> playerPieces;
    std::vector<Perk *> playerPerks; // WIP
};

#endif