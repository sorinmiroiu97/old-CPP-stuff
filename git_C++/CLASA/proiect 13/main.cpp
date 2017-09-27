#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
unsigned long x=2,d;
unsigned n,k=0,ok;
int main()
{
    f>>n;
    while(k<n)
    {
        ok=1;
        for(d=2;d<=x/2&& ok;d++)
            if(x%d==0)ok=0;
        if(ok==1){g<<x<<" ";k++;}
        x++;
    }

    return 0;
}
