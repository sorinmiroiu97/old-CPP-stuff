#include <iostream>
#include <cmath>
using namespace std;
int n,i,j,v[100],t[100];
float aux;
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele vectorului:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        aux=sqrt(v[i]);
        if(aux*aux==v[i])
        {
            j++;
            t[j]=v[i];
        }
    }
    cout<<"Vectorul format din patrate perfecte:"<<endl;
    n=j;
    for(j=1;j<=n;j++)
        cout<<"t["<<j<<"]="<<t[j]<<" ";
    return 0;
}
