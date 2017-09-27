#include <iostream>
#include <vector>

using namespace std;

int main()
{

	//format: vector<datatype> nameofvector
	// myvector.push_back(value) - adds an element to the END of the vector, ALSO resizes it
	// myvector.at(index) - return element at specified index no
	// myvector.size() - returns an unsigned int equal top the no of elements
	// myvector.begin() - reads vector from first element (aka from index 0)
	// myvector.insert(myvector.begin() + integer, new value) - adds element BEFORE specified index no
	// myvector.erase(myvector.begin() + integer) - removes element AT specified index no
	// myvector.clear() - removes all elements in vector
	// myvector.empty() - return boolean value if wheter it's empty or not

	vector<int> myvector;

	myvector.push_back(3);
	myvector.push_back(7);
	myvector.push_back(4);
	myvector.push_back(12);
	myvector.push_back(9);


	cout << "vector: ";

	for (unsigned int i = 0; i < myvector.size(); i++)
	{
		cout << myvector.at(i) << " "; //sau cout<<myvector[i]
	}

	myvector.insert(myvector.begin() + 3, 5);

	cout << endl << "vector: ";

	for (unsigned int i = 0; i < myvector.size(); i++)
	{
		cout << myvector.at(i) << " "; //sau cout<<myvector[i]
	}

	myvector.erase(myvector.begin() + 4);

	cout << endl << "vector: ";

	for (unsigned int i = 0; i < myvector.size(); i++)
	{
		cout << myvector.at(i) << " "; //sau cout<<myvector[i]
	}

	if (myvector.empty())
	{
		cout << endl << "is empty";
	}
	else cout << endl << "is not empty";

	myvector.clear();

	if (myvector.empty())
	{
		cout << endl << "is empty";
	}
	else cout << endl << "is not empty";

	cout << endl;

	return 0;
}

//Function definitions

