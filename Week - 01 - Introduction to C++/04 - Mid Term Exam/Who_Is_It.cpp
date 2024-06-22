#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Student highestStudentMarks = {0, "", ' ', 0};

        for (int i = 0; i < 3; i++)
        {
            Student current;

            cin >> current.id >> current.name >> current.section >> current.marks;
            if (current.marks > highestStudentMarks.marks || (current.marks == highestStudentMarks.marks && current.id < highestStudentMarks.id))
            {
                highestStudentMarks = current;
            }
        }

        cout << highestStudentMarks.id << " " << highestStudentMarks.name << " " << highestStudentMarks.section << " " << highestStudentMarks.marks << endl;
    }

    return 0;
}