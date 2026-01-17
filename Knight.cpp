#include "Knight.hpp"
Knight::Knight(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive)
    : Piece(type, color, row, col, alive) {}

bool Knight::isValidMove(int newRow, int newCol) const { // WIP
    if (abs(newRow - pieceRow) == 2 && abs(newCol - pieceCol) == 1) {
        return true;
    } else if (abs(newRow - pieceRow) == 1 && abs(newCol - pieceCol) == 2) {
        return true;
    }

    return false;
}
std::string Knight::getPiece() const {
    if (pieceColor == PieceColors::WHITE) {
        return "♘";
    } else {
        return "♞";
    }
}

Knight::~Knight() {
}