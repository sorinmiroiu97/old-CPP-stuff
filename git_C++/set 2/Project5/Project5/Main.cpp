#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int a, b;

	ifstream file;
	file.open("numere.in");

	if (file.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	file >> a >> b;

	if (a < b) cout << "suma e: " << a + b << endl;
	else cout << "diferenta e: " << a - b << endl;

	file.close();

	return 0;
}