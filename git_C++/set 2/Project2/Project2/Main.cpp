#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const int capacity = 50;
	int s[capacity], i, j, n, m;

	ifstream file;
	file.open("NUMERE.TXT");

	if (file.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	file >> n;

	for (i = 1; i <= n; i++)
		file >> s[i];

		cout << "primul elem: " << s[1] << endl;
		cout << "al doilea elem: " << s[n] << endl;

	file.close();
	return 0;
}