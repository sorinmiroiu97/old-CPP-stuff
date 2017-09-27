#include <iostream>
using namespace std;
unsigned long f(unsigned n)
{
    if (n==1) return 0;
    else if (n==2) return 1;
    else if (n>=3) return f(n-1)+f(n-2);
}
unsigned long n;
int main()
{
    cin>>n;
    cout<<f(n);
    return 0;
}
