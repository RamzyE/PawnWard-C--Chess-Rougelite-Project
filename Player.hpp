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
    bool addPlayerPiece(Piece *piece, const int &position);
    bool replacePiece(Piece *piece, const int &position);
    void addPlayerPerk(Perk *perk);
    void displayPlayerStats() const; //WIP

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