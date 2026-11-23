//
// Created by Lalitaditya Malik on 21/11/26.
//
#include <iostream>
#include <string>
#include <cctype>
#include "caseUpper.h"

std::string toUpperCase(std::string givenWord) {
    for (char &c : givenWord) {
        c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
    }
    return givenWord;
}