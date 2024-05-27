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
    Person *rakib = new Person("Rakib", 25);
    Person *shakib = new Person("Shakib", 30);

    // rakib = shakib; // not recommended

    // rakib->name = shakib->name; // it's okay but not recommended
    // rakib->age = shakib->age; // it's okay but not recommended

    *rakib = *shakib; // recommended
    delete shakib;

    cout << rakib->name << " " << rakib->age << endl;

    return 0;
}