#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;
        int xlen = x.size();

        size_t pos = 0;

        while ((pos = s.find(x, pos)) != string::npos)
        {
            s.replace(pos, xlen, "#");
            pos += 1;
        }

        cout << s << endl;
    }

    return 0;
}