#include <iostream>
using namespace std;

int progresie_aritmetica(int l)
{
    float a[50],b[50];
    int j=0,i,ok=0,k=0,n;
  for(i=0;i<n-1;i++)
    {
   b[j]=a[i]-a[i+1];
   j++;
   ok++;
  }

for(j=0;j<ok;j++){
  if(b[j]==b[j+1])
  k++;
}
if(k==ok-1)
    return 0;
else
    return 1;
}

int j,n,i,l;
float a[50],b[50];
int main()
{
  cout<<"n=";cin>>n;

//Citire vector
  for(i=0;i<n;i++)
{
    cout<<"a["<<i<<"]= ";cin>>a[i];
  }

  //Afisare vector
  cout<<endl;
  cout<<"\n a[ ";
  for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
  }
  cout<<"]";

cout<<endl;
if(progresie_aritmetica(n)==0)
cout<<"\n Sirul este o progresie aritmetica";
else
cout<<"\n Sirul nu este o progresie aritmetica";


  return 0;
}

