#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // ascending
    // sort(arr, arr + n); // starting point, ending point

    // descending
    sort(arr, arr + n, greater<int>()); // starting point, ending point, compare func

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// input
// 5
// 20 30 10 50 40

// output (ascending)
// 10 20 30 40 50

// output (descending)
// 50 40 30 20 10
