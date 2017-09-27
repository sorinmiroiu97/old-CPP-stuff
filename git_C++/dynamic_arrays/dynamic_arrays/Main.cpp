#include <iostream>

using namespace std;

const int capacity = 1000;

int main()
{
	int *dArray;
	dArray = new int[capacity];

	dArray[0] = 3;
	dArray[1] = 7;
	dArray[2] = 2;
	dArray[3] = 9;

	cout << "array: ";

	for(int i=0; i<4; i++)
	{
		cout << dArray[i] << " ";
	}

	delete [] dArray;
	dArray = NULL;

	return 0;
}