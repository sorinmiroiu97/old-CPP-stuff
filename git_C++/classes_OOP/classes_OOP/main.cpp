#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

int main()
{

	string name;
	int height;
	double weight;

	cout << "Enter your name: ";
	cin >> name;
	cout << "enter your height(inches): ";
	cin >> height;
	cout << "enter your weight(pounds): ";
	cin >> weight;
	
	//BMI Student_1; asa acceseaza default constructorul
	//BMI Student_1(variabilele din overload constructor) asa acceseaza overload constructor

	BMI Student_1(name, height, weight);

	cout << endl << "Patient name: " << Student_1.getname() << endl <<
		"height: " << Student_1.getheight() << endl <<
		"weight: " << Student_1.getweight() << endl;

	cout << endl;

	cout << "Enter your name: ";
	cin >> name;
	cout << "enter your height(inches): ";
	cin >> height;
	cout << "enter your weight(pounds): ";
	cin >> weight;


	BMI Student_2;

	Student_2.setname(name);
	Student_2.setheight(height);
	Student_2.setweight(weight);

	cout << endl << "Patient name: " << Student_2.getname() << endl <<
		"height: " << Student_2.getheight() << endl <<
		"weight: " << Student_2.getweight() << endl <<
		"BMI: " << Student_2.calculateBMI() << endl;

	cout << endl << "Student 1 name:" << Student_1.getname() << endl;

	return 0;
}