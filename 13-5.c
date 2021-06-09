#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int cnt=0;
  int i=0;
  printf("\n");
  for(cnt=1;cnt<=iRow;cnt++)
  {
      for(i=1;i<=iCol;i++)
      {
          if((i==1 || i==iCol)||(cnt==1)||(cnt==iRow))
          {
              printf("%d\t",i);
          }
          else
          {
              printf("@\t");
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