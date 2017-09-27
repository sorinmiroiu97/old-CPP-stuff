#include <iostream>

using namespace std;
int n,i,d,v[100];
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti n numere:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    cout<<"Introduceti divizorul d:";
    cin>>d;
    cout<<"Numere divizibile cu "<<d<<":"<<endl;
    for(i=1;i<=n;i++)
    {
        if(v[i]%d==0)
            cout<<v[i]<<" ";
    }
    return 0;
}
