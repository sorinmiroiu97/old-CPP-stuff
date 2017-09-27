#include <iostream>

using namespace std;
int a,b,c,x,s=0;
int main()
{
    cout<<"introd a,b,c: ";
    cin>>a>>b>>c;
    cout<<"introduceti se suma se cunoaste: ";
    cin>>x;
    if(x==1)
    {
        s=a+b;
        cout<<a<<"+"<<b<<"\n"<<c;
    }
    if(x==2)
    {
        s=b+c;
        cout<<b<<"+"<<c<<"\n"<<a;
    }
    if(x==3)
    {
        s=a+c;
        cout<<a<<"+"<<c<<"\n"<<b;
    }
    return 0;
}
