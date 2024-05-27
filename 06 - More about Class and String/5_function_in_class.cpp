#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    };
    void print()
    {
        cout << name << " " << age << " " << marks1 << " " << marks2 << endl;
    }
    int total_marks()
    {
        return marks1 + marks2;
    }
};

int main()
{
    Person morshed("Md Morshedul Islam", 24, 90, 85);
    morshed.print(); // Md Morshedul Islam 24 90 85
    
    int total = morshed.total_marks();
    cout << "Total: " << total << endl; // Total: 175
    return 0;
}