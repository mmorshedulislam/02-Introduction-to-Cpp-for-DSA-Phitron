#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a, b;

    // in C
    // while (scanf("%d %d", &a, &b) != EOF)
    // {
    //     printf("%d %d", a, b);
    // }

    // in C++
    while (cin >> a >> b) // not necessary EOF in C++
    {
        cout << a << " " << b << endl;
    }
    return 0;
}

// input
// 50 60 80 40 98 100

// output
// 50 60
// 80 40
// 98 100