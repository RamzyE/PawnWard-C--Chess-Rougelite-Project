#ifndef Piece_hpp
#define Piece_hpp
#include <cmath>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <iostream>
#include <string>
#include <vector>
class Piece {
public:
    enum class PieceTypes {
        PAWN,
        ROOK,
        KNIGHT,
        BISHOP,
        KING,
        QUEEN
    };

    enum class PieceColors {
        WHITE,
        BLACK
    };

    enum class Location {
        INVENTORY,
        BOARD,
        DEADZONE
    };

    Piece(PieceTypes type, PieceColors color, int row, int col, bool alive);
    virtual ~Piece() = default;
    virtual bool isValidMove(int newRow, int newCol) const = 0;
    virtual std::string getPiece() const = 0;

    PieceTypes getPieceType() const;
    PieceColors getPieceColor() const;

    int getRow() const;
    int getCol() const;
    bool getStatus() const;
    void defeatPiece();
    void respawnPiece();
    void setPosition(const int &newRow, const int &newCol);

protected:
    PieceTypes pieceType;
    PieceColors pieceColor;
    int pieceRow, pieceCol;
    bool isAlive = true;
};
#endif