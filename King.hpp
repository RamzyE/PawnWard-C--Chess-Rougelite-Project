#ifndef King_hpp
#define King_hpp
#include "Piece.hpp"

class King : public Piece {
public:
    King(Piece::PieceTypes type, Piece::PieceColors color, int row, int col);

    bool isValidMove(int newRow, int newCol, int boardSize) const override;
    std::string getPiece() const override;
    ~King() override;
};

#endif