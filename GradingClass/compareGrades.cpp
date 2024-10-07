#include "grade_analysis.hpp"
#include <iostream>

void compareGrades(const int grades[], int size) {
    std::cout << "Comparing grades between students:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            std::cout << "Student " << i + 1 << " (" << grades[i] << ") vs Student " << j + 1 << " (" << grades[j] << ")\n";
        }
    }
}