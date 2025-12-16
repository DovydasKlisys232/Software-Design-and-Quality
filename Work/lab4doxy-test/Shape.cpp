#include <iostream>
using namespace std;
/*************************************************
* base class called Shape
* 
* This shape class acts as a parent class and contains functions and parameters all other 
* inherited classes are required to modify and take.
* it has two protected members (height and width) and also two three member functions.
* Two of its members are setters and one is a virtual function which other classes must inherit and modify.
* This creates polymorphism.
* 
* The triangle class inherits from the shape class and takes the protected 
* members that it contains and uses them to get an area of a triangle by modifying the 
* virtual member function from the parent base class (shape).
*
* The code in main tests the triangle class by making an object, setting the parameters
* and then calculating the area of this triangle and printing it out.
*************************************************/
class Shape
{
	public:
	virtual int getArea() = 0;
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
	protected:
	int width;
	int height;
};

class Triangle: public Shape
{
	public:
	int getArea()
	{
		return (width * height)/2;
	}
};

int main(void)
{
	Triangle Tri;
	Tri.setWidth(5);
	Tri.setHeight(7);
	// Print the area of the object.
	cout << "Total Triangle area: " << Tri.getArea() << endl;
	return 0;
}
