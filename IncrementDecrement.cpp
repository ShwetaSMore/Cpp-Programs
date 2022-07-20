#include<iostream>
using namespace std;

int main()
{
	int i = 10;
	int j = 10;
	int x ,y;
	
	x = i++;		//Post-Increment
	
	y = ++j;		//Pre-Increment
	
	cout<<x<<"\n";	//10
	cout<<y<<"\n";	//11
	
	cout<<i<<"\n";	//11
	cout<<j<<"\n";	//11
	
//--------------------------------------------------------------------
	
	x = i--;		//Post-Decrement
	
	y = --j;		//Pre-Decrement
	
	cout<<x<<"\n";	//10
	cout<<y<<"\n";	//9
	
	cout<<i<<"\n";	//9
	cout<<j<<"\n";	//9
	
	return 0;
}