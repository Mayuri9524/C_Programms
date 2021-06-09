#include<stdio.h>
#include<stdbool.h>

int check(unsigned int iNo)
{
    unsigned int iMask=0X000000f;
    unsigned int iResult;
    iResult=iNo | iMask;
    return iResult;
    
    
}
int main()
{
    unsigned int ivalue=0;
    int iRet=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    
    iRet=check(ivalue);
    printf("%d",iRet);
    
    
}