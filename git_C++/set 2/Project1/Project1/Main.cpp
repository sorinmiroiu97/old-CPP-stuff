#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	const int capacity = 50;
	int s[capacity], i, j, n, m;

	ofstream file;
	file.open("FISIERE.DAT");

	if (file.fail())
	{
		cerr << "FILE ERROR" << endl;
		exit(1);
	}

	cout << "introdu n= ";
	cin >> n;
	
	for (i = 1; i <= n; i++)
	{
		cout << "s[" << i << "]= ";
		cin >> s[i];
	}
	cout << endl;

	i = 1;
	while (i<n)
	{
		m = s[i] + s[i + 1];
		n++;
		for (j = n; j>i ; j--)
			s[j] = s[j - 1];
		s[i + 1] = m;
		i += 2;
	} //inserarea sumei intre elem

	for (i = 1; i <= n; i++)
	{
		file << "s[" << i << "]= " << s[i] << "  ";
	}

	file.close();
	return 0;
}