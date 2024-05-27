#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        (*this).age = age;
    }
    void print()
    {
        cout << name << " " << age << endl;
    };
};

int main()
{
    Person morshed("Morshed", 24);
    morshed.print(); // Morshed 24
    return 0;
}