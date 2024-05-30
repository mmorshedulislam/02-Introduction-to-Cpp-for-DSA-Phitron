#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int Id;
    string Name;
    char Section;
    int TotalMarks;
    Student() {}
    Student(int id, string name, char sec, int marks)
    {
        Id = id;
        Name = name;
        Section = sec;
        TotalMarks = marks;
    }
    void getStudentData()
    {
        cout << Id << " " << Name << " " << Section << " " << TotalMarks << endl;
    }
};

int main()
{
    int test, id, marks;
    char sec;
    string name;

    Student std[3], ans;

    cin >> test;
    while (test--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> id >> name >> sec >> marks;
            std[i] = Student(id, name, sec, marks);
        }

        if (std[0].TotalMarks >= std[1].TotalMarks)
        {
            if (std[0].TotalMarks >= std[2].TotalMarks)
            {
                ans = std[0];
            }
            else
            {
                ans = std[2];
            }
        }
        else
        {
            if (std[1].TotalMarks >= std[2].TotalMarks)
            {
                ans = std[1];
            }
            else
            {
                ans = std[2];
            }
        }
        ans.getStudentData();
    }
    return 0;
}