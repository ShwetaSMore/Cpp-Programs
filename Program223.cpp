#include<iostream>
using namespace std;

//Specific function
void Swap(char *p, char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

//Generic function
template<class T>
void SwapX(T *p, T *q)
{
	T temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char x = 'A', y = 'B';
	SwapX(&x,&y);
	
	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";
	
	int i = 11, j = 21;
	SwapX(&i,&j);
	
	cout<<"Value of i becomes : "<<i<<"\n";
	cout<<"Value of j becomes : "<<j<<"\n";
	
	return 0;
}