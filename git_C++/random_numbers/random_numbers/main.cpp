#include <iostream>
#include <ctime>

using namespace std;

int main()
{

	srand(time(0));

	unsigned int output = rand() % 100 + 1;

	for (int i = 0; i < 25; i++)
	{
		cout << output << endl;
		output = rand() % 100 + 1;
	}

	return 0;
}