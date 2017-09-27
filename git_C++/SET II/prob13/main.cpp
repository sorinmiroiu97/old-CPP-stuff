#include <iostream>
using namespace std;
int x,y;
int main()
{
    cout<<"introdu x si y: ";
    cin>>x>>y;
    cout<<"A("<<x<<","<<y<<")";
    if(x==0&&y==0) cout<<" coincide cu originea";
    else if(x>0&&y==0) cout<<" pe OX";
    else if(x==0&&y>0) cout<<" e pe OY";
    else if(x>0&&y>0) cout<<" e in C1";
    else if(x<0&&y==0) cout<<" e pe OX'";
    else if(x<0&&y>0) cout<<" e in C2";
    else if(x<0&&y<0) cout<<" e in C3";
    else if(x==0&&y<0) cout<<" e pe OY'";
    else if(x>0&&y<0) cout<<" e in C4";

    return 0;
}
