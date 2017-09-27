#include<iostream>
using namespace std;
int suma(int n)
{
    int uc,s=0;
    while(n!=0)
    {
        uc=n %10;
        s+= uc;
        n=n/10;
    }
  return s;
}
int s,f,n,uc,v[100],m=0,i=0;
int main()
{
    cout<<"n= ";cin>>n;
    while(m<n)
  {
    f=suma(m);
    if(f%2!=0) v[i]=m;
    m++;
    i++;
  }
//afisarea vectorului v[i]
    for(i=0;i<=m;i++)
        {if(v[i]!=0) cout<<v[i]<<" ";}
  return 0;
}
