#include <fstream>
using namespace std;
ifstream f("ec.in");
ofstream g("ec.out");
int a,b,x;
int main()
{
    f>>a>>b;
    if(a)
    {
        x=-b/a;
        g<<x<<endl;
    }
    else if(a==0&&b==0) g<<"Infinitate solutii"<<endl;
    else g<<"Nu are solutii"<<endl;

    f.close();
    g.close();
    return 0;
}
