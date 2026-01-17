#include "Queen.hpp"
Queen::Queen(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive)
    : Piece(type, color, row, col, alive) {}

bool Queen::isValidMove(int newRow, int newCol) const { // WIP
    if (abs(newRow - pieceRow) == abs(newCol - pieceCol)) {
        return true;
    }

    return ((newRow != pieceRow) ^ (newCol != pieceCol));
}
std::string Queen::getPiece() const {
    return pieceColor == PieceColors::WHITE ? "♕" : "♛";
}

Queen::~Queen() {
}