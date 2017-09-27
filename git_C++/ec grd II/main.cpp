#include <iostream>
#include <math.h>
using namespace std;
int a,b,c,d;
int main()
{ cin>>a>>b>>c;
if(a==0)
    if(b==0)
    if(c==0)
    cout<<"Are o inf de sol";
else
    cout<<"Impos";
else
    {cout<<"Ec de grd I"<<-c/b;}
    else
        {d=pow(b,2)-4*a*c;
    if(d<0) cout<<"Sol nu sunt reale";
    if(d==0) cout<<-b/2*a;
    if(d>0) cout<<(-b-sqrt(d))/(2*a)<<" "<<(-b+sqrt(d))/(2*a)<<" ";
    }
return 0;
}
