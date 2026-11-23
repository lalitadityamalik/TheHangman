//
// Created by Lalitaditya Malik on 21/11/26.
//
#include <iostream>
#include "caseUpper.h"
#include "setDifficulty.h"

int setDifficulty () {
    while (true) {
        std::cout << "Enter difficulty:\n Hard \n Normal \n Easy \n";
        std::string input;
        std::cin >> input;
        input = toUpperCase(input);
        if (input == "HARD") {
            return 3;
        }
        else if (input == "NORMAL") {
            return 5;
        }
        else if (input == "EASY") {
            return 7;
        }
        else {
            std::cout << "Enter a valid difficulty!\n";
        }
    }

}
