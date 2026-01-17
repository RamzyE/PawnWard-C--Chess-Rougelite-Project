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
    bool placePiece(const int &row, const int &col, Piece *piece);
    bool movePiece(const int &newRow, const int &newCol, Piece *piece); // WIP, will be bool

private:
    bool isInBounds(const int &newRow, const int &newCol);
    bool isPathClear(const int &newRow, const int &newCol, Piece *piece);
    bool isCaptureLegal(const int &newRow, const int &newCol, Piece* piece);
    std::vector<std::vector<Piece *>> chessBoard; // The Board Itself
    int boardSize;
};
#endif