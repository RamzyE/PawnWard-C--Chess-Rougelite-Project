#include "Bishop.hpp"
Bishop::Bishop(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive)
    : Piece(type, color, row, col, alive) {}

bool Bishop::isValidMove(int newRow, int newCol) const { // WIP
    if (abs(newRow - pieceRow) == abs(newCol - pieceCol)) {
        return true;
    }

    return false;
}
std::string Bishop::getPiece() const {
    if (pieceColor == PieceColors::WHITE) {
        return "♗";
    } else {
        return "♝";
    }
}

Bishop::~Bishop() {
}