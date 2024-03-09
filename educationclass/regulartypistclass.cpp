#include "typistclass.cpp"

class Regular : public virtual Typist
{
	protected :
	int salary;
	
	public:
	Regular();
	int getsalary();
	void show();
};
Regular :: Regular() : Typist()
{
	cin >> salary;
}
int Regular :: getsalary()
{
	return salary;
}
void Regular :: show()
{
	cout << "salary : " << salary << endl;
}