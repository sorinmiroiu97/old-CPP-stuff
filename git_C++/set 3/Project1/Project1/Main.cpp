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

int fib(int n)
{
	if (n == 1)		return 0;
	if (n == 2) 	return 1;
	else
		return (fib(n - 1) + fib(n - 2));
}