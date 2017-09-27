#include <iostream>
using namespace std;
int a,b,c;
int main()
{
    cout << "Dati 3 valori: " << endl;
    cout << "Valoarea lui a este: ";cin >> a;
    cout << "Valoarea lui b este: ";cin >> b;
    cout << "Valoarea lui c este: ";cin >> c;


    if((a*a)==(b*b+c*c)){
        cout << "Valorile date sunt numere pitagoreice";
    }else if((b*b)==(a*a+c*c)){
        cout << "Valorile date sunt numere pitagoreice";
    }else if((c*c)==(a*a+b*b)){
        cout << "Valorile date sunt numere pitagoreice";
    }else
        cout << "Valorile date nu sunt numere pitagoreice";

    return 0;
}
