#include <iostream>
#include "Group.h"

int main() {
    Group myGroup;

    int grades1[5] = {5, 4, 5, 5, 4};
    int grades2[5] = {3, 3, 4, 3, 4};
    int grades3[5] = {5, 5, 5, 5, 5};
    int grades4[5] = {4, 4, 4, 5, 4};
    int grades5[5] = {3, 4, 3, 3, 3};
    int grades6[5] = {5, 4, 4, 5, 5};

    myGroup.addStudent(Student("Kovalenko", 101, grades1));
    myGroup.addStudent(Student("Shevchenko", 102, grades2));
    myGroup.addStudent(Student("Boyko", 103, grades3));
    myGroup.addStudent(Student("Melnyk", 104, grades4));
    myGroup.addStudent(Student("Tkachenko", 105, grades5));

    Student tempStudent;
    tempStudent.set("Kravchenko", 106, grades6);
    myGroup.addStudent(tempStudent);

    myGroup.show();
    std::cout << "\n";

    myGroup.printTop5Students();

    return 0;
}