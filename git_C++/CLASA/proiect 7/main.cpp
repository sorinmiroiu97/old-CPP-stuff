#include <iostream>
#include <math.h>
using namespace std;
float xx1,yy1,xx2,yy2,xx3,yy3,a,b,c,aria,p;
int main()
{
    cin>>xx1>>yy1>>xx2>>yy2>>xx3>>yy3;
    a=sqrt(pow(xx1-xx2,2)+pow(yy1-yy2,2));
    b=sqrt(pow(xx1-xx3,2)+pow(yy1-yy3,2));
    c=sqrt(pow(xx2-xx3,2)+pow(yy2-yy3,2));
    p=(a+b+c)/2;
    aria=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<aria;
    return 0;
}
