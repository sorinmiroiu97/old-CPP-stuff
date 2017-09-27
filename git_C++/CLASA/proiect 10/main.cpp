#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("prime.out");
unsigned i,a,b,ok,aux,d;
int main()
{
    f>>a>>b;
    if(a>b) {aux=a;a=b;b=aux;}
        for(i=a;i<=b;i++)
    {
        ok=1;
        for(d=2;d<=i/2&&ok;d++)
            if(i%d==0)ok=0;
        if(ok==1) g<<i<<'\n';
    }
    f.close();
    g.close();
  return 0;

}
