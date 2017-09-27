#include <iostream>
using namespace std;
float a,b,rez;
int main()
{

    cout << "Scrie valoarea lui a: ";cin >> a;
    cout << "Scrie valoarea lui b: ";cin >> b;

    if(b!=0){
        rez=a/b;
        cout << "Rezultatul impartirii celor doua numere este: " << rez;
    }else
        cout << "Impartire imposibila";
    return 0;
}
