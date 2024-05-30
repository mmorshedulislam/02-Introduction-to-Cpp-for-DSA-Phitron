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
    // int a[a];
    // Student a[n]; // static

    // int *a = new int[n];
    Student *a = new Student[n]; // dynamic

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

// input
// 3
// Akib khan
// 101 50
// Shakib khan
// 105 45
// Galib ahmed
// 107 50

// output
// Akib khan 101 50
// Shakib khan 105 45
// Galib ahmed 107 50