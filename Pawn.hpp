#ifndef Pawn_hpp
#define Pawn_hpp
#include "Piece.hpp"

class Pawn : public Piece {
public:
    Pawn(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive);

    bool isValidMove(int newRow, int newCol) const override;
    std::string getPiece() const override;
    ~Pawn() override;
};

#endif