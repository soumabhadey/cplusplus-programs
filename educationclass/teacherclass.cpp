#include <iostream>
#include <string>

#include "educationclass.cpp"
#include "staffclass.cpp"

using namespace std;

class Teacher : public virtual Education, public virtual Staff
{
	protected :
	string subjectp;
	
	public :
	Teacher();
	string getsubjectp();
	void show();
};
Teacher :: Teacher() : Education(), Staff()
{
	cin >> subjectp;
}
string Teacher :: getsubjectp()
{
	return subjectp;
}
void Teacher :: show()
{
	cout << "subject publication : " << subjectp << endl;
}
