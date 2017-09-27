#include <iostream>

using namespace std;
int n=1,nr,d=1,s1=0,s2=0;
int main()
{
    cout<<"introdu un numar ";
    cin>>nr;
    while(n<nr)
    {
        d=1; s1=0;
        while(d<=n/2)
        {
            if(n%d==0) s1+=d;
            d++;
        }
        d=1; s2=0;
        while(d<=s1/2)
        {
            if(s1%d==0) s2+=d;
            d++;
        }
        if(n==s2&&n!=s1) cout<<s2<<" si "<<s1<<" sunt nr pereche"<<"\n";
        //else cout<<s2<<" si "<<s1<<" nu sunt nr pereche"<<"\n";

        n++;
    }
    return 0;
}
/*
#include <iostream>
#include<cstdio>
using namespace std;

int OKint(int x,int y)
{
int ok;
if(x<0 || y<0 || x>=y)
{
ok=0;
}
else
{
ok=1;
}
return ok;
}

int sumaD(int x)
{
int i,s=1;
for(i=2;i<=x/2;i++)
{
if(!(x%i))
{
s+=i;
}
}
return s;
}

int friends( int a,int b )
{
int ok;
if ( sumaD ( a ) == b && sumaD ( b ) ==a )
{
ok=1;
}
else
{
ok=0;
}
return ok;
}



int main()
{
int x,y,ok,i,j,f;
do
{
printf("Marginea inferioara a intervalului: ");
scanf("%d",&x);
printf("Marginea superioara a intervalului: ");
scanf("%d",&y);
    ok=OKint(x,y);
    if(ok==0)
    {
     printf("Numerele introduse nu pot determina un interval.\n");
     printf("Introduceti datele din nou!\n");
    }
}
while(!ok);
printf("Numere prietene din intervalul [%d, %d]: \n",x,y);
for(i=x;i<y;i++)
{
for(j=i+1;j<=y;j++)
{
f=friends(i,j);
if(f)
{
printf("%d si %d\n",i,j);
}
}
}
return 0;
}
*/
