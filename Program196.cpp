/*
Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
*/

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleRange(UINT iNo, int iStart, int iEnd)
{
	UINT iMask1 = 0xFFFFFFFF, iMask2 = 0xFFFFFFFF, iMask = 0;
	UINT iResult = 0;
	
	iMask = (0xFFFFFFFF<<(iStart-1)) & (0xFFFFFFFF>>(32-iEnd));
	
	iResult = iNo ^ iMask;  //<------------------
	return iMask;
}
/*
iStart = 5
iEnd = 16
 0000  0000  0000  0000  1111  1111  1111  0000

iMask1 = 0xFFFFFFFF;
iMask2 = 0xFFFFFFFF;
---------------------------------------------------------
iMask1 = iMask1 << (iStart-1)
 1111  1111  1111  1111  1111  1111  1111  0000

iMask2 = iMask2 >> (32-iEnd);
 0000  0000  0000  0000  1111  1111  1111  1111
---------------------------------------------------------
iMask = iMask1 & iMask2;
   1111  1111  1111  1111  1111  1111  1111  0000
&  0000  0000  0000  0000  1111  1111  1111  1111
----------------------------------------------------------
   0000  0000  0000  0000  1111  1111  1111  0000
   
*/
int main()
{
	UINT iValue = 0, iRet = 0, iStart = 0, iEnd = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	cout<<"Enter starting position\n";
	cin>>iStart;
	cout<<"Enter ending position\n";
	cin>>iEnd;
	
	iRet = ToggleRange(iValue,iStart,iEnd);
	cout<<"Toggled number is : "<<iRet<<"\n";
	
	return 0;
}