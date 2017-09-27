#pragma once
//HEADER - DERIVED/CHILD CLASS
//Functions declarations

#ifndef ISOSCELES_H
#define ISOSCELES_H

#include <iostream>
#include "Triangle.h"

using namespace std;

class Isosceles: public Triangle
{
public:

	//Default constructor
	Isosceles();

	//Overload constructor
	Isosceles(int, int, int);

	//Destructor
	~Isosceles();

	//Accessor functions
	int getBase() const;

	int getSideOne() const;

	//Mutator functions

	void setBase(int);

	void setSideOne(int);


	int getPerimeter() const;

	void printInfo() const;
	//prints the perimeter and area


private:
	//member variables
	int base;
	int sideOne;
};

#endif