#include <iostream>


using namespace std;

// person name age gender

class Person{
	char name[20], gender;
	int age;
	
	protected:
		void print_details();
		void read_details();
};

class Department{
	char name[20], desig[20];
	int salary;
	
	protected:
		void print_details();
		void read_details();
};

class Employee: public Person, Department{
	int id;
	
	public:
		void get();
		void print();
};



int main(){
	Employee e1, e2;
	e1.get();
	e2.get();
	e1.print();
	e2.print();
	cout<<"\n";
	return 0;
}




// Person

void Person::print_details(){
	cout<<"\n\nName   : "<<name;
	cout<<"\nAge    : "<<age;
	cout<<"\nGender : "<<gender;
}

void Person::read_details(){
	cout<<" enter Name   : ";
	cin>>name;
	cout<<" enter Age    : ";
	cin>>age;
	cout<<"enter Gender : ";
	cin>>gender;
}

// Department

void Department::print_details(){
	cout<<"\n Department : "<<name;
	cout<<"\n Designation: "<<desig;
	cout<<"\n Salary     : "<<salary;
}

void Department::read_details(){
	cout<<"enter Department : ";
	cin>>name;
	cout<<"enter Designation: ";
	cin>>desig;
	cout<<"enter Salary     : ";
	cin>>salary;
}

// Employee

void Employee::get(){
	cout<<"ID    :";
	cin>>id;
	Person::read_details();
	Department::read_details();
}

void Employee::print(){
	Person::print_details();
	cout<<"\nID     : "<<id;
	Department::print_details();
}


