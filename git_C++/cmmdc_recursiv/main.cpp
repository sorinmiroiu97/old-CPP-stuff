#include <iostream>
using namespace std;
int cmmdc(int a, int b)
{
    if (a>b) return cmmdc(a-b,b);
        else if (b>a) return cmmdc(a,b-a);
    else if (a==b) return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<cmmdc(a,b);
    return 0;
}
