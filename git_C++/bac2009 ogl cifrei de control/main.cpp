#include <iostream>
using namespace std;
unsigned n;
int nr,a,m;
int main()
{
    cin>>n;
    nr=0;
    for(a=9;a>=0;a--)
    {
        m=n;
        while(m!=0&&m%10!=a)
        {
            m=m/10;
        }
        if(m!=0) nr=nr*10+m%10;
    }
    cout<<nr;
    return 0;
}
