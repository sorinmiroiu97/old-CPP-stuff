#include <iostream>
#include <fstream>
#include <string>
//#include <stdlib.h>
using namespace std;

int main()
{

	//ifstream infile;
	//infile.open("list.txt");

	////check for error
	//if (infile.fail())
	//{
	//	cerr << "Error Opening File" << endl;
	//	exit(1);
	//}

	//string item;
	//int count = 0;

	////read a file until you've reached the end
	//while (!infile.eof())
	//{
	//	infile >> item;
	//	if (item == "orange")
	//	{
	//		count++;
	//	}
	//}

	//cout << count << " items found" << endl;

	ofstream outfile;
	outfile.open("sample.txt");

	outfile << "first number" << 5 << endl;
	outfile.close();

	return 0;
}