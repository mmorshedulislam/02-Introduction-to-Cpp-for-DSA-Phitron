#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[50];
};

int main()
{
    Cricketer *dhoni = new Cricketer();
    char dhoni_c[50] = "India";
    dhoni->jersey_no = 18;
    strcpy(dhoni->country, dhoni_c);

    Cricketer *kohli = new Cricketer();
    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);
    
    cout << dhoni->jersey_no << " " << dhoni->country << endl;
    cout << kohli->jersey_no << " " << kohli->country << endl;
    delete dhoni;
    cout << kohli->jersey_no << " " << kohli->country << endl;

    return 0;
}