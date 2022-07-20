#include <iostream>
using namespace std;

class Base
{
public: 
	int x,y;
	virtual void fun() 		 //1000
	{
		cout<<"Base fun\n";
	}
	void gun() 		  	 	 //2000
	{
		cout<<"Base gun\n";
	}
	virtual void sun() = 0;  //Pure Virtual Function(Abstract)
};

class Derived : public Base
{
public :
	int i,j;
	virtual void fun()	//4000     Overriding
	{
		cout<<"Derived fun\n";
	}
	virtual void run()	//6000		
	{
		cout<<"Derived run\n";
	}
	void sun()			//7000     Concrete Function
	{
		cout<<"Derived sun\n";
	}
};

int main()
{
	cout<<"Size of Base " <<sizeof(Base)<<"\n";
	cout<<"Size of Derived " <<sizeof(Derived)<<"\n";
	
    Base*bp = new Derived(); //Up Casting
	bp ->fun();		//CALL 4000
	bp ->sun();		//CALL 7000
    return 0;
}