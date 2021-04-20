// Accept number from user and display all the numbers till that number.
// Input : 8
// Output : 1   2   3   4   5   6   7   8

// Input : -6
// Output : 1   2   3   4   5   6



#include <stdio.h>

void Display(int iNo)   
{
    int iCnt = 0;
    if(iNo ==0) 
        return;
    }
    if(iNo < 0)
        iNo = -iNo;
    }
    //      1               2               3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);    
    }
   
}
int main()  
{
    int iNo = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}







