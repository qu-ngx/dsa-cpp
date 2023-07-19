#include "StudentGrades.h"
#include <iostream>

StudentGrades::StudentGrades(std::string last, std::string first)
{
    lastName = last;
    firstName = first;
}

std::string StudentGrades::getName()
{
    std::string name = lastName + ", " + firstName;
    return name;
}

void StudentGrades::enterHomeworkGrades()
{
    std::cout << "Enter ten homework grades: " << '\n';
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter score: ";
        std::cin >> homework[i];
    }
}

void StudentGrades::enterQuizGrades()
{
    std::cout << "Enter ten quiz grades: " << '\n';
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter score: ";
        std::cin >> quizzes[i];
    }
}

void StudentGrades::enterExamGrades()
{
    std::cout << "Enter four exam grades: " << '\n';
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Enter score: ";
        std::cin >> exams[i];
    }
}

void StudentGrades::printGrades()
{
    std::cout << "Homework Grades: " << '\n';
    for (int i = 0; i < 10; i++)
        std::cout << homework[i] << '\n';
    std::cout << '\n';

    std::cout << "Quiz Grades: " << '\n';
    for (int i = 0; i < 10; i++)
        std::cout << quizzes[i] << '\n';
    std::cout << '\n';

    std::cout << "Exam Grades: " << '\n';
    for (int i = 0; i < 4; i++)
        std::cout << exams[i] << '\n';
    std::cout << '\n';
}

double StudentGrades::getHomeworkAverage()
{
    double total = 0;
    for (int i = 0; i < 10; i++)
        total += homework[i];

    return total / 10;
}