#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // Hello I am Md Morshedul Islam
    stringstream ss;
    ss << s;
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
        cout << word << endl;
        // Hello
        // I
        // am
        // Md
        // Morshedul
        // Islam
    }
    cout << cnt << endl; // 6
    return 0;
}