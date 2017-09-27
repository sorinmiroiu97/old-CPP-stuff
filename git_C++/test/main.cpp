#include<iostream>
#include<cstring>
using namespace std;
int suma(int a)
{
    int uc,s=0;
    while(a!=0){
        uc=a %10;
        s+= uc;
        a=a/10;
    }
  return s;
}int s,f,a,rest;
  int main() {
  cout<<"a= ";cin>>a;
  f=suma(a);
  if(f%2!=0)
  cout<<f;
  return 0;
}

