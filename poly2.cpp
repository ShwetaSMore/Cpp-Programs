#include <iostream>
using namespace std;

class Base
{
public: 
	int x,y;
	
	void fun(int i, int j)
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
	char ch = 'A';
	int no = 11;
	
	char*cp1 = &ch; 	//No Casting
	int*ip = &no		//No Casting
	
	char*cp2 = (char*)&no;		//Up Casting
	int*ip = &ch;		//Down Casting 
	
    Base*bp1 = new Base();			//No casting
	Derived*dp1 = new Derived();	//No Casting
	
	Base*bp2 = new Base(); 			//Up Casting
	//Derived*dp2 = new Derived();  //Down Casting(Invalid)   ERROR
	
    return 0;
}