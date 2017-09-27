#include <iostream>

using namespace std;
int long n,s=0;
int main()
{
    cout<<"n= "; cin>>n;
    if(n%2==0) s=-n/2;
    else if(n%2!=0) s=-n/2+n;
    cout<<s;
    return 0;
}
