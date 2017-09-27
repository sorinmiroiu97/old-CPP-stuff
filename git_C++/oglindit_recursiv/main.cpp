#include <iostream>
using namespace std;
int long afisare(int n)
{
    if (n!=0) {cout<<n%10; afisare(n/10);}
}
int main()
{
    int n;
    cin>>n;
    cout<<afisare(n);
    return 0;
}
