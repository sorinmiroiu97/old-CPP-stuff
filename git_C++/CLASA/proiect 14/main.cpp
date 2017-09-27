#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
unsigned long x=3,d;
unsigned n,k=0,ok,y;
int main()
{
    f>>n;
    while(k<n)
    {
        y=x+2;
        ok=1;
        for(d=2;d<=x/2&& ok;d++)
            if(x%d==0)ok=0;
        if(ok==1)
        {
            for(d=2;d<=y/2&& ok;d++)
            if(y%d==0)ok=0;
        if(ok==1)
        {
            g<<"("<<x<<","<<y<<")";
            k++;
        }

        }
        x++;
    }

    return 0;
}
