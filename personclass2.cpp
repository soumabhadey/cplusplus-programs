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

class Employee : public virtual  Person
{
	protected :
	long id;
	int salary;
	
	public :
	Employee() : Person() {}
	void input();
	void show();
};

class Student : public virtual Person
{
	protected :
	long roll;
	string dept;
	
	public :
	Student() : Person() {}
	void input();
	void show();
};

class Manager : public Employee, public Student
{
	protected :
	string branch;
	
	public :
	Manager() : Employee(), Student() {}
	void input();
	void show();
};

int main(void)
{
	cout << "enter name and age of a person\n";
	Person p;
	p.input();
	
	cout << "enter name, age, id, salary of an employee\n";
	Employee e;
	e.input();
	
	cout << "enter name, age, roll, department of a student\n";
	Student s;
	s.input();
	
	cout << \
	"enter name, age, id, salary, roll, department, branch of a manager\n";
	Manager m;
	m.input();
	
	cout << "person details\n";
	p.show();
	
	cout << "employee details\n";
	e.show();
	
	cout << "student details\n";
	s.show();
	
	cout << "manager details\n";
	m.show();
	
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

void Employee :: input()
{
	Person :: input();
	cin >> id >> salary;
}

void Employee :: show()
{
	Person :: show();
	cout << "id : " << id << endl << "salary : " << salary << endl;
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

void Manager :: input()
{
	Employee :: input();
	cin >> roll >> dept;
	cin >> branch;
}

void Manager :: show()
{
	Employee :: show();
	cout << "roll : " << roll << endl << "department : " << dept << endl;
	cout << "branch : " << branch << endl;
}









