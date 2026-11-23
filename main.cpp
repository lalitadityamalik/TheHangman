#include <iostream>
#include <string>
#include "caseUpper.h"
#include "setDifficulty.h"
#include "roundPlayer.h"

int main() {

    std::string userInput;
    int score{};
    while (userInput != "EXIT") {
        std::cout << "--------- WELCOME TO THE STAR WARS HANGMAN GAME ---------" << '\n';

        std::cout << "PLAY\nEXIT\n";
        std::cout << "Your response: ";
        std::cin >> userInput;
        userInput = toUpperCase(userInput);
        if (userInput == "EXIT") {
            std::cout << "THANK YOU FOR PLAYING!\n";
            return 0;
        }
        else if (userInput == "PLAY") {
            int tries{};

            std::string playAgain {"YES"};

            while (toUpperCase(playAgain) != "NO") {
                tries = setDifficulty();
                std::cout << "                      score: " << score << '\n';
                int result = playRound(tries);
                score += result;
                std::cout << "\n                      score: " << score << '\n';
                std::cout << "\n\nDo you want to play again? (yes/no): ";
                std::cin >> playAgain;

                playAgain = toUpperCase(playAgain);
                if (playAgain == "NO") {
                    break;
                }
                else if (playAgain == "YES") {
                    continue;
                }
                else {
                    std::cout << "INVALID RESPONSE\n";
                    break;
                }

            }

        }
        else {
            std::cout << "Choose either of the two options!!\n";
        }

    }
    return 0;
}