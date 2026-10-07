#include "Group.h"
#include <iostream>
#include <utility>

using namespace std;

Group::Group() {
    currentCount = 0;
}

void Group::addStudent(const Student &newStudent) {
    if (currentCount < 30) {
        students[currentCount] = newStudent;
        currentCount++;
    } else {
        cout << "Error: Group is full!\n";
    }
}

void Group::show() const {
    if (currentCount == 0) {
        cout << "Group is empty.\n";
        return;
    }

    cout << "Group List:\n";
    for (int i = 0; i < currentCount; ++i) {
        cout << i + 1 << " ";
        students[i].show();
    }
}

void Group::printTop5Students() {
    if (currentCount == 0) {
        cout << "Group is empty.\n";
        return;
    }

    Student temp[30];
    for (int i = 0; i < currentCount; ++i) {
        temp[i] = students[i];
    }

    for (int i = 0; i < currentCount - 1; ++i) {
        for (int j = 0; j < currentCount - i - 1; ++j) {
            if (temp[j].getAverageGrade() < temp[j + 1].getAverageGrade()) {
                swap(temp[j], temp[j + 1]);
            }
        }
    }

    cout << "Top 5 students by average grade:\n";
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << " " << temp[i].getSurname() << " - Average grade: " << temp[i].getAverageGrade() << "\n";
    }
}
