#include "Bishop.hpp"
#include "Board.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "Piece.hpp"
#include "Queen.hpp"
#include "Rook.hpp"

int main() {
    std::cout << "================================================================" << std::endl;
    std::cout << "  ____  ____                   __        __            _  ____  " << std::endl;
    std::cout << " / / / |  _ \\ __ ___      ___ _\\ \\      / /_ _ _ __ __| | \\ \\ \\ " << std::endl;
    std::cout << "/ / /  | |_) / _` \\ \\ /\\ / / '_ \\ \\ /\\ / / _` | '__/ _` |  \\ \\ \\ " << std::endl;
    std::cout << "\\ \\ \\  |  __/ (_| |\\ V  V /| | | \\ V  V / (_| | | | (_| |  / / / " << std::endl;
    std::cout << " \\_\\_\\ |_|   \\__,_| \\_/\\_/ |_| |_|\\_/\\_/ \\__,_|_|  \\__,_| /_/_/ " << std::endl
              << std::endl;
    std::cout << "Type the Number Next to the Option to Select that Option..." << std::endl;
    std::cout << "Play [1]" << std::endl
              << "Extras [2]" << std::endl;
    std::cout << "Input: " << std::endl;
    std::cout << "================================================================" << std::endl;
    std::cout << "Manual [1]" << std::endl;
    std::cout << "Acheivments [2]" << std::endl;
    std::cout << "Back [3]" <<std::endl;
    std::cout << "Input: " << std::endl;
    std::cout << "================================================================" << std::endl;

    Board board(8);

    Knight rook(Piece::PieceTypes::KNIGHT, Piece::PieceColors::WHITE, 7, 0);
    Pawn pawn(Piece::PieceTypes::PAWN, Piece::PieceColors::BLACK, 6, 0);

    board.placePiece(7, 2, &rook);
    board.placePiece(6, 0, &pawn);

    board.displayBoard();
    std::cout << std::endl;
    board.movePiece(6, 0, 8, &rook);
    board.displayBoard();
    std::cout << std::endl;
    board.movePiece(7, 2, 8, &rook);
    board.displayBoard();
    std::cout << std::endl;
    board.movePiece(6, 1, 8, &pawn);
    board.displayBoard();


    return 0;
}