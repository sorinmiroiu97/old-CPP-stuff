#include <iostream>

using namespace std;
int n,i,j,k,v[100],p[100],imp[100],aux;
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
        if(v[i]%2==0)
        {
            j++;
            p[j]=v[i];
        }
        else
        {
            k++;
            imp[k]=v[i];
        }
    }
    for(i=1;i<=j;i++)
    {
        v[i]=p[i];
    }
    for(i=1;i<=n;i++)
    {
        v[j+i]=imp[i];
    }
    cout<<"Vectorul modificat:"<<endl;
    for(i=1;i<=n;i++)
        cout<<"v["<<i<<"]="<<v[i]<<" ";
    return 0;
}
