#include <string>

class StudentGrades
{

private:
    int homework[10];
    int quizzes[10];
    int exams[4];
    std::string lastName;
    std::string firstName;

public:
    StudentGrades(std::string lastName, std::string firstName);
    std::string getName();
    void enterHomeworkGrades();
    void enterQuizGrades();
    void enterExamGrades();
    void printGrades();
    double getHomeworkAverage();
};