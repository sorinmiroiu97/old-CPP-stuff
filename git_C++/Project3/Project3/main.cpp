#include <iostream>
#include <string>

using namespace std;

//Constants
const int rows = 4;
const int cols = 3;

//Function declarations
void fillscores(int[rows][cols]);
//fillscores
//@param int[][] - scores and all tests from students

void printscores(int[rows][cols]);
//printscores
//@param int[][] - scores and all tests from students

int main()
{

	int scores[rows][cols];

	fillscores(scores);
	printscores(scores);

	return 0;
}

//Function definitions

void fillscores(int newscores[rows][cols])
{
	int score;

	for (int i = 0; i < rows; i++)
	{
		cout << "enter scores for test #" << (i + 1) << ": ";

		for (int j = 0; j < cols; j++)
		{
			cin >> score;
			newscores[i][j] = score;
		}
	}
}

void printscores(int newscores[rows][cols])
{
	for (int i = 0; i < cols; i++)
	{
		cout << endl << "students " << (i + 1) << " scores: ";

		for (int j = 0; j < rows; j++)
		{
			cout << newscores[j][i] << " ";
		}
	}
}