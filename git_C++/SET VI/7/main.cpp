#include <iostream>
using namespace std;
int par(int n)
{
    int ok=0;
    for(int d=2;d<=n/2;d++)
        {if(n%d==0 && d%2==0) ok++;}
        if(ok==0) return 0;
        else
    return ok;
}
int impar(int n)
{
    int ok=0;
    for(int d=2;d<=n/2;d++)
        {if(n%d==0 && d%2!=0) ok++;}
        if(ok==0) return 0;
        else
    return ok;
}
int n,np,ni;
int main()
{
    cout << "introdu n: "; cin>>n;
    np=par(n);
    ni=impar(n);
    //cout<<np<<" "<<ni;
    cout<<"raportul: "<<np/ni;
    return 0;
}
