#include <iostream>
using namespace std;
int a,b,c,d,maxi;
int main()
{
    cin>>a>>b>>c>>d;
    maxi=a;
    if(b>maxi)maxi=b;
    if(c>maxi)maxi=c;
    if(d>maxi)maxi=d;
    cout<<maxi<<"\n";
    return 0;
}
