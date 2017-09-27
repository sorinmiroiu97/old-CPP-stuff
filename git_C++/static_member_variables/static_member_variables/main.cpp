#include <iostream>

using namespace std;

//constants AND static variables
static int x = 0;

void printNum();

int main()
{
	
	printNum();
	printNum();


	return 0;
}

void printNum()
{
	cout << (x += 5) << endl;
}