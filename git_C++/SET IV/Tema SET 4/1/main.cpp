#include <iostream>
using namespace std;
int n,i,x[10];
int main()
{
    cout<<"Introduceti numarul n=";
    cin>>n;
    while(n!=0)
    {
       i++;
       x[i]=n%10;
       n=n/10;
    }
    n=i;
    cout<<"Vectorul cu cifrele lui n:"<<endl;
    for(i=n;i!=0;i--)
        cout<<"x["<<i<<"]="<<x[i]<<" ";
    return 0;
}
