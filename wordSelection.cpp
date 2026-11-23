//
// Created by Lalitaditya Malik on 20/11/26.
//

#include <iostream>
#include <vector>
#include <random>
#include <string>
#include <cassert>
#include "wordSelection.h"

std::string wordSelect(const std::vector<std::string>& wordSet) {
    assert(!wordSet.empty()&&"wordSelect: word list is empty!");
    
    std::size_t n = wordSet.size();
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<std::size_t> dist(0,n-1);
    std::string word = wordSet[dist(gen)];
    return word;
}