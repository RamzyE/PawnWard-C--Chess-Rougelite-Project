#include "King.hpp"
King::King(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive)
    : Piece(type, color, row, col, alive) {}

bool King::isValidMove(int newRow, int newCol) const { // WIP
    if (abs(newRow - pieceRow) > 1 || abs(newCol - pieceCol) > 1) {
        return false;
    }
    return true;
}
std::string King::getPiece() const {
    if (pieceColor == PieceColors::WHITE) {
        return "♔";
    } else {
        return "♚";
    }
}

King::~King() {
}