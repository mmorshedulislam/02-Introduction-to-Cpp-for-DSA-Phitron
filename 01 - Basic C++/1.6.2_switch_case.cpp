// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here

    int x;
    cin >> x;

    switch (x % 2)
    {
    case 0: // (x % 2 == 0)
        cout << "even";
        break;
    case 1:
        cout << "odd";
        break;
    }

    return 0;
}