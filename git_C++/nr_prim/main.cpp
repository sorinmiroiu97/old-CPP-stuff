#include <fstream>
using namespace std;
ifstream f("nrprim.in");
ofstream g("nrprim.out");
int i,n,a,b,aux,ok,d;
int main()
{
    f>>a>>b;
    if (a>b) {aux=a;a=b;b=aux;}
    for(i=a;i<=b;i++)
    {
        ok=1;
        for(d=2;d<=i/2&&ok;d++)
            if(i%d==0) ok=0;
        if(ok==1) g<<i<<" ";
    }
    f.close();
    g.close();
    return 0;
}
