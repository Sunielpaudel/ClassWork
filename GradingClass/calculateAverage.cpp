#include "grade_analysis.hpp"

double calculateAverage(const int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += grades[i];
    }
    return static_cast<double>(sum) / size;
}
