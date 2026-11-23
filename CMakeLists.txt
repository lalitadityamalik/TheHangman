cmake_minimum_required(VERSION 4.4)
project(TheHangman)

set(CMAKE_CXX_STANDARD 20)

add_executable(TheHangman main.cpp
        wordSelection.cpp
        wordSelection.h
        caseUpper.cpp
        caseUpper.h
        setDifficulty.cpp
        setDifficulty.h
        roundPlayer.cpp
        roundPlayer.h
        strCompare.cpp
        strCompare.h
)
