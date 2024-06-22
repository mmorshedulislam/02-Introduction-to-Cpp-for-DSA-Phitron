#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool isJessica = false;

    while (cin >> s)
    {
        if (s == "Jessica")
        {
            isJessica = true;
            break;
        }
    }

    if (isJessica)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}