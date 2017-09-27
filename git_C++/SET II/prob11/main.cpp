#include <iostream>
using namespace std;
int a,b,k,numar,numit;
int main()
{
cout<<"Introduceti primul numar :"; cin>>a;
cout<<"Introduceti al doilea numar :"; cin>>b;
cout<<"Introduceti k : "; cin>>k;
if(a%k==0&&b%k==0)
{
    cout<<" Fractia se poate simplifica prin "<<k;
        numar=a/k;
        numit=b/k;
        cout<<"\n fractia e: "<<numar<<"/"<<numit;
}
 else
    cout<<"Fractia nu se poate simplifica";
    return 0;
}

