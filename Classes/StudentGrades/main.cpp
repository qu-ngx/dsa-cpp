#include "StudentGrades.h"
#include <iostream>

int main()
{
    StudentGrades sg("Smith", "Sally");
    sg.enterHomeworkGrades();
    sg.enterQuizGrades();
    sg.enterExamGrades();

    sg.printGrades();

    std::cout << "For example, here's the homework average again:" << sg.getHomeworkAverage() << '\n';

    return 0;
}