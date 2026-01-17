#include "Board.hpp"

Board::Board(int size) : boardSize(size) {
    chessBoard.resize(boardSize, std::vector<Piece *>(boardSize, nullptr));
}

void Board::setBoardSize(const int &size) {
    boardSize = size;
}

int Board::getBoardSize() const {
    return boardSize;
}

bool Board::isInBounds(const int &newRow, const int &newCol) {
    return newRow >= 0 && newRow < boardSize && newCol >= 0 && newCol < boardSize;
}

bool Board::placePiece(const int &row, const int &col, Piece *piece) {
    if (!piece || !isInBounds(row, col)) {
        return false;
    }

    if (chessBoard[row][col] != nullptr) {
        return false;
    }

    chessBoard[row][col] = piece;
    piece->setPosition(row, col);
    return true;
}

bool Board::isPathClear(const int &newRow, const int &newCol, Piece *piece) {
    if (piece->getPieceType() == Piece::PieceTypes::KNIGHT || piece->getPieceType() == Piece::PieceTypes::PAWN) {
        return true;
    }

    int startRow = piece->getRow();
    int startCol = piece->getCol();

    int rowStep = (newRow > startRow) - (newRow < startRow);
    int colStep = (newCol > startCol) - (newCol < startCol);

    int r = startRow + rowStep;
    int c = startCol + colStep;

    while (r != newRow || c != newCol) {
        if (chessBoard[r][c] != nullptr)
            return false;
        r += rowStep;
        c += colStep;
    }

    return true;
}

bool Board::isCaptureLegal(const int &newRow, const int &newCol, Piece *piece) {
    Piece *target = chessBoard[newRow][newCol];
    if (!target) {
        return true;
    }

    return target->getPieceColor() != piece->getPieceColor();
}

bool Board::movePiece(const int &newRow, const int &newCol, Piece *piece) { // WIP
    if (!piece || !isInBounds(newRow, newCol))
        return false;

    int oldRow = piece->getRow();
    int oldCol = piece->getCol();

    // Ensure the piece is actually on the board
    if (!isInBounds(oldRow, oldCol) ||
        chessBoard[oldRow][oldCol] != piece)
        return false;

    if (!piece->isValidMove(newRow, newCol))
        return false;

    if (!isPathClear(newRow, newCol, piece))
        return false;

    if (!isCaptureLegal(newRow, newCol, piece))
        return false;

    Piece *target = chessBoard[newRow][newCol];
    if (target) {
        target->defeatPiece(); // if you added alive/dead
    }

    chessBoard[oldRow][oldCol] = nullptr;
    chessBoard[newRow][newCol] = piece;
    piece->setPosition(newRow, newCol);

    return true;
}

void Board::displayBoard() const {
    std::cout << "   ";
    for (int h = 0; h < boardSize; h++) { // The Horizontal Numbers
        std::cout << h << "  ";
    }

    std::cout << std::endl;

    for (int i = 0; i < boardSize; i++) { // Sets up the Board with the Pieces
        std::cout << i << " ";            // The Vertical Numbers
        for (int j = 0; j < boardSize; j++) {
            if (chessBoard[i][j]) {
                std::cout << "[" << chessBoard[i][j]->getPiece() << "]";
            } else {
                std::cout << "[ ]";
            }
        }
        std::cout << std::endl;
    }
}
