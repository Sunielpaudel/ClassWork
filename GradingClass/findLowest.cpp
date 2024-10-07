#include "grade_analysis.hpp"

int findLowest(const int grades[], int size) {
    int lowest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}