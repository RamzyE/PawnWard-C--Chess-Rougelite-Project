#include "Pawn.hpp"
Pawn::Pawn(Piece::PieceTypes type, Piece::PieceColors color, int row, int col)
    : Piece(type, color, row, col) {}

bool Pawn::isValidMove(int newRow, int newCol, int boardSize) const { // WIP
    if (abs(newRow - pieceRow) > 1 || abs(newCol - pieceCol) > 1) {
        return false;
    }

    if (newRow >= 0 && newRow < boardSize && newCol >= 0 && newCol < boardSize) {
        return true;
    }

    return false;
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