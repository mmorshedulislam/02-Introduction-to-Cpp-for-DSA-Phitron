#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "Hello";
    s1 = "Gello";
    cout << s1 << endl;

    string s2 = "Gello";

    // if (strcmp(s1, s2) == 0) in C
    if (s1 == s2) /// in C++
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }
    return 0;
}