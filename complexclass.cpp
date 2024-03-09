#include <iostream>
#include <math.h>

using std :: cin;
using std :: cout;

class Complex
{
	double real;
	double img;

	public :
	Complex() {}
	Complex(double, double);
	Complex(Complex &);
	void input();
	double getreal();
	double getimg();
	Complex operator +(Complex);
	Complex operator -(Complex);
	Complex operator *(Complex);
	Complex operator /(Complex);
	void show();
};

int main(void)
{
	cout << "enter 4 complex  numbers\n";
	Complex a, b, c, d;
	a.input();
	b.input();
	c.input();
	d.input();
	
	Complex ans = a - b * c + d;

	ans.show();

	return 0;
}

Complex :: Complex(double r, double i)
{
	real = r;
	img = i;
}

Complex :: Complex(Complex & c)
{
	real = c.getreal();
	img = c.getimg();
}

void Complex :: input()
{
	cin >> real >> img;
}

double Complex :: getreal()
{
	return real;
}

double Complex :: getimg()
{
	return img;
}

Complex Complex :: operator +(Complex c)
{
	return Complex(real + c.getreal(), img + c.getimg());
}

Complex Complex :: operator -(Complex c)
{
	return Complex(real - c.getreal(), img - c.getimg());
}

Complex Complex :: operator *(Complex c)
{
	return Complex(real * c.getreal() - img * c.getimg(), img * c.getreal() + \
	real * c.getimg());
}

Complex Complex :: operator /(Complex c)
{
	double d = pow(c.getreal(), 2) + pow(c.getimg(), 2);
	
	return Complex((real * c.getreal() + img * c.getimg()) / d, (img * \
	c.getreal() - real * c.getimg()) / d);
}

void Complex :: show()
{
	cout << real << " + (" << img << ")i\n"; 
}













