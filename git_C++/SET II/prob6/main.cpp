#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Scrie valoarea lui a: ";cin >> a;
    cout << "Scrie valoarea lui b: ";cin >> b;
    cout << "Scrie valoarea lui c: ";cin >> c;

    if((a%2)==0)
        cout << a << "|" << "PAR" << endl;
    else
        cout << a << "|" << "IMPAR" << endl;
    if((b%2)==0)
        cout << b << "|" << "PAR" << endl;
    else
        cout << b << "|" << "IMPAR" << endl;
    if((c%2)==0)
        cout << c << "|" << "PAR" << endl;
    else
        cout << c << "|" << "IMPAR" << endl;
    return 0;
}
