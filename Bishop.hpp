#ifndef Bishop_hpp
#define Bishop_hpp
#include "Piece.hpp"

class Bishop : public Piece {
public:
    Bishop(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive);

    bool isValidMove(int newRow, int newCol) const override;
    std::string getPiece() const override;
    ~Bishop() override;
};

#endif