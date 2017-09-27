#include <iostream>

using namespace std;

int counter(int);

int main()
{

	int num;
	cout << "type in an integer: ";
	cin >> num;

	cout << counter(num) << endl;

	return 0;
}

int counter(int count)
{
	if (count <= 1)
	{
		return 1;
	}
	else 
	{
		return(count * counter(count-1));
	}
}