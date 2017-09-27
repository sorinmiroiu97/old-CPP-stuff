#include <iostream>
using namespace std;
int main()
{
  int a[50],b[50],i,j,n,k[50],ok=0;
 int c[50],l=0;
    cout<<"n= ";cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<"a["<<i<<"]= ";
      cin>>a[i];
    }
cout<<endl;
    for(i=0;i<n;i++)
    {
      cout<<"b["<<i<<"]= ";
      cin>>b[i];
    }
  for(i=0;i<n;i++)
{
    k[i]=a[i]-b[i];
  }
  for(i=0;i<n;i++)
{
   c[l]=k[i]-k[i+1];
    l++;
  }
  for(l=0;l<n-1;l++)
{
    if(c[l]==c[l+1])
        ok++;
  }
  if(ok==n-2)
  cout<<"Valorile sunt proportionale";
  else
  cout<<"Valorile nu sunt proportionale";
  return 0;
}
