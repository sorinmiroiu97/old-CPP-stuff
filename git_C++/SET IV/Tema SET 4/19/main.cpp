#include <iostream>

using namespace std;
int n,o,i,j;
float m,x[100];
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele vectorului"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    i=1;
    while(i<n)
    {
        m=x[i]+x[i+1];
        n++;
        for(j=n;j>i+1;j--)
            x[j]=x[j-1];
        x[i+1]=m/2;
        i=i+2;
    }
    cout<<"Vectorul modificat:"<<endl;
    for(i=1;i<=n;i++)
        cout<<"x["<<i<<"]="<<x[i]<<" ";
    return 0;
}
