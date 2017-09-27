#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    float formula;
    cout << "Scrieti valoarea lui a: ";
    cin >> a;
    cout << "Scrieti valoarea lui b: ";
    cin >> b;
    cout << "Scrieti valoarea lui c: ";
    cin >> c;
    formula = (2*a*b-c*c)/0.25;
    cout << "Rezultat: " << formula;

    return 0;
}
