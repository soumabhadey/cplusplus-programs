#include <iostream>
#include <string>

using namespace std;

class Education
{
	protected :
	string highq;
	
	public :
	Education();
	string gethighq();
	void show();
};

Education :: Education()
{
	cin >> highq;
}

string Education :: gethighq()
{
	return highq;
}

void Education :: show()
{
	cout << "highest qualification : " << highq << endl;
}









