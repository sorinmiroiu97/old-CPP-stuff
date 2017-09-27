#include <iostream>

using namespace std;

int main()
{
    int x,y,suma,produs,cat,rest;
    float ma,rez;

    cout << "Introduceti primul numar:";cin >> x;
    cout << "Introduceti al doilea numar:";cin >> y;

    suma = x+y;
    cout << "Suma numerelor este: " << suma << endl;
    ma = (x+y)/2;
    cout << "Media aritmetica a numerelor este: " << ma << endl;
    cat = x/y;
    rest = x%y;
    cout << "Catul numerelor este: " << cat << ",iar restul este: " << rest << endl;
    rez = x/y;
    cout << "Rezultatul impartirii celor 2 numere este: " << rez << endl;


    return 1;
}
