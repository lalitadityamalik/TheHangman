//
// Created by Lalitaditya Malik on 23/11/26.
//
#include <iostream>
#include <string>
#include "strCompare.h"

void updateProgress(const std::string& guess,const std::string& word, std::string& progress) {

    for (std::size_t i = 0; i < word.size(); ++i) {
        if (i < guess.size() && guess[i] == word[i]) {
            progress[i]=word[i];
        }

    }

}

