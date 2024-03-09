

class Typist : public virtual Staff
{
	protected :
	int speed;
	
	public :
	Typist();
	int getspeed();
	void show();
};
Typist :: Typist() : Staff()
{
	cin >> speed;
}
int Typist :: getspeed()
{
	return speed;
}
void Typist :: show()
{
	cout << "speed : " << speed << endl;
}
