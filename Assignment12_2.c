#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit == 0)
        {
            bFlag = TRUE;
            break;
        }
    }
    return bFlag; 
}



int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        bRet = CheckZero(iValue);
    }
    else
    {
        printf("Invalid input. Please enter a valid number\n");
    }

    if(bRet == TRUE)
    {
        printf("%d cotains zero\n",iValue);
    }
    else
    {
        printf("%d does not cotain zero\n",iValue);
    }

    return 0;
}