#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout << "Scrieti cinci valori:" << endl;
    cout << "Scrie valoarea lui a: ";cin >> a;
    cout << "Scrie valoarea lui b: ";cin >> b;
    cout << "Scrie valoarea lui c: ";cin >> c;
    cout << "Scrie valoarea lui d: ";cin >> d;
    cout << "Scrie valoarea lui e: ";cin >> e;

    if((a%7)==0)
        cout << a << endl;
    if((b%7)==0)
        cout << b << endl;
    if((c%7)==0)
        cout << c << endl;
    if((d%7)==0)
        cout << d << endl;
    if((e%7)==0)
        cout << e << endl;
    return 0;
}
