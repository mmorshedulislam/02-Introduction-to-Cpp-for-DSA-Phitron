#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a, b, c;
    a.roll = 101;
    a.gpa = 4.50;
    char temp[100] = "Morshed";
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.gpa << " " << endl;

    // input b
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    // input c
    getchar();
    cin.getline(c.name, 100);
    cin >> c.roll >> c.gpa;

    cout << b.name << " " << b.roll << " " << b.gpa << " " << endl;
    cout << c.name << " " << c.roll << " " << c.gpa << " " << endl;
    return 0;
}

// input
// shakib al hasan
// 102 3.20
// rakib ahmed
// 103 52.23

// output
// shakib al hasan 102 3.2
// rakib ahmed 103 52.23