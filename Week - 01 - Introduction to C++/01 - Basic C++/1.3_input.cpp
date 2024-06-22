#include <iostream> // C++
// #include <stdio.h> // C

using namespace std;

int main () {
    int n, m;
    // scanf("%d", &n); // in C
    cin >> n >> m;
    cout << n << " " << m << endl;
    
    // print value
    char c;
    cin >> c;
    cout << c << endl;
    
    // typecasting
    // get ascii value
    int ascii = c; 
    cout << ascii << endl; // get ascii value
    cout << int(c) << endl; // convert char -> int (jekono data type theke onno data type e convert kora jai)
    
    // typecasting
    int a = 10;
    long long int b = (long long int) (a);
    
    return 0;
};