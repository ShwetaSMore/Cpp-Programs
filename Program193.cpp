//Program to toggle 1st and last nible of an number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleNible(UINT iNo)
{
	UINT iResult = 0;
	UINT iMask = 0xF000000F;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	UINT iValue = 0, iRet = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;

	iRet = ToggleNible(iValue);
	cout<<"Toggled number is : "<<iRet<<"\n";
	
	return 0;
}