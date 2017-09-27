#include <iostream>
using namespace std;
int i,n,p,z,f;
int main()
{
cin>>n;
p=z=1;
cout<<z<<" "<<p<<endl;
for(i=3;i<=n;i++)
{f=p+z;
cout<<f<<endl;
z=p;
p=f;}
return 0;
}
