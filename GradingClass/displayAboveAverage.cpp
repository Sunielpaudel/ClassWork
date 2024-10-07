#include "grade_analysis.hpp"
#include <iostream>

void displayAboveAverage(const int grades[], int size, double average) {
    std::cout << "Students who scored above the average (" << average << "):\n";
    for (int i = 0; i < size; ++i) {
        if (grades[i] > average) {
            std::cout << "Student " << i + 1 << ": " << grades[i] << std::endl;
        }
    }
}