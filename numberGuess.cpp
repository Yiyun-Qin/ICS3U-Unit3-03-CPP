// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created at March 2022
// This is a math program, calculating the number guess game

#include <iostream>

int main() {
    // This function comparing the guessed number and answer
    const int ANSWER = 6;
    int numberGuess;

    // input
    std::cout << "Enter the number you guess between 0 - 9: ";
    std::cin >> numberGuess;

    // process
    std::cout << std::endl;
    if (numberGuess == ANSWER) {
        // output
        std::cout << "Your guess is right!";
    }
    if (numberGuess != ANSWER) {
        std::cout << "Your guess is wrong!";
    }
    std::cout << "\nDone." << std::endl;
}
