#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;                  // Hello_world
    cout << s[0] << endl;      // H
    cout << s.at(0) << endl;   // H
    cout << s.front() << endl; // H

    cout << s[s.size() - 1] << endl; // d
    cout << s.back() << endl;        // d

    return 0;
}