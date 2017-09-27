#include <iostream>

using namespace std;
int n,i,j,x[100],v[100],aux;
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele vectorului"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        v[i]=x[i];
    }
    cout<<"a)"<<endl;
    aux=x[1];
    for(i=1;i<=n-1;i++)
    {
        x[i]=x[i+1];
    }
    x[n]=aux;
    cout<<"Vectorul modificat:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]="<<x[i]<<" ";
    }
    cout<<endl<<"b)"<<endl;
    //reinitializez vectorul la valorile initiale
    for(i=1;i<=n;i++)
    {
        x[i]=v[i];
    }
    aux=x[n];
    for(i=n;i!=0;i--)
    {
        x[i]=x[i-1];
    }
    x[1]=aux;
    cout<<"Vectorul modificat:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]="<<x[i]<<" ";
    }
    cout<<endl<<"c)"<<endl;
    //reinitializez vectorul la valorile initiale
    for(i=1;i<=n;i++)
    {
        x[i]=v[i];
    }
    for(i=1;i<n-1;i++)
    {
        aux=x[i];
        x[i]=x[i+1];
        x[i+1]=aux;
        i++;
    }
    cout<<"Vectorul modificat:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]="<<x[i]<<" ";
    }
    return 0;
}
