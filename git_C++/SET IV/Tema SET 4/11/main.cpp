#include <iostream>

using namespace std;
int n,i,x[100],y[100],a=1,b;
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele vectorului x"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"Introduceti elementele vectorului y"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"y["<<i<<"]=";
        cin>>y[i];
    }
    for(i=1;i<=n;i++)
    {
            a=a*(x[i]+y[i]);
            b=b+x[i]*y[i];
    }
    cout<<"a)"<<endl<<"e="<<a<<endl;
    cout<<"b)"<<endl<<"e="<<b;
    return 0;
}
