// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program reads a set of integers
//     and prints the sums of the even and odd integer

#include <iostream>
#include <string>

int main() {
    // this function reads the inputs and finds the sums

    // variables
    int loopCounter = 0;
    int evenSum = 0;
    int oddSum = 0;
    std::string numOfIntAsString;
    int numOfInt;
    int integer;
    std::string inputAsString;

    // input
    std::cout << "How many integers do you wish to input? ";
    std::cin >> numOfIntAsString;

    // process & output
    try {
        numOfInt = std::stoi(numOfIntAsString);
        if (numOfInt > 0) {
            while (loopCounter < numOfInt) {
                std::cout << "Enter an integer: ";  // input
                std::cin >> inputAsString;
                integer = std::stoi(inputAsString);
                loopCounter += 1;
                if (integer % 2 == 0) {
                    evenSum += integer;
                } else {
                    oddSum += integer;
                }
            }
            std::cout << "\nThe sum of the even integers is " << evenSum <<
                  std::endl;
            std::cout << "The sum of the odd integers is " << oddSum <<
                  std::endl;
        } else if (numOfInt == 0) {
            std::cout << "\nThe sum of the even integers is 0" << std::endl;
            std::cout << "The sum of the odd integers is 0" << std::endl;
        } else {
            std::cout << "\nInvalid. You cannot enter a negative amount"
                  " of integers" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid" << std::endl;
    }
    std::cout << "Done." << std::endl;
}
