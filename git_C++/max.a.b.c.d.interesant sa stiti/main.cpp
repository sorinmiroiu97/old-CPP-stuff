#include <iostream>
using namespace std;
int a,b,c,d,maxi;
int main()
{
    cin>>a>>b>>c>>d;
    maxi=a;
    if(b>maxi) maxi=b;
    if(c>maxi) maxi=c;
    if(d>maxi) maxi=d;
    cout<<"Max= "<<maxi;
    return 0;
}
