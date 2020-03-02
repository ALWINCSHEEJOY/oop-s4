#include<iostream>
using namespace std;

class number
{
	int x,y,z;
	public:
		void setvalue(int ,int ,int );
		void operator-();
		void display();
};
//to set values to variable
void number::setvalue(int e,int t,int g)
{
	x=e;
	y=t;
	z=g;
}
//to negate values using operator function
void number::operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
//to display values
void number::display()
{
	cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
}

int main()
{
	number s;
	int a,b,d;
	cout<<"enter values"<<"\n";
	cin>>a>>b>>d;
	cout<<"\n";

	s.setvalue(a,b,d);
	s.display();
	-s;
	s.display();
}	
	
	
