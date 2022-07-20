//Program for additon of numbers

#include<iostream>
using namespace std;


class Marvellous
{
public:
	int Addition(int x, int y)
	{
		int iAns = 0;
		iAns = x + y;
		return iAns;
	}
};

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;
    cout<<"Enter first number\n";
    cin>>iNo1;
    cout<<"Enter 2nd number\n";
    cin>>iNo2;

	Marvellous mobj;
    iRet = mobj.Addition(iNo1,iNo2);
	
	cout<<"Addition is : "<<iRet<<"\n";
	
    return 0;
}