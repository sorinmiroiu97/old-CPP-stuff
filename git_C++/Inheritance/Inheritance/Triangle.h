#pragma once
//HEADER - BASE/PARENT CLASS
//Functions declarations

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>

using namespace std;

class Triangle
{
public:

	//Default constructor
	Triangle();

	//Overload constructor
	Triangle(int);

	//Destructor
	~Triangle();

	//Accessor functions

	int getHeight() const;

	//Mutator functions

	void setHeight(int);

	//triangle area

	double getArea(int) const;

private:
	//member variables

	int height;

protected:
	//member variables
};

#endif