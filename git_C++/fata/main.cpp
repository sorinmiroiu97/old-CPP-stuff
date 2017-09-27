#include <iostream>
using namespace std;
int n,s,x;
int main()
{cin>>n;
s=0;
while(n!=0)
{
     x=n%10;
     s=s+x;
     n=n/10;
}
if(s==4)cout<<"voia e fraier";
    return 0;
}
