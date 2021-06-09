#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    
    char ch='\0';
    char ch1='\0';
    printf("\n");
    for(int i=0;i<iRow;i++)
    {   
        
        for(int j=0,ch='A',ch1='a';j<iCol;j++)
        {
           if(i%2==0)
           {
             printf(" %c\t",ch);
             ch++;
           }
           else if(i%2!=0)
           {
               printf(" %c\t",ch1);
               ch1++;
           }
        }
        
        printf("\n");
    }
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}