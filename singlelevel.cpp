#include<iostream>
using namespace std;

class Base
{	
public:
	int x,y;
	
	Base()
	{
		cout<<"Base Constructor\n";
	}
	~Base()
	{
		cout<<" Base Destructor\n";
	}
	
	void fun()
	{
		cout<<"inside fun\n";
	}
};

class Derived : public Base    //Single Level Inheritance
{
public:
	int a,b;
	
	Derived()
	{
		cout<<"Derived Constructor\n";
	}
	~Derived()
	{
		cout<<"Derived Destructor\n";
	}
	
	void gun()
	{
		cout<<"Indide gun\n";
	}
};

int main()
{
	//Base bobj;
	Derived dobj;
	dobj.fun();
	
	return 0;
}