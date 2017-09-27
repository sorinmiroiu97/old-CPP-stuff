#include <iostream>

using namespace std;
int n,i,j,v[100],t[100],aux,a[100];
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele vectorului:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
        a[i]=v[i];
    }
    //a)
    for(i=1;i<=n/2;i++)
    {
        aux=v[i];
        v[i]=v[n-i+1];
        v[n-i+1]=aux;
    }
    cout<<"Vectorul inversat:"<<endl;
    for(i=1;i<=n;i++)
        cout<<"v["<<i<<"]="<<v[i]<<" ";
    //reinitializez vectorul la forma initiala
    for(i=1;i<=n;i++)
    {
       v[i]=a[i];
    }
    cout<<endl;
    //b)
    j=n;
    for(i=1;i<=n;i++)
    {
        t[j]=v[i];
        j--;
    }
    cout<<"Vectorul inversat:"<<endl;
    for(i=1;i<=n;i++)
        cout<<"t["<<i<<"]="<<t[i]<<" ";
    return 0;
}
