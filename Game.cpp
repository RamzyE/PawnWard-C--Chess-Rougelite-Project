#include "Game.hpp"
void Game::gameStart() {
    gameMenu();
    worldOne();
    worldTwo();
    worldThree();
}

bool Game::gameMenu() {
    int userInput = 0;
    std::cout << "================================================================" << std::endl;
    do {
        std::cout << "  ____  ____                   __        __            _  ____  " << std::endl;
        std::cout << " / / / |  _ \\ __ ___      ___ _\\ \\      / /_ _ _ __ __| | \\ \\ \\ " << std::endl;
        std::cout << "/ / /  | |_) / _` \\ \\ /\\ / / '_ \\ \\ /\\ / / _` | '__/ _` |  \\ \\ \\ " << std::endl;
        std::cout << "\\ \\ \\  |  __/ (_| |\\ V  V /| | | \\ V  V / (_| | | | (_| |  / / / " << std::endl;
        std::cout << " \\_\\_\\ |_|   \\__,_| \\_/\\_/ |_| |_|\\_/\\_/ \\__,_|_|  \\__,_| /_/_/ " << std::endl
                  << std::endl;
        std::cout << "Type the Number Next to the Option to Select that Option..." << std::endl;
        while (true) {
            userInput = 0;
            std::cout << "Play [1]          Extras [2]" << std::endl;
            std::cout << "Input: ";
            std::cin >> userInput;
            std::cout << "================================================================" << std::endl;
            if (userInput != 1 && userInput != 2) {
                std::cout << "Ivalid Input, Try Again..." << std::endl;
            } else {
                break;
            }
        }

        if (userInput == 1) {
            std::cout << "Begin Game!" << std::endl;
            return true;
        }

        while (true) {
            userInput = 0;
            std::cout << "Manual [1]          Credits/Github [2]           Back [3]" << std::endl;
            std::cout << "Input: ";
            std::cin >> userInput;
            std::cout << "================================================================" << std::endl;
            if (userInput == 1) {
                std::cout << "Welcome To PawnWard's Manual!" << std::endl;
                std::cout << "The Main Goal of the Game is to get to the End of the 3rd" << std::endl;
                std::cout << "World without Losing all your Health. Each World having 5" << std::endl;
                std::cout << "Rounds that have different Board Layouts and Pieces you go" << std::endl;
                std::cout << "up Against. Lets first go over the Player Themselves." << std::endl;
                std::cout << std::endl;
                std::cout << "The Player Consists of 4 Vital Attributes: " << std::endl;
                std::cout << "1) Health" << std::endl;
                std::cout << "  - Your Health Essentially Represents Your Lives." << std::endl;
                std::cout << "  - When You Lose a Round, You Lose a Heart." << std::endl;
                std::cout << "  - Lose All Your Hearts, and its Game Over." << std::endl;
                std::cout << "  - You Can Regain Health Either in the Shop, or" << std::endl;
                std::cout << "  - Obtaining a Perk that gives you more Health." << std::endl;
                std::cout << "  - Remaining Hearts are this Icon: ♥" << std::endl;
                std::cout << "  - Empty Hearts are this Icon: ❤ " << std::endl
                          << std::endl;
                std::cout << "2) Gold" << std::endl;
                std::cout << "  - Your Gold is Your Currency. It allows you to" << std::endl;
                std::cout << "  - Purchase Items in The Shop and Strong Pieces" << std::endl;
                std::cout << "  - and Perks. When you Win a Round you Obtain" << std::endl;
                std::cout << "  - 10 Gold by Default. You can Obtain more Gold" << std::endl;
                std::cout << "  - per Round if you either maintain a Win Streak," << std::endl;
                std::cout << "  - which rewards 5 Extra Gold per Round or you" << std::endl;
                std::cout << "  - Find Loot like Pots in the Round. If you" << std::endl;
                std::cout << "  - lose a Round without losing all Your" << std::endl;
                std::cout << "  - Hearts, You Only get rewarded with 5 Gold" << std::endl;
                std::cout << "  - and Your Win Streak Breaks." << std::endl
                          << std::endl;
                std::cout << "3) Pieces" << std::endl;
                std::cout << "  - Your Pieces are Your Troops and Your way" << std::endl;
                std::cout << "  - to do Action. You can Only move one piece" << std::endl;
                std::cout << "  - per Turn. To move a Piece you Type the" << std::endl;
                std::cout << "  - Number that corresponds with the Piece" << std::endl;
                std::cout << "  - in Your Inventory and you then Type a" << std::endl;
                std::cout << "  - Valid Row and Column and the piece moves." << std::endl;
                std::cout << "  - Of course moving a piece on top of another" << std::endl;
                std::cout << "  - different colored piece destorys it. Your" << std::endl;
                std::cout << "  - goal each round is to destroy all enemy" << std::endl;
                std::cout << "  - pieces to move on to the next or destroy" << std::endl;
                std::cout << "  - the King piece. The same condition applies" << std::endl;
                std::cout << "  - when losing a Round." << std::endl;
                std::cout << "  - Of course Like standard Chess, there a six" << std::endl;
                std::cout << "  - Unique pieces. The Pawn, Rook, Knight, " << std::endl;
                std::cout << "  - Bishop, Queen, and King, each working the" << std::endl;
                std::cout << "  - the same in basic Chess execpt for the Pawn." << std::endl;
                std::cout << "  - The Pawn can move the same like the king" << std::endl;
                std::cout << "  - for gameplay sake. To obtain pieces, you" << std::endl;
                std::cout << "  - select one of the three pieces" << std::endl;

                std::cout << "4) Perks" << std::endl;
                std::cout << "  - Your Perks are Power Ups that can give" << std::endl;
                std::cout << "  - a Variety of Effects" << std::endl;
            } else if (userInput == 2) {
                std::cout << "Project Creator: Ramzy Elshabasy" << std::endl;
                std::cout << "Project GitHub Link: " << std::endl;
                std::cout << "https://github.com/RamzyE/PawnWard-C--Chess-Rougelite-Project" << std::endl;
            } else if (userInput == 3) {
                break;
            } else {
                std::cout << "Ivalid Input, Try Again..." << std::endl;
            }
        }

    } while (userInput == 3);
    return true;
}

void Game::worldOne() {
}
void Game::worldTwo() {
}
void Game::worldThree() {
}

void Game::selectPiece() {
}
void Game::selectPerk() {
}
void Game::shop() {
}