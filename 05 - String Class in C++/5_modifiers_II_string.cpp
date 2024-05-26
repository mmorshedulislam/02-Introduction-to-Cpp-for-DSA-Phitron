#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // s = "Gello";
    s.assign("Gello");
    cout << s << endl; // Gello

    string e = "HelloWorld";
    e.erase(5, 2);     // starting index, number of characters
    cout << e << endl; // Hellerld

    string r = "HelloWorld";
    r.replace(5, 0, "so");
    cout << r << endl; // HellosoWorld
    
    string i = "HelloWorld";
    i.insert(5, "Morshed");
    cout << i << endl; // HelloMorshedWorld
    return 0;
}