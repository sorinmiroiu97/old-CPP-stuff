#pragma once
//Header - Functions Declarations

#include<iostream>
#include<string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI
{
public:
	//Default Constructor
	BMI();

	//Overload Constructor
	BMI(string, int, double);

	//Destructor
	~BMI();

	//Accessor Functions
	string getname() const;
		// getname - returns name of patient

	int getheight() const;
		//getheight - returns height of patient

	double getweight() const;
		//getweight - returns weight of patient

	//Mutator Functions
	void setname(string);
		//setname - sets name of patient
		//@param string - name of patient

	void setheight(int);
		//setheight	- sets height of patient
		//@param int - height of patient 

	void setweight(double);
		//setweight - sets weight of patient
		//@param double - weight of patient

	double calculateBMI() const;
		//calculateBMI - calculates BMI of patient
		//@return double - BMI of student 

private:
	//member variables
	string newname;
	int newheight;
	double newweight;

};

#endif