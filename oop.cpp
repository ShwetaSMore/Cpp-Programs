#include<iostream>
using namespace std;

class Array
{
private:
	int*ptr;	//Not accessible outside class
	int size;
	
public:
	Array(int no = 5)  //Parameretized constructor with default value
	{
		cout<<"Constructor\n";
		size = no;
		ptr = new int[size];
	}
	~Array()   //Destructor
	{
		cout<<"Destructor\n";
		delete []ptr;
	}
	void Accept()
	{
		int iCnt = 0;
		cout<<"Enter the elements\n";
		for(iCnt=0; iCnt<size; iCnt++)
		{
			cin>>ptr[iCnt];
		}
	}
	void Display()
	{
		cout<<"Elements are\n";
		int iCnt = 0;
		for(iCnt=0; iCnt<size; iCnt++)
		{
			cout<<ptr[iCnt]<<"\n";
		}
	}
};

int main()
{
	cout<<"Inside Main\n";
	int value = 0;
	cout<<"Enter number of elements\n";
	cin>>value;
	Array*obj = NULL;
	obj = new Array(value);
	obj -> Accept();
	obj -> Display();
	delete obj;
	return 0;
}