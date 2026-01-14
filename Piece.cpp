#include "Piece.hpp"
Piece::Piece(PieceTypes type, PieceColors color, int row, int col) : pieceType(type), pieceColor(color), pieceRow(row), pieceCol(col) {}

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

void Piece::setPosition(const int &newRow, const int &newCol) {
    pieceRow = newRow;
    pieceCol = newCol;
}