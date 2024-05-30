#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student *a = new Student[n]; // dynamic

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    Student mn, mx;
    mn.marks = INT_MAX;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // check min
        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
        // check max
        if (a[i].marks > mx.marks)
        {
            mx = a[i];
        }
    }

    cout << "Min: " << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << "Max: " << mx.name << " " << mx.roll << " " << mx.marks << endl;

    return 0;
}

// input
// 5
// Akib 101 50
// Shakib 105 45
// Galib 107 50
// Rifat 45 78
// Yasin 63 57

// output
// Min: Shakib 105 45
// Max: Rifat 45 78