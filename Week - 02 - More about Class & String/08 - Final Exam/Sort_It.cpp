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
    int sum_sub()
    {
        return math_marks + eng_marks;
    }
};

bool s_cmp(Student a, Student b)
{
    if (a.sum_sub() == b.sum_sub())
    {
        return a.id < b.id;
    }
    else
        return a.sum_sub() > b.sum_sub();
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