class Casual : public virtual Typist
{
	protected :
	int dwage;
	
	public:
	Casual();
	int getdwage();
	void show();
};
Casual :: Casual() : Typist()
{
	cin >> dwage;
}
int Casual :: getdwage()
{
	return salary;
}
void Casual :: show()
{
	cout << "daily wage : " << dwage << endl;
}