#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckGreater(int iNo)
{
    BOOL bFlag = FALSE;

    if(iNo > 100)
    {
        bFlag = TRUE;
    }

    return bFlag;

}

int main()
{
    BOOL bRet = FALSE;
    int iValue = 0;
    printf("Enter the number : \n");
    if(scanf("%d",&iValue) == 1)
    {
        bRet = CheckGreater(iValue);
    }
    else
    {
        printf("Enter valid input\n");
    }

    if(bRet == TRUE)
    {
        printf("%d is greater than 100",iValue);
    }
    else
    {
        printf("%d is not greater than 100",iValue);
    }
    

    return 0;
}