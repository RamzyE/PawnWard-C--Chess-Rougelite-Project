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

    Piece(PieceTypes type, PieceColors color, int row, int col);
    virtual ~Piece() = default;
    virtual bool isValidMove(int newRow, int newCol, int boardSize) const = 0;
    virtual std::string getPiece() const = 0;

    PieceTypes getPieceType() const;
    PieceColors getPieceColor() const;
    int getRow() const;
    int getCol() const;
    void setPosition(const int &newRow, const int &newCol);

protected:
    PieceTypes pieceType;
    PieceColors pieceColor;
    int pieceRow, pieceCol;
};
#endif