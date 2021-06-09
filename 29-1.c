#include<stdio.h>
#include<stdbool.h>

bool check(unsigned int iNo,unsigned int iNo1)
{
    unsigned int iMask=0X000000f;
    unsigned int iResult;
    if((iNo1<1) || (iNo1>32))
    {
        return false;
    }
    iResult=iNo | iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else{
        return false;
    }
    
    
}
unsigned int main()
{
    unsigned int ivalue=0;
    unsigned int ivalue2=0;
    bool iRet=false;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    printf("enter the number2\n");
    scanf("%u",&ivalue2);
    
    iRet=check(ivalue,ivalue2);
    if(iRet==true)
    {
        printf("True");
        
    }
    else{
        printf("False");
    }
    
}