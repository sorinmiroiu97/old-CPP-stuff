#include <iostream>
#include <cmath>
using namespace std;
int long m,n=1,nr,s=0,uc;
int main()
{
    cin>>nr;
    while(n<nr)
    {
        s=0;
        m=n;
        while(m!=0)
        {
            uc=m%10;
            s=s+pow(uc,3);
            m/=10;
        }
        if(s==n) cout<<n<<" ";
        n++;
    }
    return 0;
}
