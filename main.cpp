#include "Bishop.hpp"
#include "Board.hpp"
#include "Game.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "Piece.hpp"
#include "Queen.hpp"
#include "Rook.hpp"

int main() {
    Game game;
    game.gameStart();
    /*
        Board board(8);

        Knight rook(Piece::PieceTypes::KNIGHT, Piece::PieceColors::WHITE, 7, 0, 1);
        Pawn pawn(Piece::PieceTypes::PAWN, Piece::PieceColors::BLACK, 6, 0, 1);

        board.placePiece(7, 2, &rook);
        board.placePiece(6, 0, &pawn);

        board.displayBoard();
        std::cout << std::endl;
        board.movePiece(6, 0, &rook);
        board.displayBoard();
        std::cout << std::endl;
        board.movePiece(7, 2, &rook);
        board.displayBoard();
        std::cout << std::endl;
        board.movePiece(6, 1, &pawn);
        board.displayBoard();
    */

    return 0;
}