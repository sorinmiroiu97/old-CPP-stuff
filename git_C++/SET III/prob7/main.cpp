#include <iostream>

using namespace std;
int n,d=2,ok=1;
int main()
{
    cin>>n;
    while(d<=n/2)
    {
        if(n%d==0) ok=0;
        d++;
    }
    if(ok) cout<<n<<" este nr prim";
    else cout<<n<<" nu este nr prim";
    return 0;
}
