class Officer : public virtual Education, public virtual Staff
{
	protected :
	string grade;
	
	public :
	Officer();
	string getgrade();
	void show();
};
Officer :: Officer() : Education(), Staff()
{
	cin >> grade;
}
string Officer :: getgrade()
{
	return subjectp;
}
void Officer :: show()
{
	cout << "grade : " << grade << endl;
}
