#include<stdio.h>
#include<stdlib.h>


struct node
{
   int data;
   struct node *next;
};

typedef struct node* PNODE;
typedef struct node NODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=No;
	newn->next=NULL;
	if(*Head == NULL)
	{
		*Head=newn;
	}
	else{
		newn->next=*Head;
		*Head=newn;
	}
	
}
int Count(PNODE Head,int iNo)
{
	int Count=0;
	int Occur=0;
	while(Head!= NULL)
	{
		
		if( Head->data==iNo)
		{
			Occur=Count;
		}
		Head=Head->next;
		Count++;
	}
	return Occur;
}
int main()
{
	PNODE First=NULL;
	int iValue=0,iRet=0;
	printf("Enter the number");
	scanf("%d",&iValue);
	
	InsertFirst(&First,11);
	InsertFirst(&First,21);
	InsertFirst(&First,31);
	InsertFirst(&First, 31);
	iRet=Count(First,iValue);
	printf("%d\n",iRet);
	return 0;
}