#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

Student::Student() {
    strcpy(surname, "Unknown");
    recordBookNumber = 0;
    for (int i = 0; i < 5; ++i) {
        grades[i] = 0;
    }
}

Student::Student(const char* s, int rb, const int g[5]) {
    set(s, rb, g);
}

void Student::set(const char* s, int rb, const int g[5]) {
    strcpy(surname, s);
    recordBookNumber = rb;
    for (int i = 0; i < 5; ++i) {
        grades[i] = g[i];
    }
}

void Student::show() const {
    cout << "Student: " << surname << " | Record Book: " << recordBookNumber << " | Grades: ";
    for (int i = 0; i < 5; ++i) {
        cout << grades[i] << " ";
    }
    cout << " | Average: " << getAverageGrade() << "\n";
}

float Student::getAverageGrade() const {
    float sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += grades[i];
    }
    return sum / 5.0f;
}

const char* Student::getSurname() const {
    return surname;
}