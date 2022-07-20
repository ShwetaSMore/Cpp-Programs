#include <iostream>
using namespace std;

class Base
{
public: 
	int x,y;
	virtual void fun()  //1000
	{
		cout<<"Base fun\n";
	}
	virtual void gun()  //2000
	{
		cout<<"Base gun\n";
	}
	virtual void sun()  //3000
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
	virtual void run()	//6000				//Defination		
	{
		cout<<"Derived run\n";
	}
};

int main()
{
	cout<<"Size of Base " <<sizeof(Base)<<"\n";			//16 Bytes due to virtual pointer
	cout<<"Size of Derived " <<sizeof(Derived)<<"\n";	//24 Bytes due to virtual pointer
	
    Base*bp = new Derived(); 	  //Up Casting
	bp ->fun();		//CALL 1000
	bp ->gun();		//CALL 2000  ?????
	bp ->sun();
    return 0;
}