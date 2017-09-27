#include <iostream>

using namespace std;

int main()
{
    int a,b,c,y,x;
    cout<< "Dati o valoare pentru a: ";cin>>a;
    cout<< "Dati o valoare pentru b: ";cin>>b;
    cout<< "Dati o valoare pentru c: ";cin>>c;
    x=1-(c*a)/(b*a-b);
    y=a/((c*a)-b);
    cout <<"x= "<<x<<""<<"y= "<<y;

    return 1;
}
