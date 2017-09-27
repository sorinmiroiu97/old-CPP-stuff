#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int a, b, n, m, i;

	ifstream in;
	in.open("numere.in");

	ofstream out;
	out.open("numere.out");

	if (in.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	if (out.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	in >> a >> b;

	cout << "introdu n ";
	cin >> n;

	for (i = a; i <= b; i++)
	{
		if (i == n) out << "nr " << n << " se afla in interval" << endl;
	}

	in.close();
	out.close();

	return 0;
}
