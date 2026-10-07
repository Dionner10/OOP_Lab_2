#pragma once

class Student {
private:
    char surname[50];
    int recordBookNumber;
    int grades[5];

public:
    Student();
    Student(const char* s, int rb, const int g[5]);
    
    void set(const char* s, int rb, const int g[5]);
    void show() const;

    const char* getSurname() const;
    float getAverageGrade() const;
};