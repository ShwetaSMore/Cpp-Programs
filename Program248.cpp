#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node*lchild;
	struct node*rchild;
}NODE,*PNODE,**PPNODE;

void Insert(PPNODE Head, int no)
{
	PNODE temp = *Head;
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(1)   // Unconditional loop  for(;;)
		{
			if(temp->data == no)
			{
				cout<<"Duplicate node\n";
				
				delete newn;
				break;
			}
			else if(no < (temp->data))  // Lahan data
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(no > (temp->data))  // Motha data
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
		}
	}
}

bool Search(PNODE Head, int no)
{
	if(Head == NULL)   // if tree is empty
	{
		return false;
	}
	else 	// tree contains atleast one node
	{
		while(Head != NULL)
		{
			if(Head->data == no)  // node found
			{
				break;
			}
			else if(no > (Head->data))
			{
				Head = Head->rchild;
			}
			else if(no < (Head->data))
			{
				Head = Head->lchild;
			}
		}
		if(Head == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int Count(PNODE Head)
{
	static  int iCnt = 0;
	
	if(Head != NULL)
	{
		iCnt++;
		Count(Head->lchild);
		Count(Head->rchild);
	}
	return iCnt;
}


int main()
{
	int no = 0;
	PNODE first = NULL;
	bool bRet = false;
	int iRet = 0;
	
	Insert(&first,51);
	Insert(&first,21);
	Insert(&first,101);
	
	cout<<"Enter to search\n";
	cin>>no;
	
	bRet = Search(first,no);
	if(bRet == true)
	{
		cout<<"Data is there\n";
	}
	else
	{
		cout<<"Data is not there\n";
	}		
	
	iRet = Count(first);
	cout<<"Number of nodes are : "<<iRet<<"\n";
	return 0;
}