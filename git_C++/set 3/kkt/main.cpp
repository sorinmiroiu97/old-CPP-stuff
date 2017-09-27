#include <iostream>

using namespace std;
int x;
int fib(int n){
  if(n<=1)
  return 1;
  else
  x=fib(n-1)+fib(n-2);
  return x;
}


int main(int argc, char const *argv[]) {
  int n;
  cout<<"n= ";cin>>n;
  cout<<fib(n);
  return 0;
}
