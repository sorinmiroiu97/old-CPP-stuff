#include <iostream>
using namespace std;
int n,m,uc;
int main()
{
    cin>>n;
    while(n>0)
    {
        uc=n%10;
        if(uc%2==0) m=m*10+uc;
        n/=10;
    }
    cout<<m;
    return 0;
}
