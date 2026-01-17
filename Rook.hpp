#ifndef Rook_hpp
#define Rook_hpp
#include "Piece.hpp"

class Rook : public Piece {
public:
    Rook(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive);

    bool isValidMove(int newRow, int newCol) const override;
    std::string getPiece() const override;
    ~Rook() override;
};

#endif