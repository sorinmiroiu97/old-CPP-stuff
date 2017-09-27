//se citesc n nr intregi de la tast
//det cate dintre ac sunt prime
#include <iostream>
using namespace std;
int n,i,d,nr=0,x,ok;
int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x; ok=1;
        for(d=2;d<=x/2;d++)
        {
            if(x%d==0) ok=0;
        }
        if(ok==1) nr++;
    }
    cout<<nr;
    return 0;
}
