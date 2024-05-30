#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "hello world";
    // cout << s << endl;            // hello world
    // cout << s.size() << endl;     // 11
    // cout << s.length() << endl;   // 11
    // cout << s.capacity() << endl; // 15
    // cout << s.max_size() << endl; // 2147483647

    // string a = "jgakljgkjhljahlkjlkjlkfjklhjfj";
    // cout << a.capacity() << endl; // 30
    // a = "kgjalkjkljalkjgjoirjoagmjagjjljlkgjagkjalkgjlkjagkljljhljhkjlkjlkjl";
    // cout << a.capacity() << endl; // 67 dynamically changed string

    // string c = "Hello, world";
    // cout << c << endl; // Hello, world
    // c.clear();
    // cout << c << endl; // ""
    // cout << c.size() << endl; // 0
    
    // if (c.empty() == true) cout << "Empty" << endl; // Empty
    // else cout << "Not Empty" << endl; // Not Empty

    string r;
    cin >> r; // Hello_world
    cout << r << endl; // Hello_world
    r.resize(5);
    cout << r << endl; // Hello
    r.resize(8, 'N'); // null value er poriborte "N" bosano hoice
    cout << r << endl; // HelloNNN
    
    return 0;
}