// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    char s[100];
    int n;
    cin>> n;
    
    // fgets(s, 100, stdin); // in C
    // cin >> s; // in C++
    getchar(); // for control space enter
    cin.getline(s, 100); // in C++
    cout << n << endl;
    cout << s << endl;
    cout << strlen(s) << endl;
    return 0;
}