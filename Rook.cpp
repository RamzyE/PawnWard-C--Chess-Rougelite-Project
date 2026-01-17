#include "Rook.hpp"
Rook::Rook(Piece::PieceTypes type, Piece::PieceColors color, int row, int col, bool alive)
    : Piece(type, color, row, col, alive) {}

bool Rook::isValidMove(int newRow, int newCol) const { // WIP
    return ((newRow != pieceRow) ^ (newCol != pieceCol));
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