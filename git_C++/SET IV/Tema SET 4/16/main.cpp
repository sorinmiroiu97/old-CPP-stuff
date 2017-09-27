#include <iostream>

using namespace std;
int n,i,ok,v[100];
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
    for(i=2;i<=n;i++)
    {
        if(v[i]>v[i-1])
            ok++;
    }
    if(ok!=n-1)
        cout<<"Elementele vectorului NU sunt in ordine crescatoare.";
    else
        cout<<"Elementele vectorului sunt in ordine crescatoare.";
    return 0;
}
