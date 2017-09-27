#include <iostream>
#include <string>

using namespace std;

const int capacity = 39;

//Function declarations
void fillarray(int[],int&);
//fillarray
//@param int [] - scores of students
//@param int& - no of stundents

void printarray( int[], int);
//printarray
//@param const int[] - scores of students
//@param int - number of students

int main()
{

	int scores[capacity];
	int numofelements = 0;

	fillarray(scores, numofelements);
	printarray(scores, numofelements);

	return 0;
}

//Function definitions

void fillarray(int newscores[], int& numofelements)
{
	int i = 0;
	int score;
	cout << "type in scores of students (-1 to stop): ";
	cin >> score;
	while ((score != -1) && (i < capacity))
	{
		numofelements++;
		newscores[i] = score;
		i++;
		cin >> score;
	}
}

void printarray( int newscores[], int numofelements)
{
	cout << "scores: ";
	for (int i = 0; i < numofelements; i++)
	{
		cout << newscores[i] << " ";
	}
}