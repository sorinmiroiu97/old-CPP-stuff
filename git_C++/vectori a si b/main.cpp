#include <math.h>
#include <fstream>
using namespace std;
ifstream f("vectori.in");
ofstream g("vectori.out");
int xa,xb,ya,yb,l,xm,ym;
int main()
{
    f>>xa;
    f>>ya;
    f>>xb;
    f>>yb;
    l=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    xm=(xa+xb)/2;
    ym=(ya+yb)/2;
    g<<"l= "<<l<<endl;
    g<<"xm= "<<xm<<endl;
    g<<"ym= "<<ym<<endl;
    f.close();
    g.close();
    return 0;
}
