#include<iostream>

using namespace std;

class Demo   //Encapsulation
{
private:     //Abstraction
	int ino1;    
	int ino2;
	
public:
	Demo()
	{
		cout<<"Default\n";
		no1 = 0;
		n02 = 0;
	}
	Demo(int x,int y)    //Polymorphysim
	{
		cout<<"Paramerterised\n";
		no1 = x;
		n02 = y;
	}
	Demo(Demo &ref)
	{
		cout<<"Copy Constructor\n";
		no1 = ref.no1;
		no2 = ref.no2;
	}
	~Demo()
	{
		cout<<"Destructor\n";
	}
};

int main()
{
	Demo obj1;
	Demo obj2(10,20);
	Demo obj3(obj2);
	return 0;
}