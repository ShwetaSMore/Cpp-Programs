#include<iostream>

using namespace std;

class Demo
{
public:
	int a;
private:
	int b;
protected:
	int c;

public:
	Demo(int i,int j,int k)
	{
		cout<<"Constructor\n";
		this ->a = i;
		this ->b = j;
		this ->c = k;
	}
	void fun()   //void fun(Demo*const this)
	{
		cout<<"Value of a "<<this -> a<<"\n";  //10
		cout<<"Value of b "<<this -> b<<"\n";  //20
		cout<<"Value of c "<<this -> c<<"\n";  //30
	}
};   //End of Class Declaration
	
int main()
{
	cout<<"Inside Main\n";
	Demo*p = new Demo(10,20,30);   //Dynamic memory allocation
	//Demo obj(10,20,30);
	cout<<"value of a : "<<p->a<<"\n";   //Public Allowed - 10
	//cout<<"value of b : "<<p->b<<"\n";   //ERROR Accessing Private - Not Allowed
	//cout<<"value of c : "<<p->c<<"\n";   //ERROR No Derived class
	
	p->fun();  //Function Call    fun(p);  fun(100)
	delete p;
	return 0;
}