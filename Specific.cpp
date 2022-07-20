using namespace std;
#include<iostream>

int MaxI(int x, int y)
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
double MaxD(double x, double y)
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
char MaxC(char x, char y)
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
	int i =10, j = 20, iRet = 0;
	double a =3.10, b = 6.10, bRet = 0.0;
	
	iRet = MaxI(i,j);
	cout<<"Max is :"<<iRet<<"\n";
	bRet = MaxD(a,b);
	cout<<"Max is :"<<bRet<<"\n";
	
	return 0;
}