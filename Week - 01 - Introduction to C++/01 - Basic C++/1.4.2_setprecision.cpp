// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    // Write C++ code here
    double a;
    cin >> a;
    // printf("%0.2lf\n", a); // 10.55
    // cout << a << endl; // 10.5454
    cout << fixed << setprecision(2) << a << endl; // 10.55
    return 0;
}

// input
// 10.54538091

// output