#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100 + 1];
    char section;
    int marks;
    Student(int id, char name[100 + 1], char section, int marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->marks = marks;
    }
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a_id, a_marks;
        char a_name[100 + 1], a_section;
        cin >> a_id >> a_name >> a_section >> a_marks;

        int b_id, b_marks;
        char b_name[100 + 1], b_section;
        cin >> b_id >> b_name >> b_section >> b_marks;

        int c_id, c_marks;
        char c_name[100 + 1], c_section;
        cin >> c_id >> c_name >> c_section >> c_marks;

        Student *a = new Student(a_id, a_name, a_section, a_marks);
        Student *b = new Student(b_id, b_name, b_section, b_marks);
        Student *c = new Student(c_id, c_name, c_section, c_marks);

        if (a->marks > b->marks && a->marks > c->marks)
        {
            cout << a->id << " " << a->name << " " << a->section << " " << a->marks << " " << endl;
        }
        else if (b->marks > a->marks && b->marks > c->marks)
        {
            cout << b->id << " " << b->name << " " << b->section << " " << b->marks << " " << endl;
        }
        else if (c->marks > a->marks && c->marks > b->marks)
        {
            cout << c->id << " " << c->name << " " << c->section << " " << c->marks << " " << endl;
        }

        else if (a->marks == b->marks && a->marks == c->marks && b->marks == c->marks)
        {
            if (a->id < b->id && a->id < c->id)
            {
                cout << a->id << " " << a->name << " " << a->section << " " << a->marks << " " << endl;
            }
            else if (b->id < a->id && b->id < c->id)
            {
                cout << b->id << " " << b->name << " " << b->section << " " << b->marks << " " << endl;
            }
            else if (c->id < a->id && c->id < b->id)
            {
                cout << c->id << " " << c->name << " " << c->section << " " << c->marks << " " << endl;
            }
        }

        else if (a->marks == b->marks)
        {
            if (a->id < b->id)
            {
                cout << a->id << " " << a->name << " " << a->section << " " << a->marks << " " << endl;
            }
            else
            {
                cout << b->id << " " << b->name << " " << b->section << " " << b->marks << " " << endl;
            }
        }
        else if (a->marks == c->marks)
        {
            if (b->id < c->id)
            {
                cout << b->id << " " << b->name << " " << b->section << " " << b->marks << " " << endl;
            }
            else
            {
                cout << c->id << " " << c->name << " " << c->section << " " << c->marks << " " << endl;
            }
        }
        else if (b->marks == c->marks)
        {
            if (c->id < b->id)
            {
                cout << c->id << " " << c->name << " " << c->section << " " << c->marks << " " << endl;
            }
            else
            {
                cout << b->id << " " << b->name << " " << b->section << " " << b->marks << " " << endl;
            }
        }

        cout << c->id << " " << c->name << " " << c->section << " " << c->marks << " " << endl;
    }

    return 0;
}