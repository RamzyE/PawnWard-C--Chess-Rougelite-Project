#include "Bishop.hpp"
Bishop::Bishop(Piece::PieceTypes type, Piece::PieceColors color, int row, int col)
    : Piece(type, color, row, col) {}

bool Bishop::isValidMove(int newRow, int newCol, int boardSize) const { // WIP
    if (newRow >= 0 && newRow < boardSize && newCol >= 0 && newCol < boardSize) {
        if (abs(newRow - pieceRow) == abs(newCol - pieceCol)) {
            return true;
        }
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