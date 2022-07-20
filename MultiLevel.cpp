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


class Derived : public Base    
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


class Myderived : public Derived    //Multi Level inheritance
{
public:
{
	int date;
	MyDerived()
	{
		cout<<"Derived Constructor\n";
	}
	~MyDerived()
	{
		cout<<"Derived Destructor\n";
	}
	
	void sun()
	{
		cout<<"Indide sun\n";
	}
}
};

int main()
{
	//Base bobj;
	Derived dobj;
	dobj.fun();
	
	return 0;
}