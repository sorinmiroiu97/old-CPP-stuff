#include <fstream>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
unsigned x,y,a,b;
int main()
{
    f>>a>>b;
    x=a;
    y=b;
    while(a!=b)
        if(a>b)a=a-b;
    else b=b-a;
    g<<x/a<<"/"<<y/a;
    f.close();
    g.close();
    return 0;
}
