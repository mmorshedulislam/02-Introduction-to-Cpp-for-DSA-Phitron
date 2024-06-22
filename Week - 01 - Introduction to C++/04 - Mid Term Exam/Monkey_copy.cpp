#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100000 + 1];
    while (cin.getline(a, 100000 + 1))
    {
        sort(a, a + strlen(a));
        for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] == ' ')
            {
                continue;
            }
            else
            {
                cout << a[i];
            }
        }
        cout << endl;
    }

    return 0;
}