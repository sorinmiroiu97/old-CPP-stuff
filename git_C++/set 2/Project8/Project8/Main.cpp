#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	int n, i=0, sum = 0, cifre=0, uc, m, maxi=0, stefanbanica, junior=0;

	ifstream in;
	in.open("intrare.txt");

	if (in.fail())
	{
		cerr << "IFILE ERROR" << endl;
	}

	ofstream out;
	out.open("iesire.txt");

	if (out.fail())
	{
		cerr << "OFILE ERROR" << endl;
	}

	in >> n;
	m = n;

	cout << "cifra pe care o cautati in numarul " << n << endl;
	cin >> stefanbanica;
	while (n != 0)
	{
		uc = n % 10;
		if (uc > maxi) maxi = uc;
		if (uc == stefanbanica) junior++;
		cifre++;
		n /= 10;
		sum += uc;
		i++;
	}

	out << "cate cifre are nr citit: " << cifre << endl;
	out << "suma cifrelor numarului citit: " << sum << endl;
	out << "cea mai mare cifra a numarului citit " << maxi << endl;
	out << "de cate ori apare 'stefan banica' " << stefanbanica << " in numarul citit: ccc" << junior << endl;

	in.close();
	out.close();

	return 0;
}