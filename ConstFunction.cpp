#include<iostream>
using namespace std;

class Demo
{
public:
	int i;
	int j;  
	
	Demo() 
	{
		i = 0;j = 0;
		cout<<"Default\n";
	}
	Demo(int x,int y)
	{
		i = x;j = y;
		cout<<"Paramerterized\n";
	}
	void fun(int a)  //void fun(Demo*const this)
	{
		i++;
		j++;
		cout<<"Inside fun\n";
		cout<<"value of a is:"<<a<<"\n";
		cout<<"value of i is:"<<i<<"\n";
		cout<<"Value of j is:"<<j<<"\n";
	}
	void gun(int a, const int b)const   //void gun(const Demos*const this)
	{
		cout<<"Inside gun\n";
		
		int no = 10;
		const int x = 20;
		a++;  //Allowed
		cout<<"value of a is:"<<a<<"\n";
		// b++;  Not Allowed 
		// x++;  Not Allowed
		
		no++; //Allowed
		cout<<"value of no is:"<<no<<"\n";
		//i++; j++;  ERROR
	}
};

int main()
{
	const Demo obj(10,20);
	//obj.fun(11);   //fun(&obj,11);
	obj.gun(11,21); //gun(&obj,11);
	
	Demo obj2(10,20);
    obj2.fun(11);   //fun(&obj2,11);
	obj2.gun(11,21); //gun(&obj2,11);
	
	return 0;
}