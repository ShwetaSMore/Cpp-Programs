//Program to toggle the bit and return updated number

#include<iostream>
using namespace std;

/*
	op1  op2   &   |   ^
   -----------------------
	 1    0    0   1   1
	 0    1    0   1   1 
	 1    1    1   1   0
 	 0    0    0   0   0

	iPos  = 5
	iMask = 0000 0000 0000 0000 0000 0000 0000 0001
	
	iMask = iMask << position - 1)
	iMask = iMask << (5-1)
	iMask = iMask << 4
	
	iNo	    0000  0000  1110  0100  1111  0100  1011  1010	
	iMask	0000  0000  0000  0000  0000  0000  0010  0000   ^
	--------------------------------------------------------
	iResult 0000  0000  1110  0100  1111  0100  1001  1010

*/

int ToggleBit(int iNo, int iPos)
{
	int iResult = 0;
	int iMask = 0x00000001;
	
	if((iPos<1)||(iPos>32))
	{
		return 0 ;
	}
	
	iMask = iMask << (iPos-1);
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	int iValue = 0, iRet = 0, iPos = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	cout<<"Enter position\n";
	cin>>iPos;
	
	iRet = ToggleBit(iValue,iPos);
	cout<<"Toggled number is : "<<iRet<<"\n";
	
	return 0;
}