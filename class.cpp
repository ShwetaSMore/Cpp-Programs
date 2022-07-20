#include<iostream>   //Header File

using namespace std;

class Demo
{
public:
	//Characteristics
	int ino1;    
	int ino2;
	
	//Behaviour
	Demo()		//Constructor
	{
		cout<<"Inside constructor\n";
		ino1 = 0;
		ino2 = 0;
	}
	~Demo() 	//Destructor
	{
		cout<<"Inside Destructor\n";
	}
	void fun()
	{
		cout<<"Inside Fun\n";
	}
	void gun()
	{
		cout<<"Inside gun\n";
	}
};

int main()
{
	cout<<"Inside main\n";    //Printing statement
	
	Demo obj1;
	Demo obj2;
	obj1.fun();
	obj2.gun();
	
	return 0;
}
