#include <bits/stdc++.h>
using namespace std;

void fun(string &s)
{
    s = "World";
}

int main()
{
    string s = "Hello";
    cout << s << endl; // Hello

    fun(s);
    cout << s << endl; // World

    return 0;
}