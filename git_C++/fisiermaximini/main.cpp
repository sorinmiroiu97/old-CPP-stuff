#include <fstream>
using namespace std;
ifstream f("mm.in");
ofstream g("mm.out");
int n,x,m,i;
int main()
{
    f>>n>>x;
    m=x;
    for(i=2;i<=n;i++)
    {
        f>>x;
        if(x>m) m=x;
    }
    g<<"maxim="<<m;
    f.close();
    g.close();
    return 0;
}
