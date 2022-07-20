#include <iostream>
using namespace std;

class Base
{
public: 
	int x,y;
	void fun(int i)    			//Function Overloading
	{
		cout<<"Base fun 1\n";
	}
	void fun(int i, int j)		//Function Overloading 
	{
		cout<<"Base fun 2\n";
	}
	void gun() 					//Defination
	{
		cout<<"Base gun\n";
	}
	void sun() 					//Defination
	{
		cout<<"Base sun\n";
	}
};

class Derived : public Base
{
public :
	int i,j;
	void mun()					//Defination
	{
		cout<<"Derived mun\n";
	}
	void gun()					//ReDefination		
	{
		cout<<"Derived gun\n";
	}
};
    
int main()
{
    Derived dobj;
	dobj.gun();
    return 0;
}