#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "Hello Rakib" << endl;
    }
    class Person
    {
    public:
        int height;
        Person(int height)
        {
            this->height = height;
        };
    };
}

namespace Shakib
{
    int age2 = 30; // 2ta namespace create korte gele different variable name dite hoi;
    void hello2()
    {
        cout << "Hello Shakib" << endl;
    }
}

using namespace Shakib;

int main()
{
    cout << Rakib::age << endl;
    Rakib::hello();
    Rakib::Person rkb(160);
    cout << rkb.height << endl;

    cout << age2 << endl;
    hello2();

    return 0;
}