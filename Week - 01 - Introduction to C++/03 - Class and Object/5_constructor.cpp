#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int r, int cls, double gpa)
    {
        // 3babei indicate kora jai
        roll = r;
        (*this).cls = cls; // dereferencing
        this->gpa = gpa;   // dereferencing (shortcut)
    }
};

int main()
{
    Student rahim(101, 9, 4.33);
    Student karim(102, 10, 5.03);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}