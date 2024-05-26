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
        Student s[3];
        Student highest = {0, "", ' ', 0};

        for (int i = 0; i < 3; i++)
        {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].marks;
        }

        for (int i = 0; i < 3; i++)
        {
            if (s[i].marks > highest.marks)
            {
                highest = s[i];
            }
            else if (s[i].marks == highest.marks && s[i].id < highest.id)
            {
                highest = s[i];
            }
        }

        cout << highest.id << " " << highest.name << " " << highest.section << " " << highest.marks << endl;
    }

    return 0;
}