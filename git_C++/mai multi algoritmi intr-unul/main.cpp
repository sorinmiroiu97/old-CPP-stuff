#include <iostream>
using namespace std;
int X;
int main()
{
    cout<<"1.Euclid"<<endl;
    cout<<"2.Fibonacci"<<endl;
    cout<<"3.Cautarea secventiala"<<endl;
    cout<<"4.Cautarea binara"<<endl;
    cout<<"5.Ordonaea prin selectie"<<endl;
    cout<<"6.Bubble sort"<<endl;
    cout<<"7.Sortarea prin numarare"<<endl;
    cout<<"Alege: x="; cin>>X;

    if(X==1)
    {
    int a,b,r,p;
    cin>>a>>b;
    r=a%b;
    p=a*b;
    while(r!=0)
    {
        a=b; b=r; r=a%b;
    }
    cout<<"cmmdc "<<b<<endl;
    cout<<"cmmmc "<<p/b;
    }
    if(X==2)
    {
        int f1,f2,f3,n;
        cin>>n;
        f1=1;
        f2=2;
        if(n==1) cout<<1;
        else cout<<1<<" "<<1;
        for(int i=3;i<=n;i++)
        {
            f3=f2+f1;
            f1=f2;
            f2=f3;
            cout<<f3<<" ";
        }

    }
    if(X==3)
    {

    }
    if(X==4)
    {

    }
    if(X==5)
    {

    }
    if(X==6)
    {

    }
    if(X==7)
    {

    }
    return 0;
}
