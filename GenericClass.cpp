#include<iostream>
using namespace std;

template<class T>	//Template Header
class Array
{
public:
	T*Arr;			//<-----------
	int size;
	
	Array(int);
	~Array();
	void Accept();
	void Display();
	T Maximum();
	T Minimum();
};

template<class T>
T Array<T> :: Maximum()
{
	T Max = Arr[0];
	int i = 0;
	for(i = 0; i < size; i++)
	{
		if(Arr[i] > Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}

template<class T>
T Array<T> :: Minimum()
{
	T Min = Arr[0];
	int i = 0;
	for(i = 0; i < size; i++)
	{
		if(Arr[i] < Min)
		{
			Min = Arr[i];
		}
	}
	return Min;
}

template<class T>
Array<T> :: Array(int length)	//constructor
{
	size = length;
	Arr = new T[size];  //<--------
}
template<class T>
Array<T> :: ~Array()	 //destructor
{
	delete []Arr;
}

template<class T>	
void Array<T> :: Accept()
{
	int i = 0;
	cout<<"Enter the elements\n";
	for(i = 0; i < size; i++)
	{
		cin>>Arr[i];
	}
}

template<class T>
void Array<T> :: Display()
{
	int i = 0; 
	cout<<"Elements are \n";
	for(i = 0;i < size; i++)
	{
		cout<<Arr[i]<<"\n";
	}
}

int main()
{
	Array<int>obj1(5);	//<----------
	obj1.Accept();
	obj1.Display();
	int iRet  = obj1.Maximum();
	cout<<"Max is : "<<iRet<<"\n";
	
	int jRet  = obj1.Minimum();
	cout<<"Min is : "<<jRet<<"\n";
	
	
	Array<char>obj2(4);
	obj2.Accept();
	obj2.Display();
	
	return 0;
}