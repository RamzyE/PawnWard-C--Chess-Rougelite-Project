#ifndef Knight_hpp
#define Knight_hpp
#include "Piece.hpp"

class Knight : public Piece {
public:
    Knight(Piece::PieceTypes type, Piece::PieceColors color, int row, int col);

    bool isValidMove(int newRow, int newCol, int boardSize) const override;
    std::string getPiece() const override;
    ~Knight() override;
};

#endif