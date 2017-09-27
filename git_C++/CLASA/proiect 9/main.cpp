#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("perfecte.out");
unsigned x,n,i,s,d;
int main()
{
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>x;
        s=1;
        for(d=2;d<=x/2;d++)
            if(x%d==0)s=s+d;
        if(s==x)g<<x<<" ";
    }
    f.close();
    g.close();
    return 0;
}
