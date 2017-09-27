#include <iostream>

using namespace std;

int main()
{

    int x,y,aux;
    cout << "Introduceti primul numar:";cin >> x;
    cout << "Introduceti al doilea numar:";cin >> y;
    cout << "Primul numar este: " << x << endl;
    cout << "Al doilea numar este: " << y << endl;
    aux=y;
    y=x;
    x=aux;

    cout << "Valorile celor 2 numere interschimbate sunt: " << x << "   " << y << endl;


    return 1;
}
