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

Student *fun()
{
    Student *rahim = new Student(104, 5, 4.99); // dynamic object
    return rahim;
}

int main()
{
    Student *ans = fun();
    cout << ans->roll << " " << ans->cls << " " << ans->gpa << endl;
    return 0;
}

// output
// 104 5 4.99