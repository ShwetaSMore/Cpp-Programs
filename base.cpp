#include<iostream>
using namespace std;

class Base
{	
public:
	int x,y;
	Base(int a,int b)
	{
		cout<<"Base Constructor\n";
		x = a;
		y = b;
	}
};

class Derived : public Base    
{
public:
	int a,b;
	Derived(int i,int j,int k,int l):Base(k,l)  //Base Member Initailization
	{
		cout<<"Derived Constructor\n";
		a = i;
		b = j;
	}
};

int main()
{
	Derived dobj(10,20,30,40);
	cout<<dobj.x<<"\n";
	cout<<dobj.y<<"\n";
	cout<<dobj.a<<"\n";
	cout<<dobj.b<<"\n";
	return 0;
}