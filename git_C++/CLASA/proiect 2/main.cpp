#include <fstream>
#include<math.h>
using namespace std;
ifstream f("date.in");
ofstream g("date.out");
float xa,ya,xb,yb,xm,ym,l;
int main()
{
    f>>xa>>xb>>xb>>yb;
    l=sqrt(pow(xb-xa,2)+pow(yb-ya,2));
    xm=(xa+xb)/2;
    ym=(ya+yb)/2;
    g<<xm<<" "<<ym<<endl<<l;
    f.close();
    g.close();
    return 0;
}
