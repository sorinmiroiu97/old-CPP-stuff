#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const int capacity = 300;
	int s[capacity], i, nr = 0, n, sum = 0, numar;

	ifstream file;
	file.open("SIR.TXT");

	if (file.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	while (!file.eof())
		{
			file >> n;
			sum += n;
			nr++;
		}
	file.close();

	numar = ((nr + 1)*(nr + 2)) / 2 - sum;
	cout << "nr lipsa e: " << numar << endl;

	return 0;
}