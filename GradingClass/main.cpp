#include "grade_analysis.hpp"
#include <iostream>
using namespace std;

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    int* grades = new int[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter the grade for student " << i + 1 << ": ";
        cin >> grades[i];
    }

    double average = calculateAverage(grades, numStudents);
    int highest = findHighest(grades, numStudents);
    int lowest = findLowest(grades, numStudents);

    cout << "\nGrade Analysis:\n";
    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    displayAboveAverage(grades, numStudents, average);

    compareGrades(grades, numStudents);

    delete[] grades;

    return 0;
}
