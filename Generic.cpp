#include<iostream>
using namespace std;

template<class T>  // Template header
T Max(T x, T y)
{
	if(x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int i =10, j = 10, iRet = 0;
	double a = 3.10, b = 6.10, dRet = 0.0;
	char ch1 = 'G', ch2 = 'A', cRet = '\0';
	
	iRet = Max(i,j);
	cout<<"Max is : "<<iRet<<"\n";
	
	dRet = Max(a,b);
	cout<<"Maz is : "<<dRet<<"\n";
	
	cRet = Max(ch1,ch2);
	cout<<"Max is : "<<cRet<<"\n";
	
	return 0;
}