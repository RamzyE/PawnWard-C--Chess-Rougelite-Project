#ifndef Board_hpp
#define Board_hpp
#include "Piece.hpp"
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <iostream>
#include <string>
#include <vector>

class Board {

public:
    Board(int size);
    void setBoardSize(const int &size);
    int getBoardSize() const;
    void displayBoard() const;
    void placePiece(const int &row, const int &col, Piece *piece);
    bool pathCheckAction(Piece *piece, const int &newRow, const int &newCol);
    bool movePiece(const int &newRow, const int &newCol, const int &boardSize, Piece *piece); // WIP, will be bool

private:
    std::vector<std::vector<Piece *>> chessBoard; // Char is a placeHolder
    int boardSize;
};
#endif