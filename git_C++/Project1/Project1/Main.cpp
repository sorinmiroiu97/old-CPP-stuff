#include <iostream>
#include <string>

using namespace std;

const int CAPACITY = 5;

int main()
{
	
	string colors[CAPACITY];
	int i = 0;
	int numOfElements = 0;
	string input;

	cout << "enter colors (-1 to stop): ";
	cin >> input;

	while ((input != "-1") && (i < CAPACITY))
	{
		numOfElements++;
		colors[i] = input;
		i++;
		cin >> input;
	}

	for (int j=0; j < numOfElements; j++ )
	{

		cout << "Color #" << (j + 1) << " " << colors[j] << endl;
	}

	return 0;
}
