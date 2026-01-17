#include "Piece.hpp"
Piece::Piece(PieceTypes type, PieceColors color, int row, int col, bool alive) : pieceType(type), pieceColor(color), pieceRow(row), pieceCol(col), isAlive(alive) {}

Piece::PieceTypes Piece::getPieceType() const {
    return pieceType;
}

Piece::PieceColors Piece::getPieceColor() const {
    return pieceColor;
}

int Piece::getRow() const {
    return pieceRow;
}

int Piece::getCol() const {
    return pieceCol;
}

bool Piece::getStatus() const {
    return isAlive;
}

void Piece::defeatPiece() {
    isAlive = false;
}

void Piece::respawnPiece() {
    isAlive = true;
}

void Piece::setPosition(const int &newRow, const int &newCol) {
    pieceRow = newRow;
    pieceCol = newCol;
}