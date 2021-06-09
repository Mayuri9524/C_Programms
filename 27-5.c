#include<stdio.h>
#include<stdbool.h>

bool check(unsigned int iNo)
{
    unsigned int iMask=0X8000001;
    unsigned int iResult;
    iResult=iNo & iMask;
    if(iResult==iMask)
    {
        return true;
    }
    return false;
    
}
int main()
{
    unsigned int ivalue=0;
    bool iRet=false;
    printf("enter the number\n");
    scanf("%u",&ivalue);
    
    iRet=check(ivalue);
    if(iRet==true)
    {
        printf("the bit is on");
        
    }
    else{
        printf("the bit is off");
    }
}