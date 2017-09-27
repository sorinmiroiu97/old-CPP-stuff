#include <iostream>
using namespace std;
 int n;
 int F(int n)
{if(n == 0 || n == 1) return 1;
    else return 2*F(n-1)+2*F(n-2);
}

int main()
{cout << "n=";
 cin >> n;
cout << F(n);
return 0;
}
