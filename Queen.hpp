#ifndef Queen_hpp
#define Queen_hpp
#include "Piece.hpp"

class Queen : public Piece {
public:
    Queen(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive);

    bool isValidMove(int newRow, int newCol) const override;
    std::string getPiece() const override;
    ~Queen() override;
};

#endif