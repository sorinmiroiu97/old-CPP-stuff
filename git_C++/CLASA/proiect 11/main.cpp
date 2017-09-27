#include <iostream>
using namespace std;
int ab,i,ogl,ok,n,d,s,p,opt;
int main()
{
    do{
        cout<<"1.nr prim\n 2.Nr perfect\n 3.cmmdc\n 4.s/p/glo/pal\n 5.fibonacci\n 6.maxi/mini\n 0.iesire";
        cout<<"optiunea";cin>>opt;
        if(opt==1){
            cin>>n;
            ok=1;
            for(d=2;d<=n/2&&ok;d++)
                if(n%d==0)ok=0;
            if(ok) cout<<"nr prim";
            else cout<<"nu e nr prim\n";}
    }
    if(opt==2)
    {
        cin>>n;
        s=1;
        for(d=2;d<=n/2;d++)
        if(n%d==0)s=s+d;
        if(s==0)cout<<"nr perfect\n";
        else cout<<"nr nu e perfect\n";
    }
    if(opt==3)
    {
        cin>>a>>b;
        while(a!=b)
            if(a>b)a=a-b;
        else b=b-a;
        cout<<"cmmdc"<<a<<'\n';
    }
    if(opt==4)
    {
        s=0;p=1;ogl=0;cin>>a;b=a;
        while(b!=0)
        {
            s=s+b%10;
            p=p*(b%10);
            ogl=ogl*10+b%10;
            b=b/10;
        }

    cout<<"s="<<a<<'\n'p="<<p"<<'\n'ogl="<<ogl<<"'\n'
    if(ogl==a)cout<<"nr palindrom\n";
    else cout<<"nr nu e palindrom";
    }
if(opt==5)
{
    cin>>n;
    if(n==1)cout<<1;
    else cout<<1<<" "<<1<<" ";
    a=1;b=1;
    for(i=3;i<=n;i++)
    {
        f=a+b;
        cout<<f<<" ";
        a=b;
        b=f;
    }
}
cout<<'\n';
{if(opt==6)
      {
          cin>>n>>a;
          int mi=a;ma=a;
          for(i=2;i<=n;i++)
          {
              cin>>a;
              if(a<mi)mi=a;
              if(a>ma)ma=a;
          }
          cout<<mi<<" "<<ma<<'\n';
      }
    return 0;
}
