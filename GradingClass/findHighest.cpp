#include "grade_analysis.hpp"

int findHighest(const int grades[], int size) {
    int highest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}