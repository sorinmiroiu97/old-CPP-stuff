#include <iostream>
using namespace std;
int n;
int s(int d)
{
    if (d==n+1) return 0;
    else if (d<=n && n%d!=0) return s(d+1);
    else if (d<=n && n%d==0) return s(d+1)+d;
}
int main()
{
    cin>>n;
    cout<<s(1);
    return 0;
}
