
// Accept 2 numbers fro user and return the maximum and minimum number.

# include "Header2.h"

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter first number\n");
    scanf("%d",&iNo1);
    
    printf("Enter second number\n");
    scanf("%d",&iNo2);
    
    iRet = Maximum(iNo1,iNo2);
    
    printf("Maximum number is : %d\n",iRet);
    return 0;
}









