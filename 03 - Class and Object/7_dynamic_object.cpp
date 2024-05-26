#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(101, 9, 4.78); // static object
    Student *karim = new Student(103, 10, 3.33);
    
    // rahim
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    // karim
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}

// output
// 101 9 4.78
// 103 10 3.33