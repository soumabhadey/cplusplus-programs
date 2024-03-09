#include <iostream>
#include <math.h>

#define PI 3.14

using std :: cout;
using std :: cin;
using std :: endl;

class Circle
{
	private :
		double radius;
	
	public :
		void input();
		double area();
		double perimeter();
};

int main(void)
{
	Circle c;
	
	c.input();
	cout << "area : " << c.area() << endl << "perimeter : " << c.perimeter() \
	<< endl;
}

void Circle :: input()
{
	cout << "enter radius : ";
	cin >> radius;
}

double Circle :: area()
{
	return (PI * pow(radius, 2));
}

double Circle :: perimeter()
{
	return (2 * PI * radius);
}