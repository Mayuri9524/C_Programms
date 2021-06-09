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
int Count(PNODE Head)
{
	int Count=0;
	
	while(Head!= NULL)
	{
		
		Count=Count+(Head->data);
		Head=Head->next;	
	}
	
	return Count;
}
int main()
{
	PNODE First=NULL;
	int iValue=0,iRet=0;
	
	
	InsertFirst(&First,10);
	InsertFirst(&First,20);
	InsertFirst(&First,30);
	InsertFirst(&First, 40);
	iRet=Count(First);
	printf("%d\n",iRet);
	return 0;
}