#include <bits/stdc++.h>
using namespace std;

int *fun1()
{
    int *a = new int;
    cout << "func1: " << a << endl;
    *a = 100;
    return a;
}

int **fun2()
{
    int *b = new int;
    *b = 100;
    cout << "func2: " << &b << endl;
    return &b;
}

int main()
{
    // dynamic variable declare
    int n = 10;       // variable for static memory allocation
    int *a = new int; // dynamic memory allocation
    *a = 200;
    cout << *a << endl;
    // delete a; // delete dynamic variable

    float *f = new float;
    *f = 1.25;
    cout << *f << endl;

    // call function
    int *f1 = fun1();
    cout << "main: " << f1 << endl;
    cout << "main: " << *f1 << endl;

    int **f2 = fun2();
    cout << "main: " << f2 << endl;
    return 0;
}