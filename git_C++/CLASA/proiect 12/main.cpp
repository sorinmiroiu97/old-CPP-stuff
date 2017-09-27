#include <iostream>
using namespace std;
int a,b,i,d,ok;
int main()
{
    cin>>a>>b;
    if(a>b){aux=a;}
    for(i=a;i<=b;i++)
    {
        ok=1;
        for(d=2;d<=i/2&&ok;d++)
            if(i%d==0)ok=0;
        if(ok)cout<<i<<" ";
    }
    return 0;
}
