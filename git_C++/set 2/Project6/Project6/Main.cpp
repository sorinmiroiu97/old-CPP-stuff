#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const int capacity = 10;
	int a, b, prod, uc[capacity], i=0;

	ifstream file;
	file.open("numere.in");

	ofstream out;
	out.open("numere.out");

	if (file.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	if (out.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	file >> a >> b;

	prod = a * b;

	while (prod != 0)
	{
		uc[i] = prod % 10;
		prod /= 10;
		i++;
	}

	out << "ultimele 2 cifre sunt: " << uc[i - 2] << " si " << uc[i-1] << endl;

	file.close();

	return 0;
}