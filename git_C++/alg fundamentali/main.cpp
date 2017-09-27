#include <iostream>
using namespace std;
float a,b,s,d;
unsigned long i,n,di,si;
unsigned long x;
int n1,ok;
int n2,ogl,pal;
int a1,b1,i1,a2,b2;
long f,p,z,nf;
int nr1,nr2,nr3,nr4,nrtot,maxnr,minnr;
int main()
{ cout<<"Alege-ti algoritmul";
 cout<<endl<<"1.Suma si Diferenta dintre 2 numere";
 cout<<endl<<"2.Divizorii unui numar n si suma lor.";
 cout<<endl<<"3.Daca un numar N este prim sau nu.";
 cout<<endl<<"4.Oglindit si palindrom";
 cout<<endl<<"5.Sirul lui Fibonacci";
 cout<<endl<<"6.Divizorul comun a 2 nr";
 cout<<endl<<"7.Intervalul a,b";
 cout<<endl<<"8.Max/min 4 nr";
 cout<<endl<<"9.Nr perfect"<<"\n";
 cin>>x;
 if(x==1)
 { cout<<endl<<endl<<"---Alege-ti 2 numere---"; cout<<endl;
   cin>>a>>b;
   s=a+b;
   d=a-b;
   cout<<endl<<"Suma lor este:"<<s;
   cout<<endl<<"Diferenta lor este:"<<d;
 }
 if(x==2)
 { cout<<endl<<endl<<"---Alege un numar n---"; cout<<endl;
   cin>>n;
   cout<<"Divizorii sai sunt: ";
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {cout<<i<<" ";si=si+i;}
   }
     cout<<endl<<"Suma divizorilor sai sunt: "<<si;
     if(si-n==n)
        cout<<endl<<"Este numar perfect";
     else
        cout<<endl<<"Nu este numar perfect";
 }

 if(x==3)
 {
     cout<<endl<<endl<<"---Alege un numar n---"<<endl; cout<<endl;
     cin>>n1;ok=1;
     for(di=2;di<=n1/2;di++)
     {if(n1%di==0)
      ok=ok+1;

     }
     cout<<endl;
     if(ok==1) cout<<"Este prim";
     else cout<<"Nu este prim";
 }
 if(x==4)
 {cout<<endl<<endl<<"---Alege un numar n pentru a afla oglinditul sau---"; cout<<endl;
  cin>>n2;pal=n2;
  while(n2!=0)
  {
      ogl=ogl*10+n2%10;
      n2=n2/10;

  }
cout<<endl<<"Ogl=  "<<ogl;
if(ogl==pal)
    cout<<endl<<"Este palindrom" ;
else
    cout<<endl<<"Nu este palindrom";
 }
 if(x==7)
 {
     cout<<endl<<endl<<"Alegeti intervalul [a,b] pentru a afla ce numere se afle in el";
     cout<<endl;
     cin>>a1>>b1;

        while(a1<=b1 )
     {
     cout<<a1<<" ";
     a1=a1+1;
     }
 }
 if(x==6)
 {
     cout<<endl<<"Divizorul comun dintre 2 numere";
     while (a!=b)
  if (a>b)
   a=a-b;
  else
   b=b-a;

 }
 if(x==5)
 {cout<<"ati ales sirul lui Fibo";
 cin>>nf;
     p=z=1;
cout<<z<<" "<<p<<endl;
for(i=3;i<=nf;i++)
{
f=p+z;
cout<<f<<endl;
z=p;
p=f;
 }
   ; }
   if(x==8)
   {
       cout<<"Ati ales alg 8 cu max/min";
       cin>>nrtot;
       maxnr=1;minnr=100000;
       cout<<endl;
       while(nrtot!=0)
       {
           cin>>nr1; nrtot--;
           if(nr1>maxnr) maxnr=nr1;
           if(nr1<minnr) minnr=nr1;
       }
       cout<<"Max"<<maxnr<<endl;
       cout<<"Min"<<minnr<<endl;
   }
   if(x==9)
   {
    s=1;
    cout<<"n=";cin>>n;
    for(d=2;d<=n/2;d++)
    if(n%d==0) s=s+d;
    cout<<s<<endl;
    if(s==n) cout<<"nr perfect";
    else cout<<"nu este nr perfect"
   }

   return 0;
}
