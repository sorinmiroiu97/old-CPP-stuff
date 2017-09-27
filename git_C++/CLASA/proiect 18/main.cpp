#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
unsigned long n,d,ok,ogl,i,x;
int main()
{
    f>>n;
    for(i=2;i<=n;i++)
    {
        ok=1;
        for(d=2;d<=i/2&&ok==1;d++)
            if(i%d==0) ok=0;
        if(ok==1)
        ogl=0;
        x=1;
        while(x)
        {
            ogl=ogl*10+x%10;
            x=x/10;
        }
        for(d=2;d<=ogl/2&&ok==1;d++)
            if(ogl%d==0) ok=0;
        if(ok==1)
            g<<i<<" ";
    }
    f.close();
    g.close();
    return 0;
}














