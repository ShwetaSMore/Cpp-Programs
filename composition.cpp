#include<iostream>
using namespace std;

class Hello
{	
public:
	int x;
	void fun()
	{
		cout<<"inside fun\n";
	}
};

Class Demo
{
public:
	int iNo;
	Hello hobj;   //Composition
	void gun()
	{
		cout<"Indide gun\n";
	}
};

int main()
{
	Demo dobj;
	dobj.hobj.fun();
	return 0;
}