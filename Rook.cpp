#include "Rook.hpp"
Rook::Rook(Piece::PieceTypes type, Piece::PieceColors color, int row, int col)
    : Piece(type, color, row, col) {}

bool Rook::isValidMove(int newRow, int newCol, int boardSize) const { // WIP
    if (newRow >= 0 && newRow < boardSize && newCol >= 0 && newCol < boardSize) {
        return ((newRow != pieceRow) ^ (newCol != pieceCol));
    }

    return false;
}
std::string Rook::getPiece() const {
    if (pieceColor == PieceColors::WHITE) {
        return "♖";
    } else {
        return "♜";
    }
}

Rook::~Rook() {
}