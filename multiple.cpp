#include<iostream>
using namespace std;

class Base2
{	
public:
	int x,y;
	
	Base()
	{
		cout<<"Base1 Constructor\n";
	}
	~Base()
	{
		cout<<" Base1 Destructor\n";
	}
	
	void fun()
	{
		cout<<"inside fun\n";
	}
};

class Base2
{	
public:
	int a,b;
	
	Base()
	{
		cout<<"Base2 Constructor\n";
	}
	~Base()
	{
		cout<<" Base2 Destructor\n";
	}
	
	void gun()
	{
		cout<<"inside gun\n";
	}
};



class Derived : public Base2, Base1     //Multiple Inhertance
{
public:
	int data;
	
	Derived()
	{
		cout<<"Derived Constructor\n";
	}
	~Derived()
	{
		cout<<"Derived Destructor\n";
	}
	
	void sun()
	{
		cout<<"Indide sun\n";
	}
};


int main()
{
	//Base bobj;
	Derived dobj;
	dobj.fun();
	
	return 0;
}