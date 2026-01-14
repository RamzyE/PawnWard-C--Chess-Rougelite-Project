#include "King.hpp"
King::King(Piece::PieceTypes type, Piece::PieceColors color, int row, int col)
    : Piece(type, color, row, col) {}

bool King::isValidMove(int newRow, int newCol, int boardSize) const { // WIP
    if (abs(newRow - pieceRow) > 1 || abs(newCol - pieceCol) > 1) {
        return false;
    }

    if (newRow >= 0 && newRow < boardSize && newCol >= 0 && newCol < boardSize) {
        return true;
    }

    return false;
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