#include<iostream>
using namespace std;
#include<ctime>
class stopwatch
{
	double x;
	clock_t time_begin,time_end;
	public:
		void start();
		void stop();
		void show();
		stopwatch();
		~stopwatch();
};
//intialise starting time =0
stopwatch::stopwatch()
{
	x=0;
}
//to distroy constructor
stopwatch::~stopwatch()
{
	show();
	cout<<"instructor distroyed"<<"\n";	
}
//to start clock
void stopwatch::start()
{
	time_begin=clock();
	cout<<"clock started"<<"\n";
	
}
//to stop clock
void stopwatch::stop()
{
	time_end=clock()-time_begin;
	x=(float)time_end/CLOCKS_PER_SEC;
	
	cout<<"clock stop"<<"\n";
}
//to display
void stopwatch::show()
{
	cout<<x<<"seconds"<<"\n";
}

int main()
{
	stopwatch a;
	int c=0;
	a.start();
	for(int i=0;i<100000;i++)
	{
		c++;
	}
	a.stop();
	a.show();
	return 0;
}
