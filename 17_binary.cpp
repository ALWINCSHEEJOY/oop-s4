#include<iostream>
using namespace std;

class complex
{
	int a,b;
	public:
		void getvalue()
		{
			cout<<"enter value"<<"\n";
			cin>>a>>b;
		}
	
	void display();

	 complex operator+(complex ob)
{	complex t;
	t.a=a+ob.a;
	t.b=b+ob.b;
	return(t);
}

 complex operator-(complex ob)
	{
		complex t;
		t.a=a-ob.a;
		t.b=b-ob.b;
		return(t);
		
	}
	};
	
void complex::display()
{
	cout<<a<<"+"<<b<<"i"<<"\n";
}


int main()
{
	complex ob1,ob2;
	ob1.getvalue();
	ob2.getvalue();
	complex result1,result2;
	result1=ob1+ob2;
	result2=ob1-ob2;
	
	ob1.display();
	ob2.display();
	
	result1.display();
	result2.display();
	
}

	
	
	
	
