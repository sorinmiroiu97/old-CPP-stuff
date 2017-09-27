#include <iostream>

using namespace std;
int n,i,j,v[100],t[100];
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele vectorului"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        if(v[i]>0)
        {
            j++;
            t[j]=v[i];
        }
    }
    n=j;
    cout<<"Vectorul cu elementele pozitive:"<<endl;
    for(j=1;j<=n;j++)
    {
        cout<<"t["<<j<<"]="<<t[j]<<" ";
    }
    return 0;
}
