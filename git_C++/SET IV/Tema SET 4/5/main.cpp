#include <iostream>

using namespace std;
int n,m,i,j,o,v[100],p[100],imp[100];
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele multimii"<<endl;
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
            o++;
            imp[o]=v[i];
        }
    }
    n=j;
    m=o;
    cout<<"Multimea elementelor pare:"<<endl;
    for(j=1;j<=n;j++)
    {
        cout<<p[j]<<" ";
    }
    cout<<endl<<"Multimea elementelor impare:"<<endl;
        for(j=1;j<=m;j++)
    {
        cout<<imp[j]<<" ";
    }
    return 0;
}
