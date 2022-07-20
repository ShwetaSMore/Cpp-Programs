#include<iostream>

using namespace std;

class Demo
{
public:
	int iNo1;
	int iNo2;
	//Demo(Demo*this,int i=10, int j= 20)
	Demo(int i = 10, int j = 20)//Parameterized Constuctor with default argument
	{
		iNo1 = i;
		iNo2 = j;
	}
	
	void Display(int X)   //void Display(Demo*this, int X)
	{
		cout<<"Value of no1 is :"<<iNo1;  //this->iNo1
		cout<<"Value of no2 is :"<<iNo2;  //this->iNo2
		cout<<"Value of X is :"<<X;
	}
};
	
int main()
{
	Demo obj1;  //10,20
	Demo obj2(11);  //11,20
	Demo obj3(11,21);  //11,21
	
	obj1.Display(51);   //Display(&obj1,51);  Display(100,15)
	obj1.Display(51);   //Display(&obj2,51);  Display(200,15)
	obj1.Display(51);   //Display(&obj3,51);  Display(300,15)
	return 0;
}