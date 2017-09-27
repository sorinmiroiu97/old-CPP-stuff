#include <iostream>

using namespace std;
int a,b,c,s,p;
int main()
{
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;
cout<<"c=";cin>>c;

    if(s==6 && p==6)
    {
    s=a+b+c;
    p=a*b*c;
    cout<<"Numerele citite sunt chiar 1,2 si 3"<<endl;
    }
        else
            {
            cout<<"Numerele citite nu sunt egale cu 1, 2 si 3"<<endl;
            }

    return 0;
}
