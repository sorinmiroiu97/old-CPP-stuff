#include <iostream>

using namespace std;
int n,d=1;
int main()
{
    cin>>n;
    while(d<=n)
    {
        if(n%d==0) cout<<d<<" ";
        d++;
    }
    return 0;
}
