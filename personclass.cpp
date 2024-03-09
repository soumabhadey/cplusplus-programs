#include <iostream>
#include <string>

using namespace std;

class Person
{
	protected :
	string name;
	int age;
	
	public :
	Person() {}
	void input();
	void show();
};

class Student : public Person
{
	protected :
	long roll;
	string dept;
	
	public :
	Student() : Person() {}
	void input();
	void show();
};

int main(void)
{
	cout << "enter name and age of a person\n";
	Person p;
	p.input();
	
	cout << "enter name, age, roll, department of a student\n";
	Student s;
	s.input();
	
	cout << "person details\n";
	p.show();
	
	cout << "student details\n";
	s.show();
	
	return 0;
}

void Person :: input()
{
	cin >> name >> age;
}

void Person :: show()
{
	cout << "name : " << name << endl << "age : " << age << endl; 
}

void Student :: input()
{
	Person :: input();
	cin >> roll >> dept;
}

void Student :: show()
{
	Person :: show();
	cout << "roll : " << roll << endl << "department : " << dept << endl;
}









