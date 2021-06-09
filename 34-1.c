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
	
	while(Head != NULL)
	{ 
	  if(Head->data % 2 ==0)
	  {
		  printf("%d",Head->data);
	  }
	   
	}
		Head=Head->next;
	
	
}



int main()
{
 PNODE First=NULL;
 int iRet=0;
 InsertFirst(&First,11);
 InsertFirst(&First,28);
 InsertFirst(&First ,17);
 InsertFirst(&First,41);
 InsertFirst(&First,6);
 InsertFirst(&First,89);
 Display(First);
 
 
 
 return 0;
 }