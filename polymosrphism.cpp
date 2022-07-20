#include<iostream>

using namespace std;

class Demo
{
public:
	int Addition(int ino1,int ino2)   //Addition@2ii  1000
	{
		return ino1+ino2;
	}
	
	int Addition(int ino1,int ino2,int ino3)   //Addition@3iii
	{
		return ino1+ino2+ino3;
	}
	
	int Addition(int ino1,int ino2,int ino3,int ino4)   //Addition@4iiii
	{
		return ino1+ino2+ino3+ino4;
	}
};   //End of Class Declaration
	
int main()
{
	Demo obj;    //Object Creation
	int iRet = 0;
	
	iRet = obj.Addition(10,20);  //Addition@2ii(&obj,10,20)   CALL 1000
	cout<<iRet;
	
	iRet = obj.Addition(10,20,30);  //Addition@3iii(&obj,10,20,30)
	cout<<iRet;
	
	iRet = obj.Addition(10,20,30,40);  //Addition@4iiii(&obj,10,20,30,40)
	cout<<iRet;
	
	return 0;
}