#include <iostream>
using namespace std;
int n;
int prim(int d)
{
    if (d==n/2+1) return 1;
    else if (d<=n/2 && n%d==0) return 0;
    else if (d<=n/2 && n%d!=0) return prim(d+1);
}
int main()
{
    cin>>n;
    if(prim(n)==1) cout<<"prim"; else cout<<"neprim";
    return 0;
}
