#include<iostream>
using namespace std;
class DB;
class DM
{
	float m,cm;
	public:
		void setvalue();
		friend void add(DB,DM);
};
class DB
{
	float inch,feet;
	public:
		void setvalue();
		friend void add(DB,DM);
};

void DM::setvalue()
{
	cout<<"entre value in cm"<<"\n";
	
	cin>>cm;
	cout<<"\n";
	m=cm/100;

}
void DB::setvalue()
{
	cout<<"entre value in feet";
	
	cin>>inch;
	cout<<"\n";
	feet=inch*12;
}

void add(DB db,DM dm)
{
	float xcm;
	xcm=db.inch/0.0254;
	cout<<"value in cm= "<<xcm+dm.cm<<"\n";
	cout<<"value in m= "<<(xcm+dm.cm)/100<<"\n";
	
}

int main()
{
	DM a;
	DB b;
	a.setvalue();
	b.setvalue();
	add(b,a);
	
	return 0;
}
	

		
