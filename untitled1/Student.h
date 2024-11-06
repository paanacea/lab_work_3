#ifndef STUDENT_H
#define STUDENT_H

#include "string"
#include "vector"

using namespace std;

class Student {
private:
    string name;
    vector<int> grades;

public:
    Student(string  name, const vector<int>& grades);

    string toString() const;
    vector<int>& getGrades();

};

#endif //STUDENT_H
