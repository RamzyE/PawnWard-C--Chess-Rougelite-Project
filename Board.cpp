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

void Board::placePiece(const int &row, const int &col, Piece *piece) {
    if (row >= 0 && row < boardSize && col >= 0 && col < boardSize) {
        piece->setPosition(row, col);
        chessBoard[row][col] = piece;
    }
}

bool Board::pathCheckAction(Piece *piece, const int &newRow, const int &newCol) {
    if (piece->getPieceType() != Piece::PieceTypes::KNIGHT && piece->getPieceType() != Piece::PieceTypes::PAWN) {
        int startRow = piece->getRow();
        int startCol = piece->getCol();

        int rowStep = (newRow > startRow) - (newRow < startRow);
        int colStep = (newCol > startCol) - (newCol < startCol);

        int r = startRow + rowStep;
        int c = startCol + colStep;

        while (r != newRow || c != newCol) {
            if (chessBoard[r][c] != nullptr)
                return false; // something blocks the path

            r += rowStep;
            c += colStep;
        }
    }

    Piece *target = chessBoard[newRow][newCol];

    if (!target) {
        return true; // empty square
    }

    return target->getPieceColor() != piece->getPieceColor();
}

bool Board::movePiece(const int &newRow, const int &newCol, const int &boardSize, Piece *piece) { // WIP
    if (!piece->isValidMove(newRow, newCol, boardSize)) {
        return false;
    }

    if (!pathCheckAction(piece, newRow, newCol)) {
        return false;
    }

    int oldRow = piece->getRow();
    int oldCol = piece->getCol();

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
        std::cout << i << " "; // The Vertical Numbers
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
