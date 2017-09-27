#include <iostream>
using namespace std;
int s(int n)
{
    if (n==0) return 0;
    else if (n>0) return n%10+s(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<s(n);
    return 0;
}
