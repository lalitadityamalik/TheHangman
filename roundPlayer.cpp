//
// Created by Lalitaditya Malik on 22/11/26.
//
#include <iostream>
#include <vector>
#include "caseUpper.h"
#include "wordSelection.h"
#include "roundPlayer.h"
#include "strCompare.h"

int playRound(const int maxTries) {
    int tryScore = 0;
    std::vector<std::string> wordSet = {"JEDI", "FORCE", "SITH", "YODA", "VADER", "SKYWALKER", "LIGHTSABER", "GROGU", "CORUSCANT", "TATOOINE"};
    std::string selectedWord = wordSelect(wordSet);
    std::string userInput;
    std::string progress(selectedWord.size(),'_');
    while (true) {
        std::cout << "Guess the word: ";
        std::cin >> userInput;
        userInput = toUpperCase(userInput);
        updateProgress(userInput,selectedWord,progress);
        std::cout << progress << '\n';
        if (progress != selectedWord) {
            tryScore++;
            if (tryScore == maxTries) {
                std::cout << "YOU LOSE!\n";
                std::cout << "The word was: " << selectedWord << '\n' << "Your tries: " << tryScore << '\n';
                return 0;
            }
            std::cout << "You made an incorrect guess!\nTries left: "<< maxTries - tryScore << "\nTRY AGAIN!\n\n";
        }
        else {
            std::cout << "You win!!!\nThe word was: " << selectedWord << '\n' << "Your tries: " << tryScore+1 << '\n';
            if (maxTries < 5) {
                return (maxTries - tryScore)*2;
            }
            else if (maxTries > 5) {
                return static_cast<int>(((maxTries - tryScore)+1)*0.5);
            }
            else {
                return (maxTries - tryScore)*1;
            }

        }

    }
}