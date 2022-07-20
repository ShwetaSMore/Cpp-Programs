#include<iostream>
using namespace std;

class Demo
{
private:
	int i,j;

public:	
	Demo(int x = 10, int y = 20)
	{
		i = x;
		j = y;
	}
	void Display()
	{
		cout<<i<<"\t"<<j<<"\n";
	}
friend Demo operator ++ (Demo& );
friend Demo operator ++ (Demo& , int);
};

Demo operator ++ (Demo& op)		//Pre Increment
{
	op.i++;
	op.j++;
	return op;
}

Demo operator ++ (Demo& op, int)	//Post Increment
{
	Demo temp(op.i, op.j);
	op.i++;
	op.j++;
	return temp;
}

int main()
{
	Demo obj1(10,20);
	Demo ret1(0,0);
	
	ret1 = ++obj1;
	cout<<"Demo of Pre Increment\n";
	ret1.Display();	//11  21
	obj1.Display();	//11  21	
	
	
	
	Demo obj2(10,20);
	Demo ret2(0,0);
	
	ret2 = obj2++;
	cout<<"Demo of Post Increment\n";
	ret2.Display();	//10  20
	obj2.Display(); //11  21
	
	return 0;
}