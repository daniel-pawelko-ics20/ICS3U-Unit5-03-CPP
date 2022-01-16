// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// Grading chart

#include <iostream>
#include <string>
#include <map>

using std::endl; using std::string;

float grading(string mark) {
    // grading function to return middle grade

    // defining conversion chart
    std::map<string, float> chart = {
        {"4+", 97.5},
        {"4", 90.5},
        {"4-", 83},
        {"3+", 78},
        {"3", 74.5},
        {"3-", 71},
        {"2+", 68},
        {"2", 64.5},
        {"2-", 61},
        {"1+", 58},
        {"1", 54.5},
        {"1-", 51},
        {"R", 24.5}};

    // process
    if (chart[mark]) {
        return chart[mark];
    } else {
        return chart["1-"];
    }
}

int main() {
    // main function for calling grading function

    // defining variable
    string mark_inp;

    // input
    std::cout << "Enter the level you want converted to a precentage: ";
    std::cin >> mark_inp;

    // process/calling function
    std::cout << "Level " << mark_inp << " has a middle precentage of ";
    std::cout << grading(mark_inp) << "%" << std::endl;

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
