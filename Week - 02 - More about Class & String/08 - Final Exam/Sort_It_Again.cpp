#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool s_cmp(Student a, Student b)
{
    if (a.eng_marks == b.eng_marks)
    {
        if (a.math_marks == b.math_marks)
            return a.id < b.id;
        else
            return a.math_marks > b.math_marks;
    }
    else
        return a.eng_marks > b.eng_marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, s_cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}