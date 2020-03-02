#include<iostream>
using namespace std;

class timer
{
	float sec,min,hr;
	public:
		timer()
		{
			sec=0;
			min=0;
			hr=0;
		}
		timer(int ,int ,int );
		void display();
		friend void add(timer ,timer );
};

timer::timer(int x,int y,int z)
{
	sec=x;
	min=y;
	hr=z;
	
}
 void timer::display()
 {
 	cout<<"time is "<<hr<<":"<<min<<":"<<sec<<"\n";
 }
 
 void add(timer a,timer b)
 {
 	cout<<"total time is= "<<(((a.hr+b.hr)/3600)+((a.min+b.min)/60)+(a.sec+b.sec))<<"\n";
 }
int main()
 {
 	float a,b,c;
 	cout<<"enter seconds/min/hour"<<"\n";
 	cin>>a>>b>>c;
 	cout<<"\n";
 	timer k(a,b,c),h(10,20,30);
 	k.display();
 	add(k,h);
 	return 0;
 }
 
	

