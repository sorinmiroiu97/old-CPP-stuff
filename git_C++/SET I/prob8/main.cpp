#include <iostream>
using namespace std;
int x1,x2,x3;
int main()
{
    cout << "Scrie un numar de 5 cifre: ";cin >> x3;
    x2=(x3/10)%1000;
    x1=(x2/10)%10;
    cout << " " << " " << x1 << endl;
    cout << " " << x2 << endl;
    cout << x3;
    return 1;
}
