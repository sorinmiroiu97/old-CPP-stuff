#include "Triangle.h"

//Functions definitions

//Default Constructor
Triangle::Triangle()
{
	height = 0;
}

//Overload Constructor
Triangle::Triangle(int newHeight)
{
	height = newHeight;
}

//Destructor
Triangle::~Triangle()
{

}

//Accessor functions
int Triangle::getHeight() const
{
	return height;
}

//Mutator functions
void Triangle::setHeight(int newHeight)
{
	height = newHeight;
}

//get Area
double Triangle::getArea(int base) const
{
	return (0.5 * base * height);
}