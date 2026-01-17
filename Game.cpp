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
                std::cout << "MANUAL STUFFFFFF" << std::endl;
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