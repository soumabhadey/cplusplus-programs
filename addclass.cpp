#include <iostream>
#include <cmath>

using namespace std;

class Complex;

class Add
{
    public:
    int addition(int, int);
    float addition(float, float, int);
    Complex addition(Complex, Complex);
};

class Complex
{
    double real;
    double img;

    public:
    Complex() {};
    Complex(double, double);
    void show();
    double getreal();
    double getimg();
};

int main(void)
{
    int a1, b1;
    float a2, b2;
    int c2;
    double r1, i1, r2, i2;
    Add ad;

    cout << "enter 2 integers : ";
    cin >> a1 >> b1;

    cout << "addition : " << ad.addition(a1, b1) << endl;

    cout << "enter 2 floating point numbers and 1 integer : ";
    cin >> a2 >> b2 >> c2;

    cout << "addition : " << ad.addition(a2, b2, c2) << endl;

    cout << "enter 2 complex numbers\n";
    cin >> r1 >> i1;
    cin >> r2 >> i2;

    Complex cmp1(r1, i1), cmp2(r2, i2);

    cout << "addition : ";
    ad.addition(cmp1, cmp2).show();

    return 0;
}

int Add :: addition(int a, int b)
{
    return a+b;
}

float Add :: addition(float a, float b, int c)
{
    return a+b+c;
}

Complex Add :: addition(Complex c1, Complex c2)
{
    return Complex(c1.getreal() + c2.getreal(), c1.getimg() + c2.getimg());
}

Complex :: Complex(double r, double i)
{
    real = r;
    img = i;
}

void Complex :: show()
{
    if(real == 0 && img == 0) {

        cout << 0;
    }
    else {

        if(real != 0) {
         
            cout << real;

            if(img > 0) {

                cout << "+";
            }
        }

        if(img != 0) {

            if(abs(img) != 1) {

                cout << img;
            }

            cout << "i";
        }
    }
    cout << endl;
}

double Complex :: getreal()
{
    return real;
}

double Complex :: getimg()
{
    return img;
}









