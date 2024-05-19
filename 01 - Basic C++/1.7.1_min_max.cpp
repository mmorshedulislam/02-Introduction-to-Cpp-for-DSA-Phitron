// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Write C++ code here
    int a, b, c, d;
    cin >> a >> b >> c >>d; // 5 9 7 3
    int m = min(a, b); // compare in 2 value
    int n = max(c, d); // compare in 2 value
    cout << m << " " << n << endl; // 5 7
    
    int mn = min({a, b, c, d});
    cout << mn << endl; // 3
    
    int mx = max({a, b, c, d});
    cout << mx << endl; // 9
    return 0;
}