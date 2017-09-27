#include <iostream>

using namespace std;
int i=3,s,n,f,p;
int main()
{
    cin>>n;
    f=p=1;
    cout<<f<<" "<<p<<" ";
    while(i<=n)
    {
        s=f+p;
        cout<<s<<" ";
        p=f; f=s;
        i++;
    }
    return 0;
}
