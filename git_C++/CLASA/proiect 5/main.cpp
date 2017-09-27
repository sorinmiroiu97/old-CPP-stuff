#include <iostream>
#include<math.h>
using namespace std;
float a,b,c,d;
int main()
{
    cin>>a>>b>>c;
    if(b==0)
        if(c==0)
            cout<<"inf sol";
            else
            cout<<"impos";
            else
    cout<<-(b/a);
         {
             float d;
             d=pow(b,2)-4*(a*c);
             if(d>0)cout<<(-b+sqrt(d))/(2*a)<<" "<<(-b-sqrt(d))/2*a;
                if(d==0)
                    cout<<(-b/(2*a));
                    if(d<0) cout<<"nr complex"<<"\n";
         }

    return 0;
}
