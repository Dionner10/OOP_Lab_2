#pragma once
#include "Student.h"

class Group {
private:
    Student students[30];
    int currentCount;

public:
    Group();
    
    void addStudent(const Student &newStudent);
    void show() const;
    void printTop5Students();
};