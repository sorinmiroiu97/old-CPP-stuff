#include <iostream>

using namespace std;
int n,m,o,i,j,k=1,v[100],t[100],r[100];
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti numarul de elemente m=";
    cin>>m;
    cout<<"Introduceti elementele primei multimi"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cout<<"Introduceti elementele celei de a doua multimi"<<endl;
    for(j=1;j<=m;j++)
    {
        cout<<"t["<<j<<"]=";
        cin>>t[j];
    }
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=m;j++)
       {
           if(v[i]==t[j])
           {
            r[k]=v[i];
            k++;
           }
       }
    }
    o=k-1;
    cout<<"Intersectia celor doua multimi:"<<endl;
    cout<<"k="<<o<<endl;
    cout<<"{";
    for(k=1;k<=o;k++)
    {
        if(k!=o)
            cout<<r[k]<<",";
        else
            cout<<r[k];
    }
    cout<<"}";
    return 0;
}
