/*#include <iostream>

using namespace std;
int pal(int n)
{
    int ogl;
    while(n!=0)
    {
        ogl=ogl*10+n%10;
        n/=10;
    }
    if(ogl==n)
    return 1;
    else return 0;
}
int prim(int n)
{
    int d,ok;
    for(d=2;d<=n/2;d++)
    {
        if(n%d==0) ok=0;
    }
    if(ok) return 1;
    else return 0;
}
int a,b,nr=0;
int main()
{
    cin>>a>>b;
    while(a<=b)
    {
        nr=a;
        if(pal(nr))
            if(prim(nr)) cout<<nr<<" ";
        a++;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int d=2,a,b,n,ogl,k,ok;
int main()
{
    cin>>a>>b;
    while(a<=b)
    {
        n=a; ogl=0;
        while(n!=0)
    {
        ogl=ogl*10+n%10;
        n/=10;
    }
    n=a;
    if(ogl==n) ok=1;//if(ok) n e pal
    d=2;
    while(d<=n/2)
    {
        if(n%d==0) k=0; //dc k=1 e prim
        d++;
    }
    if(ok==1 && k==1) cout<<n<<" ";
    ok=0; k=1;
        a++;
    }

    return 0;
}
