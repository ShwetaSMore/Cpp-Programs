#include<iostream>
using namespace std;

void fun(int x)	//Call by value
{
	x++;
}

void gun(int * p)	//Call by address
{
	(*p)++;
}

void sun(int &ref)	//Call by reference
{
	ref ++;
}

int main()
{
	int a = 10, b = 10, c = 10;
	cout<<"Before call to fun "<<a<<"\n"; //10
	fun(a);		//fun(10)
	cout<<"After call to fun "<<a<<"\n";	//10
	
	cout<<"Before call to gun "<<b<<"\n"; //10
	gun(&b);	//gun(920) 
	cout<<"After call to fun "<<b<<"\n";	//11
	
	cout<<"Before call to sun "<<c<<"\n"; //10
	sun(c);		//sun(c) 
	cout<<"After call to sun "<<c<<"\n";	//11
	
	return 0;
}