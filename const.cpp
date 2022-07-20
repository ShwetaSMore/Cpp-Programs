#include<iostream>
using namespace std;

class Demo
{
public:
	int i;
	const int j;  //Constant charactristics
	
	Demo() : j(0)  //Initialization of constant j
	{
		cout<<"Default\n";
		i = 0;
	}
	Demo(int x,int y) : j(y)
	{
		cout<<"Paramerterized\n";
		i = x;
	}
};

int main()
{
	Demo obj1;
	//obj.j++;  //ERROR
	Demo obj2(11,21);
	
	return 0;
}