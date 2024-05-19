// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    // switch case accept kore direct final value like (x == 10) not (x >= 10)
    
    int x = 3;
    switch (x) {
        case 1: // (x == 1)
            cout << "one";
            break;
        case 2: 
            cout << "two";
            break;
        case 3: 
            cout << "three";
            break;
        case 4: 
            cout << "four";
            break;
        case 5: 
            cout << "five";
            break;
        default: 
            cout << "dhur b*l, kichui mile nai";
    }

    return 0;
}