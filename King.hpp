#ifndef King_hpp
#define King_hpp
#include "Piece.hpp"

class King : public Piece {
public:
    King(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive);

    bool isValidMove(int newRow, int newCol) const override;
    std::string getPiece() const override;
    ~King() override;
};

#endif