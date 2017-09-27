#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const int capacity = 300;
	int s[capacity], nr, n, poz=0, sum=0;

	ifstream file;
	file.open("NUMERE.TXT");

	if (file.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	file >> nr;

	while (!file.eof())
	{
		file >> n;
		if(n%2==0)
		sum += n;
	}

	cout << sum << endl;

	file.close();

	return 0;
}