#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 3 sides of a triangle"<<endl;
    cin>>a>>b>>c;
    if(a==b&&b==c)
        cout<<"equilateral triangle"<<endl;
    else if(a==b||b==c||c==a)
        cout<<"isoceles triangle"<<endl;
    else
        cout<<"scalene triangle"<<endl;
}