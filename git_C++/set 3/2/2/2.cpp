#include <iostream>

using namespace std;

int fib(int);

int main()
{
	int n;
	cout << "al n-lea termen: ";
	cin >> n;
	cout << fib(n);

	return 0;
}

int fib(int x)
{
	if (x == 1)		return 0;
	if (x == 2) 	return 1;
	else
		return (fib(x - 1) + fib(x - 2));
}