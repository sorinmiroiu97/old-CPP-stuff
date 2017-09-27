#include <iostream>
#include <cmath>
using namespace std;
int xa,ya;
int xb,yb;
int A,B,AB;
int main()
{

    cout << "Scrieti o valoare pentru Xa: "; cin >> xa;
    cout << "Scrieti o valoare pentru Ya: "; cin >> ya;
    cout << "Scrieti o valoare pentru Xb: "; cin >> xb;
    cout << "Scrieti o valoare pentru Ya: "; cin >> yb;
    cout << "A este: " << "(" << xa << "," << ya << ")" << endl;
    cout << "B este: " << "(" << xb << "," << yb << ")" << endl;
    AB=sqrt(pow(xa-xb,2)+pow(ya-yb,2));
    cout << "Lungimea segmentului AB este: " << AB;
    return 0;
}
