#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id;
    }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        char temp = a[i].s;
        a[i].s = a[j].s;
        a[j].s = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }

    return 0;
}