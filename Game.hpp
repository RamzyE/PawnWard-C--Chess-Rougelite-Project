#ifndef Game_hpp
#define Game_hpp
#include "Board.hpp"
#include "Enemy.hpp"
#include "Perk.hpp"
#include "Piece.hpp"

class Game {
public:
    void gameStart(); // This is all the main needs to call to start the game completely.

private:
    bool gameMenu(); // Finished

    void worldOne();
    void worldTwo();
    void worldThree();

    void selectPiece();
    void selectPerk();
    void shop();
};
#endif