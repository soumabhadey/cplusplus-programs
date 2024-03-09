#include <iostream>
#include <string>

using namespace std;

class Staff
{
	protected :
	long code;
	string name;
	
	public :
	Staff();
	long getcode();
	string getname();
	void show();
};

Staff :: Staff()
{
	cin >> code >> name;
}

long Staff :: getcode()
{
	return code;
}

string Staff :: getname()
{
	return name;
}

void Staff :: show()
{
	cout << "code : " << code << endl << "name : " << name << endl;
}










