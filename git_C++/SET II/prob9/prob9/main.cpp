#include <iostream>
#include <cmath>
using namespace std;
float x,n;
int main()
{
    cout<<"n= "; cin>>n;
    x=pow(n,1.0/3);
    if(pow(x,3)==n)
    cout<<"este cub perfect";
    else cout<<"nu este cub perfect";
    return 0;
}
