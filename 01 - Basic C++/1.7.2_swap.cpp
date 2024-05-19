// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // Write C++ code here
    int a, b;
    cin >> a >> b; // 5 10

    // my_swap(&a, &b);
    swap(a, b);            // built in func
    cout << a << " " << b; // 10 5
    return 0;
}