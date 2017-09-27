#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
int a,b,n,i;
int main()
{
    f>>n;
    f>>a;
    for(i=2;i<=n;i++)
    {
        f>>b;
        while(a!=b)
            if(a>b)a=a-b;
        else b=b-a;
    }
    g<<a;
    f.close();
    g.close();
    return 0;
}
