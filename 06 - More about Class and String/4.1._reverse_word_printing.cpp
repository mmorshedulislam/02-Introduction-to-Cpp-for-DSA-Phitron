#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss) // always "&" use korte hoi stringstream er sate
{
    string word;
    if (ss >> word)
    {
        print(ss); // call recursion func
        cout << word << endl;
        // Morshed
        // am
        // I
    }
}

int main()
{
    string s;
    getline(cin, s); // I am Morshed
    stringstream ss(s);
    print(ss);

    return 0;
}