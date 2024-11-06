#include "Student.h"

#include <utility>

using namespace std;

Student::Student(string name, const vector<int> &grades) : name(std::move(name)), grades(grades) {}

string Student::toString() const {
    string result = "Имя: " + name + " [";
    for (size_t i = 0; i < grades.size(); i++) {
        result += to_string(grades[i]);
        if (i < grades.size() - 1) result += ", ";
    }
    return result + "]";
}

vector<int>&
Student::getGrades() { return grades; }
