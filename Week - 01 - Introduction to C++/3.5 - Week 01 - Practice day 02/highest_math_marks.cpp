#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section[100];
    int math_marks;
    int cls;
    Student(char name[100], int roll, char section[100], int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        strcpy(this->section, section);
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    char rahim_n[10] = "Rahim";
    char rahim_s[2] = "A";
    Student rahim(rahim_n, 101, rahim_s, 300, 9);

    char karim_n[10] = "Karim";
    char karim_s[2] = "B";
    Student karim(karim_n, 301, karim_s, 201, 11);

    char selim_n[10] = "Selim";
    char selim_s[2] = "C";
    Student salim(selim_n, 201, selim_s, 88, 8);

    if (rahim.math_marks > karim.math_marks && rahim.math_marks > salim.math_marks)
    {
        cout << rahim.name << endl;
    }
    else if (karim.math_marks > rahim.math_marks && karim.math_marks > salim.math_marks)
    {
        cout << karim.name << endl;
    }
    else
    {
        cout << salim.name << endl;
    }

    return 0;
}