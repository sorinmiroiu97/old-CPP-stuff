#include <iostream>

using namespace std;
int n,i,x[100],r;
int main()
{
    cout <<"Introduceti numarul de elemente n=";
    cin>>n;
    cout<<"Introduceti elementele vectorului:"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    for(i=1;i<n;i++)
    {
        r=x[i]%x[i+1];
        while(r!=0)
        {
            x[i]=x[i+1];
            x[i+1]=r;
            r=x[i]%x[i+1];
        }
    }
    cout<<"CMMDC:"<<x[n];
    return 0;
}
