//Program to accept 2 position and toggle those bits and return updated number

#include<iostream>
using namespace std;

int ToggleBit(int iNo, int iPos1, int iPos2)
{
	int iResult = 0;
	int iMask = 0;
	int iMask1 = 0x00000001;
	int iMask2 = 0x00000001;
	
	iMask1 = iMask1 << (iPos1-1);
	iMask2 = iMask2 << (iPos2-1);
	
	iMask = iMask1 | iMask2;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	int iValue = 0, iRet = 0, iPos1 = 0, iPos2 = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	cout<<"Enter 1st position\n";
	cin>>iPos1;
	cout<<"Enter 2nd position\n";
	cin>>iPos2;
	
	iRet = ToggleBit(iValue,iPos1,iPos2);
	cout<<"Toggled number is : "<<iRet<<"\n";
	
	return 0;
}