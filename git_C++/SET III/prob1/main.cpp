#include <iostream>

using namespace std;
int n,i=0,s=0;
int main()
{
    cin>>n;
    while(n>9)
    {
        s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    n=s;
    }
    cout<<s;
    return 0;
}
