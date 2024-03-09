#include <iostream>

using namespace std;

class Date
{
	int dd;
	int mm;
	int yy;
	
	public:
	void input();
	bool isvalid();
	void show();
};

void Date :: input()
{
	cout << "enter date in dd/mm/yyyy format: ";
	char temp;
	cin >> dd >> temp >> mm >> temp >> yy;
}

bool Date :: isvalid()
{
	if(dd < 1 || dd > 31 || mm < 1 || mm > 12 || yy < 1) {
		
		return false;
	}
	switch(mm) {
		
		case 2:
		if(dd > 29) {
			
			return false;
		}
		break;
		
		case 4:
		case 6:
		case 9:
		case 11:
		if(dd > 30) {
			
			return false;
		}
	}
	if(!(yy % 4 == 0 && (yy % 100 != 0 || yy % 400 == 0))) {
		
		if(dd > 28) {
			
			return false;
		}
	}
	return true;
}

void Date :: show()
{
	cout << dd << "/" << mm << "/" << yy << endl;
}

int main()
{
	Date dt;
	dt.input();
	if(dt.isvalid()) {
		
		cout << "valid" << endl;
	}
	else {
		
		cout << "invalid" << endl;
	}
	dt.show();
	return 0;
}



