#include <iostream>
using namespace std;
int n,m,x,i,j,a[100],b[100],c[200];
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti numarul de elemente m=";
    cin>>m;
    cout<<"Introduceti elementele primei multimi"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
        c[i]=a[i];
    }
    i--;
    cout<<"Introduceti elementele celei de a doua multimi"<<endl;
    for(j=1;j<=m;j++)
    {
        cout<<"b["<<j<<"]=";
        cin>>b[j];
        c[i+j]=b[j];
    }
    j--;
    x=i+j;
    cout<<"Intersectia celor doua multimi:"<<endl;
    for(i=1;i<=x;i++)
    {
        cout<<"c["<<i<<"]="<<c[i]<<" ";
    }
    return 0;
}
