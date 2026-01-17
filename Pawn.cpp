#include "Pawn.hpp"
Pawn::Pawn(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive)
    : Piece(type, color, row, col, alive) {}

bool Pawn::isValidMove(int newRow, int newCol) const { // WIP
    if (abs(newRow - pieceRow) > 1 || abs(newCol - pieceCol) > 1) {
        return false;
    }

    return true;
}
std::string Pawn::getPiece() const {
    if (pieceColor == PieceColors::WHITE) {
        return "♙";
    } else {
        return "♟";
    }
}

Pawn::~Pawn() {
}