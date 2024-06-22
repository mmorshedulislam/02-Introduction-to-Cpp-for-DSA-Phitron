#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    // a = a + b;
    // a += b;
    a.append(b);
    cout << a << endl; // HelloWorld
    cout << b << endl; // World

    string c = "Cello";
    // c = c + "A";
    c.push_back('A');  // expand size and add to a char
    cout << c << endl; // CelloA

    c.pop_back();      // remove last character
    cout << c << endl; // Cello

    c.pop_back();
    cout << c << endl; // Cell
    return 0;
}