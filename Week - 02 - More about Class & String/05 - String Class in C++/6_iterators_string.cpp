#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s; // Hello

    // for (int i = 0; i <s.size(); i++) {
    //     cout << s[i] << endl;
    // }
    
    cout << *s.begin() << endl;     // H
    cout << *s.end() << endl;       // null
    cout << *(s.end() - 1) << endl; // o

    string a;
    cin >> a; // Hello
    string::iterator it;
    // for (it = a.begin(); it < a.end(); it++)
    // for (string::iterator it = a.begin(); it < a.end(); it++)
    for (auto it = a.begin(); it < a.end(); it++)
    {
        cout << *it << endl;
        // H
        // e
        // l
        // l
        // o
    }
    return 0;
}