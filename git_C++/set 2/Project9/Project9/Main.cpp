#include <iostream>
#include <fstream>

using namespace std;

int factorial(int);
//factorial - functie care va returna factorialul
//@param int - numarul n

int main()
{
	int n;
	ofstream f;
	f.open("Factorial.txt");

	if (f.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	cout << "introdu nr pana la care se vor afisa cuplurile: ";
	cin >> n;

	for (int i = 0; i < n; i++)
		f << i << " " << factorial(i) << endl;

	f.close();
	return 0;
}

int factorial(int n)
{
	int fact = 1;
	if (n == 0 || n == 1) return 1;
	else
		for (int i = 1; i <= n; i++)
			fact = fact*i;
	return fact;
}