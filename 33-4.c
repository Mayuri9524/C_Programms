#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
  PNODE newn=NULL;
  newn=(PNODE)malloc(sizeof(NODE));
  newn->data=No;
  newn->next=NULL;
  if(*Head == NULL)
  {  *Head=newn;
  }
  else
  {  newn->next=*Head;
     *Head=newn;
  }}
  
  void Display(PNODE Head)
{
	int Max=0;
	while(Head != NULL)
	{
		if(Head->data >Max)
		{
			Max=Head->data;
		}
		Head=Head->next;
	}
	printf("%d\n",Max);
}



int main()
{
 PNODE First=NULL;
 int iRet=0;
 InsertFirst(&First,10);
 InsertFirst(&First,20);
 InsertFirst(&First ,30);
 InsertFirst(&First,40);
 Display(First);
 
 
 
 return 0;
 }