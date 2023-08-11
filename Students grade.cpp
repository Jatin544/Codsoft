#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<Student> students;

    for (int i = 0; i < numStudents; ++i) {
        Student s;
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> s.name;
        cout << "Enter grade for " << s.name << ": ";
        cin >> s.grade;
        students.push_back(s);
    }

    double sum = 0.0;
    double highestGrade = students[0].grade;
    double lowestGrade = students[0].grade;

    for (const Student &s : students) {
        sum += s.grade;
        if (s.grade > highestGrade) {
            highestGrade = s.grade;
        }
        if (s.grade < lowestGrade) {
            lowestGrade = s.grade;
        }
    }

    double averageGrade = sum / numStudents;

    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
