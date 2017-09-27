#include <iostream>

using namespace std;
int n,i,j,nr,A,v[100],t[100];
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
    cout<<"Introduceti A=";
    cin>>A;
    for(i=1;i<=n;i++)
    {
        if(v[i]>A)
        {
            j++;
            t[j]=v[i];
        }
    }
    nr=j;
    cout<<"Exista "<<nr<<" numere mai mari ca si A in vector"<<endl;
    cout<<"Numerele sunt:"<<endl;
    for(j=1;j<=nr;j++)
        cout<<t[j]<<" ";
    return 0;
}
