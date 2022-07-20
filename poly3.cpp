#include <iostream>
using namespace std;

class Base
{
public: 
	int x,y;
	void fun()  //1000
	{
		cout<<"Base fun\n";
	}
	void gun()  //2000
	{
		cout<<"Base gun\n";
	}
	void sun()  //3000
	{
		cout<<"Base sun\n";
	}
};

class Derived : public Base
{
public :
	int i,j;
	void gun()	//4000				//Re-Defination
	{
		cout<<"Derived gun\n";
	}
	void sun()	//5000				//Re-Defination		
	{
		cout<<"Derived sun\n";
	}
	void run()	//6000				//Defination		
	{
		cout<<"Derived run\n";
	}
};

int main()
{
	cout<<"Size of Base " <<sizeof(Base)<<"\n";   		//8 bytes
	cout<<"Size of Derived " <<sizeof(Derived)<<"\n";	//16 bytes
	
    Base*bp = new Derived(); 	  //Up Casting
	bp ->fun();		//CALL 1000
	bp ->gun();		//CALL 2000  ?????
	bp ->sun();
    return 0;
}