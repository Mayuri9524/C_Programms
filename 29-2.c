#include<stdio.h>
#include<stdbool.h>

unsigned int check(unsigned int iNo,unsigned int iNo1)
{
    unsigned int iMask=0X0000001;
    unsigned int iResult=0;
    if((iNo1<1) || (iNo1>32))
    {
        return -1;
    }
    iMask=iMask<<(iNo-1);
    iResult=iNo & iMask;
    if(iResult == iMask)
    {
        return iResult;
    }
    
    
    
}
unsigned int main()
{
    unsigned int ivalue=0;
    unsigned int ivalue2=0;
    unsigned int iRet=0;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    printf("enter the number2\n");
    scanf("%u",&ivalue2);
    
    iRet=check(ivalue,ivalue2);
    printf("%u",iRet);
    
}