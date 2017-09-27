#include <iostream>
#include <vector>

using namespace std;

//Functions declaration
void fillvector(vector<int>&);
//fiillvector
//@param vector<int>& - the vector to be filled

void printvector(const vector<int>&);
//printvector
//@param const vector<int>& - the vector to be printed

void reverse(const vector<int>&);
//reverse
//@param const vector<int>& - vector to be printed backwards

void printevens(const vector<int>&);
//printevens - only prints even nos in vector
//@param vector<int>& - the vector to be printed

void replace(vector<int>&);
//replace
//@param vector<int>& - vector in question

int main()
{
	vector<int> myvector;

	fillvector(myvector);
	printvector(myvector);
	reverse(myvector);
	printevens(myvector);
	replace(myvector);

	return 0;
}

//Functions definitions

void fillvector(vector<int>& newmyvector)
{
	cout << "type in a list of numbers (-1 to stop): ";
	int input;
	cin >> input;

	while (input != -1)
	{
		newmyvector.push_back(input);
		cin >> input;
	}
	cout << endl;
}

void printvector(const vector<int>& newmyvector)
{
	cout << "vector: ";

	for (unsigned int i = 0; i < newmyvector.size(); i++)
	{
		cout << newmyvector.at(i) << " ";
	}
	cout << endl;
}

void reverse(const vector<int>& newmyvector)
{
	cout << "vector reversed: ";

	for (unsigned int i= newmyvector.size() - 1; i >= 0; i--)
	{
		cout << newmyvector.at(i) << " ";
	}
	cout << endl;
}

void printevens(const vector<int>& newmyvector)
{
	cout << "evens: ";

	for (unsigned int i = 0; i < newmyvector.size(); i++)
	{
		if (newmyvector.at(i)%2==0) 
		{
			cout << newmyvector.at(i);
		}
	}
	cout << endl;
}

void replace(vector<int>& newmyvector)
{
	int old, replace;

	cout << endl << "type in a no to be replaced with another no";
	cin >> old >> replace;

	for (unsigned int i = 0; i < newmyvector.size(); i++)
	{
		if (newmyvector.at(i)==old)
		{
			newmyvector.at(i) = replace;
		}
	}

	printvector(newmyvector);
	cout << endl;
}