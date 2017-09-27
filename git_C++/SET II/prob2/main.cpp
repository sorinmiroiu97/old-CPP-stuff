#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Scrie valoarea lui a: ";cin >> a;
    cout << "Scrie valoarea lui b: ";cin >> b;
    if((a%b)==0)
        cout << "A este divizibil cu B" << endl;
    else
        cout << "A nu este divizibil cu B" << endl;
    if(a<b)
    cout << "Numerele sunt consecutive" << endl;
    else
        cout << "Numerele nu sunt consecutive" << endl;
    if((a%2)==0)
        cout << "Numarul A este par" << endl;
    else
        cout << "Numarul A este impar" << endl;
    if((b%2)==0)
        cout << "Numarul B este par" << endl;
    else
        cout << "Numarul B este impar" << endl;

    return 0;
}
