#include "Queen.hpp"
Queen::Queen(Piece::PieceTypes type, Piece::PieceColors color, int row, int col)
    : Piece(type, color, row, col) {}

bool Queen::isValidMove(int newRow, int newCol, int boardSize) const { // WIP
    if (newRow >= 0 && newRow < boardSize && newCol >= 0 && newCol < boardSize) {
        if (abs(newRow - pieceRow) == abs(newCol - pieceCol)) {
            return true;
        }

        return ((newRow != pieceRow) ^ (newCol != pieceCol));
    }

    return false;
}
std::string Queen::getPiece() const {
    return pieceColor == PieceColors::WHITE ? "♕" : "♛";
}

Queen::~Queen() {
}