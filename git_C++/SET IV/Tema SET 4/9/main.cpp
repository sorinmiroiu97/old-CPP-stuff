#include <iostream>

using namespace std;
int n,i,a,s,v[100];
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
    cout<<"Introduceti a=";
    cin>>a;
    for(i=1;i<=n;i++)
    {
        if(v[i]%a==0)
            s=s+v[i];
    }
    cout<<"Suma elementelor divizibile cu a este:"<<endl;
    cout<<s;
    return 0;
}
