#include <iostream>

using namespace std;
int n,s,par=0,ok=1;
int main()
{
    while(ok==1)
    {
        cin>>n;
        if(n<1||n>50)
            cout<<"ERROR 403"<<endl;
        else
        {
            if(n<30)
            {
                s+=n;
                if(n%2==0)
                    par++;
            }
            else
                ok=0;
        }
    }
    cout<<"suma valorilor tuturor bilelor: "<<s<<"\n";
    cout<<"nr bilelor cu valoare para: "<<par;
    return 0;
}
