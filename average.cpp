// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Marwan Mashaly
// Created on December 2019
// This program checks if the entered number is the same as random number


#include <time.h>
#include <iostream>
#include <random>



main() {
    // this is what runs the program.

    srand(time(NULL));

    int randomNumbers[10];
    int total;
    int counter;
    int number;
    int average;

    total = 0;

    std::cout << "Here are the 10 numbers:" << std::endl;
    for (int counter = 0; counter < 10; counter++) {
        number = (rand() % 10) + 1;
        randomNumbers[counter] = number;
        total = total + randomNumbers[counter];
        std::cout << randomNumbers[counter] << " ";
    }
    std::cout << "" << std::endl;
    average = (total / 10);
    std::cout << "The average is: " << average << std::endl;
}
