#include <iostream>

using namespace std;

class Height
{
	int foot;
	int inch;
	
	public:
	Height() {}
	Height(int, int);
	double into_cm();
	Height operator -(Height);
	bool operator <(Height);
	bool operator ==(Height);
	void adjust();
	void show();
};

int main()
{
	int f1, f2, i1, i2;
	
	cout << "enter 2 heights\n";
	cin >> f1 >> i1 >> f2 >> i2;
	
	Height h1(f1, i1), h2(f2, i2);
	
	cout << h1.into_cm() << "cm\n" << h2.into_cm() << "cm\n";
	
	Height h3 = h1 - h2;
	
	if(h1 < h2)
		cout << "student2 taller\n";
	
	else if(h1 == h2)
		cout << "equal\n";
	
	else
		cout << "student1 taller\n";
	
	return 0;
}

Height :: Height(int f, int i)
{
	foot = f;
	inch = i;
	adjust();
}

double Height :: into_cm()
{
	return ((foot * 12 + inch) * 2.54); 
}

Height Height :: operator -(Height h)
{
	return Height(foot - h.foot, inch - h.inch);
}

bool Height :: operator <(Height h)
{
	return ((foot * 12 + inch) < (h.foot * 12 + h.inch));
}

bool Height :: operator ==(Height h)
{
	return ((foot * 12 + inch) == (h.foot * 12 + h.inch));
}

void Height :: adjust()
{
	foot += inch / 12;
	inch %= 12;
}

void Height :: show()
{
	cout << foot << "ft" << inch << "in\n";
}



