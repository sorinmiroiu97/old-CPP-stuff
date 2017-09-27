/*#include <iostream>
using namespace std;

int main()
{
    int i=0,k,n,a[10];
    cout<<"n= "; cin>>n;
    while (n != 0)
    {
        a[i] = n % 2;
        n /= 2;
        i++;
    }
    for (k = i; k > 0; k--)
        cout<<a[k];
    return 0;
}*/
#include <iostream>
using namespace std;

int rotund(int a)
{
  int count1=0, count2=0;
  while (a != 0)
    {
        if(a%2==0)
        count1++;
        else
        count2++;
    a=a/2;
  }
  if(count1==count2)
    return 0;
  else
    return 1;
}
int a,n,i;
int main()
{
    cout<<"n= ";cin>>n;
    for(i=0;i<n;i++){
      if(rotund(i)==0) cout<<i<<" ";
    }
    return 0;
}
